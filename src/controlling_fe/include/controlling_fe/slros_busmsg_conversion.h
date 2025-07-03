#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include "rclcpp/rclcpp.hpp"
#include <ackermann_msgs/msg/ackermann_drive.hpp>
#include <ackermann_msgs/msg/ackermann_drive_stamped.hpp>
#include <builtin_interfaces/msg/time.hpp>
#include <std_msgs/msg/bool.hpp>
#include <std_msgs/msg/float32.hpp>
#include <std_msgs/msg/header.hpp>
#include "fgc_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(ackermann_msgs::msg::AckermannDrive& msgPtr, SL_Bus_ackermann_msgs_AckermannDrive const* busPtr);
void convertToBus(SL_Bus_ackermann_msgs_AckermannDrive* busPtr, const ackermann_msgs::msg::AckermannDrive& msgPtr);

void convertFromBus(ackermann_msgs::msg::AckermannDriveStamped& msgPtr, SL_Bus_ackermann_msgs_AckermannDriveStamped const* busPtr);
void convertToBus(SL_Bus_ackermann_msgs_AckermannDriveStamped* busPtr, const ackermann_msgs::msg::AckermannDriveStamped& msgPtr);

void convertFromBus(builtin_interfaces::msg::Time& msgPtr, SL_Bus_builtin_interfaces_Time const* busPtr);
void convertToBus(SL_Bus_builtin_interfaces_Time* busPtr, const builtin_interfaces::msg::Time& msgPtr);

void convertFromBus(std_msgs::msg::Bool& msgPtr, SL_Bus_std_msgs_Bool const* busPtr);
void convertToBus(SL_Bus_std_msgs_Bool* busPtr, const std_msgs::msg::Bool& msgPtr);

void convertFromBus(std_msgs::msg::Float32& msgPtr, SL_Bus_std_msgs_Float32 const* busPtr);
void convertToBus(SL_Bus_std_msgs_Float32* busPtr, const std_msgs::msg::Float32& msgPtr);

void convertFromBus(std_msgs::msg::Header& msgPtr, SL_Bus_std_msgs_Header const* busPtr);
void convertToBus(SL_Bus_std_msgs_Header* busPtr, const std_msgs::msg::Header& msgPtr);


#endif
