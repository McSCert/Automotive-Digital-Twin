import rclpy
from rclpy.node import Node
from custom_interfaces.msg import Bboxes, Bbox, Tracks, Track
import math

"""Class to convert Tracks messages into BBoxes messages."""
class TracksToBboxes(Node):
    def __init__(self):
        super().__init__('tracks_to_bboxes')
        self.declare_parameters(
            namespace='',
            parameters=[
                ('min_area', rclpy.Parameter.Type.DOUBLE),
                ('min_dist', rclpy.Parameter.Type.DOUBLE),
				('min_y', rclpy.Parameter.Type.DOUBLE)
            ]
        )

        # subscribe to Tracks messages
        self.subscription = self.create_subscription(
            Tracks,
            '/dt/tracks',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

        # publish Bboxes messages
        self.publisher = self.create_publisher(Bboxes, '/dt/bboxes', 10)

    def listener_callback(self, msg):
        # convert Tracks into Bboxes format
        bboxesMsg = self.convert_tracks_to_bboxes(msg)
        self.publisher.publish(bboxesMsg)

    def convert_tracks_to_bboxes(self, tracksMsg):
        # conversion process between Tracks and Bboxes
        bboxesMsg = Bboxes()
        bboxesMsg.header.stamp = self.get_clock().now().to_msg()

        # get filtering params from config
        min_area = self.get_parameter('min_area').get_parameter_value().double_value
        min_dist = self.get_parameter('min_dist').get_parameter_value().double_value
        min_y = self.get_parameter('min_y').get_parameter_value().double_value

        # convert each track into bbox format
        for i in range(tracksMsg.num_tracks):
            if (i >= 30):
                self.get_logger().warning("Number of tracks exceeded 30, truncating to first 30 tracks...")

            track = tracksMsg.tracks[i]

            # filter out small and invalid tracks
            if (track.width * track.length < min_area or
                math.sqrt(math.pow(track.position_x, 2) + math.pow(track.position_y, 2) ) < min_dist or
				track.position_x < min_y):
                # skip track
                continue

            # construct Bbox
            bboxMsg = Bbox()
            # timestamp of track
            bboxMsg.header.stamp = track.stamp
            # flips x, y coordinate system for plotting
            bboxMsg.point1.x = track.position_y - track.width
            bboxMsg.point1.y = track.position_x - track.length
            bboxMsg.point2.x = track.position_y + track.width
            bboxMsg.point2.y = track.position_x - track.length
            bboxMsg.point3.x = track.position_y + track.width
            bboxMsg.point3.y = track.position_x + track.length
            bboxMsg.point4.x = track.position_y - track.width
            bboxMsg.point4.y = track.position_x + track.length
            # sets height
            bboxMsg.height = track.height
            # sets object class by length and width
            # also estimates bbox height if not provided by track
            if track.length > 0.75 or track.width > 0.5:
                bboxMsg.object_class = 2
                if (bboxMsg.height == 0):
                    bboxMsg.height = 1.0
            else:
                bboxMsg.object_class = 1
                if (bboxMsg.height == 0):
                    bboxMsg.height = 0.4
            # adds bbox to list
            bboxesMsg.bboxes.append(bboxMsg)
            bboxesMsg.num_bboxes += 1

        return bboxesMsg

def main(args=None):
    rclpy.init(args=args)

    tracks_to_bboxes = TracksToBboxes()

    rclpy.spin(tracks_to_bboxes)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    tracks_to_bboxes.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
