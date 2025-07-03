# Array of bounding boxes.

# timestamp data containing time (seconds and nanoseconds) and frame id
std_msgs/Header header

# number of bboxes
uint32 num_bboxes 0

# array of Bbox messages
Bbox[<=30] bboxes
