#include "slros_busmsg_conversion.h"


// Conversions between SL_Bus_ackermann_msgs_AckermannDrive and ackermann_msgs::msg::AckermannDrive

void convertFromBus(ackermann_msgs::msg::AckermannDrive& msgPtr, SL_Bus_ackermann_msgs_AckermannDrive const* busPtr)
{
  const std::string rosMessageType("ackermann_msgs/AckermannDrive");

  msgPtr.acceleration =  busPtr->acceleration;
  msgPtr.jerk =  busPtr->jerk;
  msgPtr.speed =  busPtr->speed;
  msgPtr.steering_angle =  busPtr->steering_angle;
  msgPtr.steering_angle_velocity =  busPtr->steering_angle_velocity;
}

void convertToBus(SL_Bus_ackermann_msgs_AckermannDrive* busPtr, const ackermann_msgs::msg::AckermannDrive& msgPtr)
{
  const std::string rosMessageType("ackermann_msgs/AckermannDrive");

  busPtr->acceleration =  msgPtr.acceleration;
  busPtr->jerk =  msgPtr.jerk;
  busPtr->speed =  msgPtr.speed;
  busPtr->steering_angle =  msgPtr.steering_angle;
  busPtr->steering_angle_velocity =  msgPtr.steering_angle_velocity;
}


// Conversions between SL_Bus_ackermann_msgs_AckermannDriveStamped and ackermann_msgs::msg::AckermannDriveStamped

void convertFromBus(ackermann_msgs::msg::AckermannDriveStamped& msgPtr, SL_Bus_ackermann_msgs_AckermannDriveStamped const* busPtr)
{
  const std::string rosMessageType("ackermann_msgs/AckermannDriveStamped");

  convertFromBus(msgPtr.drive, &busPtr->drive);
  convertFromBus(msgPtr.header, &busPtr->header);
}

void convertToBus(SL_Bus_ackermann_msgs_AckermannDriveStamped* busPtr, const ackermann_msgs::msg::AckermannDriveStamped& msgPtr)
{
  const std::string rosMessageType("ackermann_msgs/AckermannDriveStamped");

  convertToBus(&busPtr->drive, msgPtr.drive);
  convertToBus(&busPtr->header, msgPtr.header);
}


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


// Conversions between SL_Bus_std_msgs_Bool and std_msgs::msg::Bool

void convertFromBus(std_msgs::msg::Bool& msgPtr, SL_Bus_std_msgs_Bool const* busPtr)
{
  const std::string rosMessageType("std_msgs/Bool");

  msgPtr.data =  busPtr->data;
}

void convertToBus(SL_Bus_std_msgs_Bool* busPtr, const std_msgs::msg::Bool& msgPtr)
{
  const std::string rosMessageType("std_msgs/Bool");

  busPtr->data =  msgPtr.data;
}


// Conversions between SL_Bus_std_msgs_Float32 and std_msgs::msg::Float32

void convertFromBus(std_msgs::msg::Float32& msgPtr, SL_Bus_std_msgs_Float32 const* busPtr)
{
  const std::string rosMessageType("std_msgs/Float32");

  msgPtr.data =  busPtr->data;
}

void convertToBus(SL_Bus_std_msgs_Float32* busPtr, const std_msgs::msg::Float32& msgPtr)
{
  const std::string rosMessageType("std_msgs/Float32");

  busPtr->data =  msgPtr.data;
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

