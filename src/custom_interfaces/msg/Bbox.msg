# Representation of a single bounding box.

# timestamp data containing time (seconds and nanoseconds) and frame id
std_msgs/Header header

# 0 = unknown, 1 = vehicle, 2 = non-vehicle
uint8 object_class 0

# point1, point2, point3, point4 represents the 4 corners of a z-aligned bounding box in meters
# points are assumed to be sorted in a rotational order (CW or CCW)
geometry_msgs/Point32 point1
geometry_msgs/Point32 point2
geometry_msgs/Point32 point3
geometry_msgs/Point32 point4

# height of bounding box in meters
# bounding box assumed to lie flat on z=0
float32 height 0
