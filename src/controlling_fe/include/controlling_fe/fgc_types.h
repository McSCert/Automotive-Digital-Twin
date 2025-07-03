//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: fgc_types.h
//
// Code generated for Simulink model 'fgc'.
//
// Model version                  : 1.1
// Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
// C/C++ source code generated on : Sun Mar 30 15:55:12 2025
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_fgc_types_h_
#define RTW_HEADER_fgc_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_builtin_interfaces_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_builtin_interfaces_Time_

// MsgType=builtin_interfaces/Time
struct SL_Bus_builtin_interfaces_Time
{
  int32_T sec;
  uint32_T nanosec;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

struct SL_Bus_ROSVariableLengthArrayInfo
{
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_Header_

// MsgType=std_msgs/Header
struct SL_Bus_std_msgs_Header
{
  // MsgType=builtin_interfaces/Time
  SL_Bus_builtin_interfaces_Time stamp;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=frame_id_SL_Info:TruncateAction=warn 
  uint8_T frame_id[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=frame_id
  SL_Bus_ROSVariableLengthArrayInfo frame_id_SL_Info;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ackermann_msgs_AckermannDrive_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ackermann_msgs_AckermannDrive_

// MsgType=ackermann_msgs/AckermannDrive
struct SL_Bus_ackermann_msgs_AckermannDrive
{
  real32_T steering_angle;
  real32_T steering_angle_velocity;
  real32_T speed;
  real32_T acceleration;
  real32_T jerk;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ackermann_msgs_AckermannDriveStamped_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ackermann_msgs_AckermannDriveStamped_

// MsgType=ackermann_msgs/AckermannDriveStamped
struct SL_Bus_ackermann_msgs_AckermannDriveStamped
{
  // MsgType=std_msgs/Header
  SL_Bus_std_msgs_Header header;

  // MsgType=ackermann_msgs/AckermannDrive
  SL_Bus_ackermann_msgs_AckermannDrive drive;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_Float32_
#define DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_Float32_

// MsgType=std_msgs/Float32
struct SL_Bus_std_msgs_Float32
{
  real32_T data;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_Bool_
#define DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_Bool_

// MsgType=std_msgs/Bool
struct SL_Bus_std_msgs_Bool
{
  boolean_T data;
};

#endif

// Custom Type definition for MATLABSystem: '<S9>/SourceBlock'
#include "rmw/qos_profiles.h"
#include "rmw/types.h"
#include "rmw/types.h"
#include "rmw/types.h"
#ifndef struct_ros_slros2_internal_block_Pub_T
#define struct_ros_slros2_internal_block_Pub_T

struct ros_slros2_internal_block_Pub_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // struct_ros_slros2_internal_block_Pub_T

#ifndef struct_ros_slros2_internal_block_Sub_T
#define struct_ros_slros2_internal_block_Sub_T

struct ros_slros2_internal_block_Sub_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // struct_ros_slros2_internal_block_Sub_T

// Parameters (default storage)
typedef struct P_fgc_T_ P_fgc_T;

// Forward declaration for rtModel
typedef struct tag_RTM_fgc_T RT_MODEL_fgc_T;

#endif                                 // RTW_HEADER_fgc_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
