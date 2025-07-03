#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from custom_interfaces.msg import Tracks, Track
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.patches import Rectangle
from std_msgs.msg import Float32, Bool

#constants of the car. Values in meters.
CAR_WIDTH = 0.30
CAR_LENGTH = 0.55
LIDAR_POS = 0.15 #15 cm from the front bumper. Assumed to be in the center laterally.

"""Class determining the lead vehicle, if it exists. """
class LV_Determination(Node):

	def __init__(self):
		super().__init__('lv_determination')

		# Create subscriptions
		self.subscription = self.create_subscription(
    		Tracks,
    		'/dt/tracks',
    		self.input_callback,
            10
		)
		self.subscription

		# Create publishers
		self.lv_long_dist_pub = self.create_publisher(Float32, 'lv_long_dist', 10)
		self.lv_present_pub = self.create_publisher(Bool, 'lv_present', 10)

	# determines lead vehicle properties, if it exists
	def input_callback(self, tracks):
		closest_lat_dist = 1e9
		closest_long_dist = 1e9
		curr_lvt = -1

		for i in range(tracks.num_tracks):
			track_lat_dist = tracks.tracks[i].position_y
			track_long_dist = tracks.tracks[i].position_x
			if abs(track_lat_dist) < closest_lat_dist and track_long_dist > 0:
					closest_long_dist = track_long_dist
					closest_lat_dist = track_lat_dist
					curr_lvt = i

		if abs(closest_lat_dist) > CAR_WIDTH:
			lv_present = False
			print("No lead veh present")
		else:
			lv_present = True
			print("Cluster " + str(curr_lvt) + " has positionX = " + str(closest_long_dist) + " and posY = " + str(closest_lat_dist))

		# Publish longitudinal distance of LV
		long_dist_msg = Float32()
		long_dist_msg.data = closest_long_dist
		self.lv_long_dist_pub.publish(long_dist_msg)

		# Publish lv_present boolean
		lv_present_ = Bool()
		lv_present_.data = lv_present
		self.lv_present_pub.publish(lv_present_)

	# Use this callback to view surrounding tracks & lead vehicle from BEV.
	# All functions below this are for debugging only.
	# Not used during deployment.
	def visualization_callback(self, tracks):

		self.draw_ego_veh()
		self.draw_clusters(tracks)
		self.draw_trajectory()

		lvt = self.lead_veh_determination(tracks)
		print(str(lvt) + "\n")

		self.draw_lead_veh(lvt)

		plt.draw()
		# plt.xlim([-0.5, 3])
		plt.ylim([-1, 1])
		plt.pause(0.00001)

		#Clear the canvas.
		plt.clf()

		lvt = self.lead_veh_determination(tracks)

	def draw_ego_veh(self):
		plt.gca().add_patch(Rectangle((-(CAR_LENGTH-LIDAR_POS), -(CAR_WIDTH/2)), CAR_LENGTH, CAR_WIDTH))

	def draw_clusters(self, tracks):

		for i in range(tracks.num_tracks):
			#self.X_pos.append(tracks.track[i].positionX)
			#self.Y_pos.append(tracks.track[i].positionY)
			#print(tracks.track[i].positionY, tracks.track[i].positionX, tracks.track[i].width)
			track_posX = tracks.tracks[i].position_x
			track_posY = tracks.tracks[i].position_y
			track_width = tracks.tracks[i].width
			track_len = tracks.tracks[i].length

			plt.gca().add_patch(Rectangle((track_posX - track_len/2, track_posY - track_width/2), track_len, track_width, facecolor='red'))

		#clusters = plt.scatter(self.X_pos, self.Y_pos, color='red')

	def draw_trajectory(self):

		dx = 0.01
		dy = 0.01
		#plt.plot([LIDAR_POS, 2], [CAR_WIDTH/2, CAR_WIDTH/2], 'b-')
		plt.arrow(LIDAR_POS, 0, 1, 0, color='b', shape='full', head_width=0.05)

	# used only for visualization purposes; deprecated otherwise
	def lead_veh_determination(self, tracks):

		closest_dist = 1e9
		curr_lvt = -1

		for i in range(tracks.num_tracks):
			if abs(tracks.tracks[i].position_y) < closest_dist and tracks.tracks[i].position_x > 0:
				closest_dist = tracks.tracks[i].position_y
				curr_lvt = i
		#print"Curr LVT is: ", curr_lvt

		return tracks.tracks[curr_lvt]

	def draw_lead_veh(self, lvt):
		plt.gca().add_patch(Rectangle((lvt.position_x - lvt.length/2, lvt.position_y - lvt.width/2), lvt.length, lvt.width, facecolor='green'))

def main(args=None):
    rclpy.init(args=args)
    lvd = LV_Determination()
    rclpy.spin(lvd)

    lvd.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
