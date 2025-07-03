import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d.art3d import Poly3DCollection
import numpy as np
import math
from pdb import set_trace as bp

"""Class to plot cuboid-style visualization of tracks and ego properties."""
class CuboidVisualizer:
    # Private functions --------------------------------------------------------
    def __createBox(self, bbox):
        # Create 6 2D polygons representing faces of box.
        # Params:
        # 	bbox: [5x1] list, contains bbox information of
        # 		form [pt1, pt2, pt3, p4, h] where pt = [x,y].
        # 		Assumes points are in sorted rotational order.
        #
        # Returns:
        # 	faces: [6,5,3] array containing 6 faces consisting of
        # 		5 points (4 unique points+first point for closed polygon),
        # 		each containing [x,y,z] coordinates.
        [pt1, pt2, pt3, pt4, h] = bbox

        faces = np.zeros([6,5,3])
        # bottom
        faces[0][:,0] = [pt1[0], pt2[0], pt3[0], pt4[0], pt1[0] ]
        faces[0][:,1] = [pt1[1], pt2[1], pt3[1], pt4[1], pt1[1] ]
        faces[0][:,2] = [0, 0, 0, 0, 0]
        # top
        faces[1][:,0] = [pt1[0], pt2[0], pt3[0], pt4[0], pt1[0] ]
        faces[1][:,1] = [pt1[1], pt2[1], pt3[1], pt4[1], pt1[1] ]
        faces[1][:,2] = [h, h, h, h, h]
        # side 1
        faces[2][:,0] = [pt1[0], pt2[0], pt2[0], pt1[0], pt1[0] ]
        faces[2][:,1] = [pt1[1], pt2[1], pt2[1], pt1[1], pt1[1] ]
        faces[2][:,2] = [0, 0, h, h, 0]
        # side 2
        faces[3][:,0] = [pt2[0], pt3[0], pt3[0], pt2[0], pt2[0] ]
        faces[3][:,1] = [pt2[1], pt3[1], pt3[1], pt2[1], pt2[1] ]
        faces[3][:,2] = [0, 0, h, h, 0]
        # side 3
        faces[4][:,0] = [pt3[0], pt4[0], pt4[0], pt3[0], pt3[0] ]
        faces[4][:,1] = [pt3[1], pt4[1], pt4[1], pt3[1], pt3[1] ]
        faces[4][:,2] = [0, 0, h, h, 0]
        # side 4
        faces[5][:,0] = [pt4[0], pt1[0], pt1[0], pt4[0], pt4[0] ]
        faces[5][:,1] = [pt4[1], pt1[1], pt1[1], pt4[1], pt4[1] ]
        faces[5][:,2] = [0, 0, h, h, 0]

        return faces

    def __extractBboxFaces(self, bboxes):
        # Extracts all faces of all bboxes provided.
        # Params:
        # 	bboxes: list(bbox), list of bbox arrays
        #
        # Returns:
        # 	faces: [N*6,5,3] array containing faces of N bboxes
        faces = np.empty([0,5,3])
        for i in range(len(bboxes)):
            faces = np.append(faces, self.__createBox(bboxes[i]), axis=0)

        return faces

    def __formatDisplayText(self, time, egoSpeed, steeringAngle, latency):
        # Formats display text with provided values.
        text = "Ego Properties \nTime: {:.2f}s \nSpeed: {:.2f}m/s \nSteering Angle: {:.0f}$\degree$ \nLatency: {:.2f}ms".format(
           	time, egoSpeed, steeringAngle*180/math.pi, latency*1000.0)

        return text

    def __createDrivePath(self, speed, steeringAngle):
        # Computes driving path of ego bounded by two curves.
        # Desmos visualization: https://www.desmos.com/calculator/1qkrgrck88
        # Params:
        #   speed: double, ego speed in m/s
        #   steeringAngle: double, ego steering angle in radians

        # vehicle params
        width = 0.3
        length = 0.5
        wheelbase = length
        # time horizon of drive path in seconds
        timeHorizon = 4

        if steeringAngle != 0:
            radius = wheelbase / math.tan(steeringAngle)
        else:
            # divide by zero error
            radius = 1000

        rightEdge = [[], [], []]
        leftEdge = [[], [], []]
        for t in np.linspace(0, timeHorizon, 100):
            radiusRight = radius+width/2
            rightEdge[0].append(
            (radiusRight)*math.cos(speed*t/radiusRight ) + width/2 - radiusRight
            )
            rightEdge[1].append(
            		  (radiusRight)*math.sin(speed*t/radiusRight ) + length/2
            )
            rightEdge[2].append(0)
            radiusLeft = radius-width/2
            leftEdge[0].append(
            (radiusLeft)*math.cos(speed*t/radiusLeft ) - width/2 - radiusLeft
            )
            leftEdge[1].append(
            		  (radiusLeft)*math.sin(speed*t/radiusLeft ) + length/2
            )
            leftEdge[2].append(0)

        return rightEdge, leftEdge

    # Public Functions ----------------------------------------------------------------------
    def initPlot(self, xBounds, yBounds, zBounds, egoLength=0.5, egoWidth=0.3, egoHeight=0.4):
        # Initializes plot with ego display and empty data.
        # Params:
        # 	xBounds, yBounds, zBounds: double, axis limits for x, y, z respectively
        # 	[egoLength, egoWidth, egoHeight]: double, optional parameters specifying dimensions of ego to display

        # compute ego bbox
        # Hokuyo lidar is 15cm from front bumber
        coordinateOffsetY = 0.15
        egoBbox = [ [ [-egoWidth/2, coordinateOffsetY-egoLength], [-egoWidth/2, coordinateOffsetY],
        		  [egoWidth/2, coordinateOffsetY], [egoWidth/2, coordinateOffsetY-egoLength], 0.4] ]
        egoFaces = self.__extractBboxFaces(egoBbox)

        # initialize plot
        plt.ion()
        self.fig = plt.figure(figsize=(8,6), constrained_layout=True)
        ax = self.fig.add_subplot(111, projection='3d')

        # plot empty data for first frame
        self.vehPolygons = ax.add_collection3d(Poly3DCollection([], facecolors='blue', linewidths=0.5, edgecolors='k', alpha=0.25))
        self.obstaclePolygons = ax.add_collection3d(Poly3DCollection([], facecolors='cyan', linewidths=0.5, edgecolors='k', alpha=0.25))
        ax.add_collection3d(Poly3DCollection(egoFaces, facecolors='green', linewidths=0.5, edgecolors='k', alpha=0.25))
        self.textDisplay = ax.text2D(0.05, 0.95, self.__formatDisplayText(0, 0, 0, 0), transform=ax.transAxes, fontsize=8, bbox=dict(facecolor='gray', alpha=0.05) )
        self.drivePathRightLine, = ax.plot([], [], zs=0, color='g')
        self.drivePathLeftLine, = ax.plot([], [], zs=0, color='g')

        # axis labels and limits
        ax.set(xlabel='x (m)', ylabel='y (m)', zlabel='z (m)')
        ax.set_xlim(xBounds)
        ax.set_ylim(yBounds)
        ax.set_zlim(zBounds)

    def updatePlot(self, vehicleBboxes, obstacleBboxes, time, latency, speed, steering):
        # Updates the visualizer with new data.
        # Params:
        # 	vehicleBboxes: bboxes, list of different bbox information corresponding to different vehicle detections.
        # 		bbox information defined as [pt1, pt2, pt3, p4, h] where pt = [x,y].
        # 		Assumed that points in bbox are in sorted rotational order.
        # 	obstacleBboxes: bboxes, list of different bbox lists corresponding to different non-vehicle detections
        # 	time: double, time in seconds
        #   latency: double, latency of track creation to display in seconds
        # 	speed: double, speed of ego in m/s
        # 	steering: double, steering of ego in radians

        # update bboxes
        vehFaces = self.__extractBboxFaces(vehicleBboxes)
        obstacleFaces = self.__extractBboxFaces(obstacleBboxes)
        drivePathRight, drivePathLeft = self.__createDrivePath(speed, steering)

        # **************************** to be removed *******************************************
        # temp testing
        # vehFaces = vehFaces + time
        # **************************************************************************************

        # update plot
        self.vehPolygons.set_verts(vehFaces)
        self.obstaclePolygons.set_verts(obstacleFaces)
        self.textDisplay.set_text(self.__formatDisplayText(time, speed, steering, latency))
        self.drivePathRightLine.set_data_3d(drivePathRight[0], drivePathRight[1], drivePathRight[2])
        self.drivePathLeftLine.set_data_3d(drivePathLeft[0], drivePathLeft[1], drivePathLeft[2])
        self.fig.canvas.draw()
        self.fig.canvas.flush_events()
