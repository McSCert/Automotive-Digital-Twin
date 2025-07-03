// Copyright 2022 The MathWorks, Inc.
// Generated 21-Mar-2025 16:08:52
#ifndef _SLROS2_INITIALIZE_H_
#define _SLROS2_INITIALIZE_H_
#include "data_preprocessing_fe_types.h"
// Generic pub-sub header
#include "slros2_generic_pubsub.h"
// Generic service header
#include "slros2_generic_service.h"
extern rclcpp::Node::SharedPtr SLROSNodePtr;
#ifndef SET_QOS_VALUES
#define SET_QOS_VALUES(qosStruct, hist, dep, dur, rel)  \
    {                                                   \
        qosStruct.history = hist;                       \
        qosStruct.depth = dep;                          \
        qosStruct.durability = dur;                     \
        qosStruct.reliability = rel;                    \
    }
#endif
inline rclcpp::QoS getQOSSettingsFromRMW(const rmw_qos_profile_t& qosProfile) {
    rclcpp::QoS qos(rclcpp::QoSInitialization::from_rmw(qosProfile));
    if (RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL == qosProfile.durability) {
        qos.transient_local();
    } else {
        qos.durability_volatile();
    }
    if (RMW_QOS_POLICY_RELIABILITY_RELIABLE == qosProfile.reliability) {
        qos.reliable();
    } else {
        qos.best_effort();
    }
    return qos;
}
// data_preprocessing_fe/Create Hokuyo Tracks/Publish1
extern SimulinkPublisher<custom_interfaces::msg::Tracks,SL_Bus_custom_interfaces_Tracks> Pub_data_preprocessing_fe_80;
// data_preprocessing_fe/Subscribe2
extern SimulinkSubscriber<sensor_msgs::msg::LaserScan,SL_Bus_sensor_msgs_LaserScan> Sub_data_preprocessing_fe_90;
#endif
