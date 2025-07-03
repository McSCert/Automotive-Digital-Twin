#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include "rclcpp/rclcpp.hpp"
#include <builtin_interfaces/msg/time.hpp>
#include <custom_interfaces/msg/track.hpp>
#include <custom_interfaces/msg/tracks.hpp>
#include <sensor_msgs/msg/laser_scan.hpp>
#include <std_msgs/msg/header.hpp>
#include "data_preprocessing_fe_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(builtin_interfaces::msg::Time& msgPtr, SL_Bus_builtin_interfaces_Time const* busPtr);
void convertToBus(SL_Bus_builtin_interfaces_Time* busPtr, const builtin_interfaces::msg::Time& msgPtr);

void convertFromBus(custom_interfaces::msg::Track& msgPtr, SL_Bus_custom_interfaces_Track const* busPtr);
void convertToBus(SL_Bus_custom_interfaces_Track* busPtr, const custom_interfaces::msg::Track& msgPtr);

void convertFromBus(custom_interfaces::msg::Tracks& msgPtr, SL_Bus_custom_interfaces_Tracks const* busPtr);
void convertToBus(SL_Bus_custom_interfaces_Tracks* busPtr, const custom_interfaces::msg::Tracks& msgPtr);

void convertFromBus(sensor_msgs::msg::LaserScan& msgPtr, SL_Bus_sensor_msgs_LaserScan const* busPtr);
void convertToBus(SL_Bus_sensor_msgs_LaserScan* busPtr, const sensor_msgs::msg::LaserScan& msgPtr);

void convertFromBus(std_msgs::msg::Header& msgPtr, SL_Bus_std_msgs_Header const* busPtr);
void convertToBus(SL_Bus_std_msgs_Header* busPtr, const std_msgs::msg::Header& msgPtr);


#endif
