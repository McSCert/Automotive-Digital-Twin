//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: data_preprocessing_fe_types.h
//
// Code generated for Simulink model 'data_preprocessing_fe'.
//
// Model version                  : 1.0
// Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
// C/C++ source code generated on : Fri Mar 21 16:08:35 2025
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_data_preprocessing_fe_types_h_
#define RTW_HEADER_data_preprocessing_fe_types_h_
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

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_custom_interfaces_Track_
#define DEFINED_TYPEDEF_FOR_SL_Bus_custom_interfaces_Track_

// MsgType=custom_interfaces/Track
struct SL_Bus_custom_interfaces_Track
{
  // MsgType=builtin_interfaces/Time
  SL_Bus_builtin_interfaces_Time stamp;
  real32_T position_y;
  real32_T position_x;
  real32_T velocity_y;
  real32_T velocity_x;
  real32_T width;
  real32_T length;
  real32_T height;
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

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_custom_interfaces_Tracks_
#define DEFINED_TYPEDEF_FOR_SL_Bus_custom_interfaces_Tracks_

// MsgType=custom_interfaces/Tracks
struct SL_Bus_custom_interfaces_Tracks
{
  uint32_T num_tracks;

  // MsgType=custom_interfaces/Track:IsVarLen=1:VarLenCategory=data:VarLenElem=tracks_SL_Info:TruncateAction=warn
  SL_Bus_custom_interfaces_Track tracks[20];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=tracks
  SL_Bus_ROSVariableLengthArrayInfo tracks_SL_Info;
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

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_sensor_msgs_LaserScan_
#define DEFINED_TYPEDEF_FOR_SL_Bus_sensor_msgs_LaserScan_

// MsgType=sensor_msgs/LaserScan
struct SL_Bus_sensor_msgs_LaserScan
{
  // MsgType=std_msgs/Header
  SL_Bus_std_msgs_Header header;
  real32_T angle_min;
  real32_T angle_max;
  real32_T angle_increment;
  real32_T time_increment;
  real32_T scan_time;
  real32_T range_min;
  real32_T range_max;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=ranges_SL_Info:TruncateAction=warn
  real32_T ranges[1081];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=ranges
  SL_Bus_ROSVariableLengthArrayInfo ranges_SL_Info;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=intensities_SL_Info:TruncateAction=warn
  real32_T intensities[1081];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=intensities
  SL_Bus_ROSVariableLengthArrayInfo intensities_SL_Info;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_Cluster_
#define DEFINED_TYPEDEF_FOR_Cluster_

struct Cluster
{
  real_T numPoints;
  real_T y[750];
  real_T x[750];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_Clusters_
#define DEFINED_TYPEDEF_FOR_Clusters_

struct Clusters
{
  real_T numClusters;
  Cluster ClusterList[10];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_ClusterBoundingBox_
#define DEFINED_TYPEDEF_FOR_ClusterBoundingBox_

struct ClusterBoundingBox
{
  real_T y;
  real_T x;
  real_T width;
  real_T length;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_MeasurementBoundingBox_
#define DEFINED_TYPEDEF_FOR_MeasurementBoundingBox_

struct MeasurementBoundingBox
{
  real_T numClusters;
  ClusterBoundingBox ClusterBoundingBoxList[20];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_Track_
#define DEFINED_TYPEDEF_FOR_Track_

struct Track
{
  real_T stateVector[8];
  real_T stateCovariance[64];
  real_T count[5];
  boolean_T confirmedTrack;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_Tracks_
#define DEFINED_TYPEDEF_FOR_Tracks_

struct Tracks
{
  real_T numTracks;
  Track TrackList[20];
};

#endif

// Custom Type definition for MATLABSystem: '<S2>/SourceBlock'
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

#ifndef struct_d_cell_wrap_data_preprocessing_fe_T
#define struct_d_cell_wrap_data_preprocessing_fe_T

struct d_cell_wrap_data_preprocessing_fe_T
{
  real32_T f1[1500];
};

#endif                                 // struct_d_cell_wrap_data_preprocessing_fe_T

#ifndef struct_ros_slros2_internal_block_Rea_T
#define struct_ros_slros2_internal_block_Rea_T

struct ros_slros2_internal_block_Rea_T
{
  int32_T isInitialized;
};

#endif                                // struct_ros_slros2_internal_block_Rea_T

#ifndef struct_ros_slros2_internal_block_Sub_T
#define struct_ros_slros2_internal_block_Sub_T

struct ros_slros2_internal_block_Sub_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // struct_ros_slros2_internal_block_Sub_T

// Custom Type definition for MATLAB Function: '<S9>/LiDAR Clustering'
#ifndef struct_sA56qS3TMmBLIIybiMKmQ0C_hokuy_T
#define struct_sA56qS3TMmBLIIybiMKmQ0C_hokuy_T

struct sA56qS3TMmBLIIybiMKmQ0C_hokuy_T
{
  real_T x[2000];
  real_T y[2000];
  real_T b_index[2000];
};

#endif                                // struct_sA56qS3TMmBLIIybiMKmQ0C_hokuy_T

#ifndef struct_sEizE7AuWDta99hHHr39skG_hokuy_T
#define struct_sEizE7AuWDta99hHHr39skG_hokuy_T

struct sEizE7AuWDta99hHHr39skG_hokuy_T
{
  sA56qS3TMmBLIIybiMKmQ0C_hokuy_T corePoints;
  sA56qS3TMmBLIIybiMKmQ0C_hokuy_T nonCorePoints;
};

#endif                                // struct_sEizE7AuWDta99hHHr39skG_hokuy_T

#ifndef struct_emxArray_real_T_data_preprocessing_fe_T
#define struct_emxArray_real_T_data_preprocessing_fe_T

struct emxArray_real_T_data_preprocessing_fe_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 // struct_emxArray_real_T_data_preprocessing_fe_T

#ifndef struct_emxArray_uint32_T_hokuyoTrack_T
#define struct_emxArray_uint32_T_hokuyoTrack_T

struct emxArray_uint32_T_hokuyoTrack_T
{
  uint32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                // struct_emxArray_uint32_T_hokuyoTrack_T

#ifndef struct_emxArray_int32_T_data_preprocessing_fe_T
#define struct_emxArray_int32_T_data_preprocessing_fe_T

struct emxArray_int32_T_data_preprocessing_fe_T
{
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                // struct_emxArray_int32_T_data_preprocessing_fe_T

#ifndef struct_emxArray_boolean_T_hokuyoTrac_T
#define struct_emxArray_boolean_T_hokuyoTrac_T

struct emxArray_boolean_T_hokuyoTrac_T
{
  boolean_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                // struct_emxArray_boolean_T_hokuyoTrac_T

// Parameters (default storage)
typedef struct P_data_preprocessing_fe_T_ P_data_preprocessing_fe_T;

// Forward declaration for rtModel
typedef struct tag_RTM_data_preprocessing_fe_T RT_MODEL_data_preprocessing_fe_T;

#endif                                 // RTW_HEADER_data_preprocessing_fe_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
