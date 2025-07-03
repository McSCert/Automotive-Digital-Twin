#include "slros_busmsg_conversion.h"


// Conversions between SL_Bus_builtin_interfaces_Time and builtin_interfaces::msg::Time

void convertFromBus(builtin_interfaces::msg::Time& msgPtr, SL_Bus_builtin_interfaces_Time const* busPtr)
{
  const std::string rosMessageType("builtin_interfaces/Time");

  msgPtr.nanosec =  busPtr->nanosec;
  msgPtr.sec =  busPtr->sec;
}

void convertToBus(SL_Bus_builtin_interfaces_Time* busPtr, const builtin_interfaces::msg::Time& msgPtr)
{
  const std::string rosMessageType("builtin_interfaces/Time");

  busPtr->nanosec =  msgPtr.nanosec;
  busPtr->sec =  msgPtr.sec;
}


// Conversions between SL_Bus_custom_interfaces_Track and custom_interfaces::msg::Track

void convertFromBus(custom_interfaces::msg::Track& msgPtr, SL_Bus_custom_interfaces_Track const* busPtr)
{
  const std::string rosMessageType("custom_interfaces/Track");

  msgPtr.height =  busPtr->height;
  msgPtr.length =  busPtr->length;
  msgPtr.position_x =  busPtr->position_x;
  msgPtr.position_y =  busPtr->position_y;
  convertFromBus(msgPtr.stamp, &busPtr->stamp);
  msgPtr.velocity_x =  busPtr->velocity_x;
  msgPtr.velocity_y =  busPtr->velocity_y;
  msgPtr.width =  busPtr->width;
}

void convertToBus(SL_Bus_custom_interfaces_Track* busPtr, const custom_interfaces::msg::Track& msgPtr)
{
  const std::string rosMessageType("custom_interfaces/Track");

  busPtr->height =  msgPtr.height;
  busPtr->length =  msgPtr.length;
  busPtr->position_x =  msgPtr.position_x;
  busPtr->position_y =  msgPtr.position_y;
  convertToBus(&busPtr->stamp, msgPtr.stamp);
  busPtr->velocity_x =  msgPtr.velocity_x;
  busPtr->velocity_y =  msgPtr.velocity_y;
  busPtr->width =  msgPtr.width;
}


// Conversions between SL_Bus_custom_interfaces_Tracks and custom_interfaces::msg::Tracks

void convertFromBus(custom_interfaces::msg::Tracks& msgPtr, SL_Bus_custom_interfaces_Tracks const* busPtr)
{
  const std::string rosMessageType("custom_interfaces/Tracks");

  msgPtr.num_tracks =  busPtr->num_tracks;
  convertFromBusVariableNestedArray(msgPtr.tracks, busPtr->tracks, busPtr->tracks_SL_Info);
}

void convertToBus(SL_Bus_custom_interfaces_Tracks* busPtr, const custom_interfaces::msg::Tracks& msgPtr)
{
  const std::string rosMessageType("custom_interfaces/Tracks");

  busPtr->num_tracks =  msgPtr.num_tracks;
  convertToBusVariableNestedArray(busPtr->tracks, busPtr->tracks_SL_Info, msgPtr.tracks, slros::EnabledWarning(rosMessageType, "tracks"));
}


// Conversions between SL_Bus_sensor_msgs_LaserScan and sensor_msgs::msg::LaserScan

void convertFromBus(sensor_msgs::msg::LaserScan& msgPtr, SL_Bus_sensor_msgs_LaserScan const* busPtr)
{
  const std::string rosMessageType("sensor_msgs/LaserScan");

  msgPtr.angle_increment =  busPtr->angle_increment;
  msgPtr.angle_max =  busPtr->angle_max;
  msgPtr.angle_min =  busPtr->angle_min;
  convertFromBus(msgPtr.header, &busPtr->header);
  convertFromBusVariablePrimitiveArray(msgPtr.intensities, busPtr->intensities, busPtr->intensities_SL_Info);
  msgPtr.range_max =  busPtr->range_max;
  msgPtr.range_min =  busPtr->range_min;
  convertFromBusVariablePrimitiveArray(msgPtr.ranges, busPtr->ranges, busPtr->ranges_SL_Info);
  msgPtr.scan_time =  busPtr->scan_time;
  msgPtr.time_increment =  busPtr->time_increment;
}

void convertToBus(SL_Bus_sensor_msgs_LaserScan* busPtr, const sensor_msgs::msg::LaserScan& msgPtr)
{
  const std::string rosMessageType("sensor_msgs/LaserScan");

  busPtr->angle_increment =  msgPtr.angle_increment;
  busPtr->angle_max =  msgPtr.angle_max;
  busPtr->angle_min =  msgPtr.angle_min;
  convertToBus(&busPtr->header, msgPtr.header);
  convertToBusVariablePrimitiveArray(busPtr->intensities, busPtr->intensities_SL_Info, msgPtr.intensities, slros::EnabledWarning(rosMessageType, "intensities"));
  busPtr->range_max =  msgPtr.range_max;
  busPtr->range_min =  msgPtr.range_min;
  convertToBusVariablePrimitiveArray(busPtr->ranges, busPtr->ranges_SL_Info, msgPtr.ranges, slros::EnabledWarning(rosMessageType, "ranges"));
  busPtr->scan_time =  msgPtr.scan_time;
  busPtr->time_increment =  msgPtr.time_increment;
}


// Conversions between SL_Bus_std_msgs_Header and std_msgs::msg::Header

void convertFromBus(std_msgs::msg::Header& msgPtr, SL_Bus_std_msgs_Header const* busPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertFromBusVariablePrimitiveArray(msgPtr.frame_id, busPtr->frame_id, busPtr->frame_id_SL_Info);
  convertFromBus(msgPtr.stamp, &busPtr->stamp);
}

void convertToBus(SL_Bus_std_msgs_Header* busPtr, const std_msgs::msg::Header& msgPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertToBusVariablePrimitiveArray(busPtr->frame_id, busPtr->frame_id_SL_Info, msgPtr.frame_id, slros::EnabledWarning(rosMessageType, "frame_id"));
  convertToBus(&busPtr->stamp, msgPtr.stamp);
}

