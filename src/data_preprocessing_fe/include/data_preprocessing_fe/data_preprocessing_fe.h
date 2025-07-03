//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: data_preprocessing_fe.h
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
#ifndef RTW_HEADER_data_preprocessing_fe_h_
#define RTW_HEADER_data_preprocessing_fe_h_
#include "rtwtypes.h"
#include "slros2_initialize.h"
#include "data_preprocessing_fe_types.h"

extern "C"
{

#include "rt_nonfinite.h"

}

extern "C"
{

#include "rtGetNaN.h"

}

#include <stddef.h>

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
struct B_data_preprocessing_fe_T {
  sEizE7AuWDta99hHHr39skG_hokuy_T clustering[10];
  Cluster rtb_clusters_ClusterList[10];
  sEizE7AuWDta99hHHr39skG_hokuy_T b_s;
  real_T data_data[8000];
  real_T sensorData_data[4000];
  real_T sensorData[4000];             // '<S9>/LiDAR Calibration'
  real_T X_data[4000];
  real_T Y_data[4000];
  int32_T tmp_data[4000];
  int32_T tmp_data_m[4000];
  Track rtb_tracks_TrackList[20];
  Cluster c_s;
  real_T b_index_tmp[1500];
  SL_Bus_sensor_msgs_LaserScan In1;    // '<S18>/In1'
  SL_Bus_sensor_msgs_LaserScan b_varargout_2;
  real_T angles_data[1081];
  real_T y_data[1081];
  int32_T tmp_data_c[2000];
  d_cell_wrap_data_preprocessing_fe_T t;
  d_cell_wrap_data_preprocessing_fe_T u;
  int32_T tmp_data_k[1500];
  real_T rtb_clusters_ClusterList_data[750];
  real_T rtb_clusters_ClusterList_data_c[750];
  real32_T rangesTmp_data[1500];
  real32_T anglesTmp_data[1500];
  real32_T ranges_data[1500];
  real32_T in2_data[1500];
  int8_T nz[4000];
  int8_T b_nz[4000];
  int16_T t_data[2000];
  int16_T u_data[2000];
  int16_T tmp_data_b[2000];
  int16_T tmp_data_p[2000];
  boolean_T tmp_data_cv[4000];
  int16_T tmp_data_f[1500];
  int16_T tmp_data_g[1500];
  int16_T b_data[1081];
  boolean_T logicalIndex_data[2000];
  boolean_T corePointLogical_data[2000];
  boolean_T tmp_data_g1[2000];
  boolean_T logIndX_data[2000];
  boolean_T logIndY_data[2000];
  boolean_T in1_data[2000];
  boolean_T x_data[1081];
  SL_Bus_custom_interfaces_Tracks BusAssignment;// '<S1>/Bus Assignment'
  SL_Bus_custom_interfaces_Track trackList[20];// '<S1>/Create Ros Message'
  ClusterBoundingBox rtb_clusterMeasurement_ClusterB[20];
  ClusterBoundingBox rtb_matchedClusters_ClusterBoun[20];
  Track track;
  real_T F[64];
  real_T covarianceTimeEstimate[64];
  real_T F_p[64];
  real_T K[32];
  real_T A_tmp[32];
  real_T b_b[16];
  real_T A[16];
  int8_T b_I[64];
  real_T stateTimeEstimate[8];
  real_T a[5];
  SL_Bus_custom_interfaces_Track a_l;
  int8_T A_tmp_j[32];
  int8_T A_tmp_d[32];
  real_T rtb_matchedClusters_ClusterBo_g[4];
  real_T rtb_matchedClusters_ClusterBo_l[4];
  real_T numCorePoints;
  real_T numNonCorePoints;
  real_T corePointsProcessed;
  real_T newCorePointsTot;
  real_T newNonCorePointsTot;
  real_T Add;                          // '<Root>/Add'
  real_T q;
  real_T tempSum_tmp;
  real_T D_tmp;
  real_T zi;
  real_T zj;
  int32_T sensorData_size[2];
  int32_T data_size[2];
  int32_T rtb_clusters_ClusterList_size[2];
  int32_T rtb_clusters_ClusterList_size_d[2];
  boolean_T c_x[5];
  int8_T p[4];
  int8_T ipiv[4];
  real32_T anglesTmp;
  int32_T numClusters;
  int32_T numAssignments;
  int32_T vstride;
  int32_T jBcol;
  int32_T kAcol;
  int32_T jj;
  int32_T jA;
  int32_T i;
  int32_T loop_ub;
  int32_T anglesTmp_size;
  int32_T ranges_size;
  int32_T logicalIndex_size;
  int32_T corePointLogical_size;
  int32_T tmp_size;
  int32_T tmp_size_d;
  int32_T i_l;
  int32_T qq;
  int32_T D;
  int32_T D_o;
  int32_T loop_ub_b;
  int32_T newNumel;
  int32_T i_n;
  int32_T i1;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T loop_ub_bs;
  int32_T m;
  int32_T n;
  int32_T i_ln;
  int32_T j;
  int32_T nRows;
  int32_T nCols;
  int32_T trueCount;
  int32_T end;
  int32_T unnamed_idx_1;
  int32_T v_idx_1;
  int32_T loop_ub_h;
  int32_T nx;
  int32_T k;
  int32_T b_ii;
  int32_T b_jj;
  int32_T newNumel_b;
  int32_T i_d;
  int32_T d;
  int32_T k_e;
  int32_T varargin_2;
  int32_T b_acoef;
  int32_T bcoef;
  int32_T e;
  int32_T b_k;
  int32_T csz_idx_0;
  int32_T i2;
  int32_T ix;
  int32_T a_b;
  int32_T i_j;
  int32_T loop_ub_f;
  int32_T newNumel_a;
  int32_T i_ju;
  int32_T i_jz;
  uint32_T unassignedDetections;
  uint32_T y;
  int16_T sizes_idx_0;
  int8_T b_input_sizes_idx_1;
  int8_T i2_o;
  int8_T i3;
  boolean_T empty_non_axis_sizes;
  boolean_T rEQ0;
  boolean_T nanflag;
  boolean_T shouldCreateNewZero;
  boolean_T b_y;
};

// Block states (default storage) for system '<Root>'
struct DW_data_preprocessing_fe_T {
  Tracks UnitDelay_DSTATE;             // '<S13>/Unit Delay'
  ros_slros2_internal_block_Pub_T obj; // '<S7>/SinkBlock'
  ros_slros2_internal_block_Sub_T obj_a;// '<S2>/SourceBlock'
  real_T Memory_PreviousInput;         // '<Root>/Memory'
};

// Parameters (default storage)
struct P_data_preprocessing_fe_T_ {
  Tracks UnitDelay_InitialCondition;
  // Expression: struct('numTracks', 0, 'TrackList', repmat(struct('stateVector', zeros(8,1), 'stateCovariance', diag([100 100 100 100 100 100 100 100]), 'count', zeros(1,5), 'confirmedTrack', false),1,20))
     //  Referenced by: '<S13>/Unit Delay'

  SL_Bus_sensor_msgs_LaserScan Out1_Y0;// Computed Parameter: Out1_Y0
                                          //  Referenced by: '<S18>/Out1'

  SL_Bus_sensor_msgs_LaserScan Constant_Value;// Computed Parameter: Constant_Value
                                                 //  Referenced by: '<S2>/Constant'

  SL_Bus_custom_interfaces_Tracks Constant_Value_n;// Computed Parameter: Constant_Value_n
                                                      //  Referenced by: '<S3>/Constant'

  real_T xOffset_Value;                // Expression: 0
                                          //  Referenced by: '<S8>/xOffset'

  real_T Q_Value[64];         // Expression: [2 0 0 0 0 0 0 0; 0 12 0 0 0 0 0 0;
                                 // 0 0 2 0 0 0 0 0; 0 0 0 12 0 0 0 0;
                                 // 0 0 0 0 2 0 0 0; 0 0 0 0 0 6 0 0;
                                 // 0 0 0 0 0 0 2 0; 0 0 0 0 0 0 0 6]
                                 //  Referenced by: '<S12>/Q'

  real_T R_Value[16];                  // Expression: diag([1 1 1 1])
                                          //  Referenced by: '<S12>/R'

  real_T eps_Value;                    // Expression: 0.1
                                          //  Referenced by: '<S8>/eps'

  real_T minPoints_Value;              // Expression: 20
                                          //  Referenced by: '<S8>/minPoints'

  real_T minDetections_Value;          // Expression: 3
                                          //  Referenced by: '<S12>/minDetections'

  real_T Constant_Value_a;             // Expression: 10^9
                                          //  Referenced by: '<Root>/Constant'

  real_T Memory_InitialCondition;      // Expression: 0
                                          //  Referenced by: '<Root>/Memory'

};

// Real-time Model Data Structure
struct tag_RTM_data_preprocessing_fe_T {
  const char_T * volatile errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_data_preprocessing_fe_T data_preprocessing_fe_P;

#ifdef __cplusplus

}

#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_data_preprocessing_fe_T data_preprocessing_fe_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_data_preprocessing_fe_T data_preprocessing_fe_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void data_preprocessing_fe_initialize(void);
  extern void data_preprocessing_fe_step(void);
  extern void data_preprocessing_fe_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_data_preprocessing_fe_T *const data_preprocessing_fe_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'data_preprocessing_fe'
//  '<S1>'   : 'data_preprocessing_fe/Create Hokuyo Tracks'
//  '<S2>'   : 'data_preprocessing_fe/Subscribe2'
//  '<S3>'   : 'data_preprocessing_fe/Create Hokuyo Tracks/Blank Message1'
//  '<S4>'   : 'data_preprocessing_fe/Create Hokuyo Tracks/Create Ros Message'
//  '<S5>'   : 'data_preprocessing_fe/Create Hokuyo Tracks/Hokuyo LiDAR Clustering'
//  '<S6>'   : 'data_preprocessing_fe/Create Hokuyo Tracks/Hokuyo LiDAR Tracking'
//  '<S7>'   : 'data_preprocessing_fe/Create Hokuyo Tracks/Publish1'
//  '<S8>'   : 'data_preprocessing_fe/Create Hokuyo Tracks/Hokuyo LiDAR Clustering/Hokuyo Lidar Clustering'
//  '<S9>'   : 'data_preprocessing_fe/Create Hokuyo Tracks/Hokuyo LiDAR Clustering/Hokuyo Lidar Clustering/2D Clustering'
//  '<S10>'  : 'data_preprocessing_fe/Create Hokuyo Tracks/Hokuyo LiDAR Clustering/Hokuyo Lidar Clustering/2D Clustering/LiDAR Calibration'
//  '<S11>'  : 'data_preprocessing_fe/Create Hokuyo Tracks/Hokuyo LiDAR Clustering/Hokuyo Lidar Clustering/2D Clustering/LiDAR Clustering'
//  '<S12>'  : 'data_preprocessing_fe/Create Hokuyo Tracks/Hokuyo LiDAR Tracking/Hokuyo Cluster Tracking'
//  '<S13>'  : 'data_preprocessing_fe/Create Hokuyo Tracks/Hokuyo LiDAR Tracking/Hokuyo Cluster Tracking/2D tracking'
//  '<S14>'  : 'data_preprocessing_fe/Create Hokuyo Tracks/Hokuyo LiDAR Tracking/Hokuyo Cluster Tracking/2D tracking/2D Cluster Processing'
//  '<S15>'  : 'data_preprocessing_fe/Create Hokuyo Tracks/Hokuyo LiDAR Tracking/Hokuyo Cluster Tracking/2D tracking/2D Measurement to Track Assignment'
//  '<S16>'  : 'data_preprocessing_fe/Create Hokuyo Tracks/Hokuyo LiDAR Tracking/Hokuyo Cluster Tracking/2D tracking/Subsystem Reference'
//  '<S17>'  : 'data_preprocessing_fe/Create Hokuyo Tracks/Hokuyo LiDAR Tracking/Hokuyo Cluster Tracking/2D tracking/Subsystem Reference/Kalman Filter'
//  '<S18>'  : 'data_preprocessing_fe/Subscribe2/Enabled Subsystem'

#endif                                 // RTW_HEADER_data_preprocessing_fe_h_

//
// File trailer for generated code.
//
// [EOF]
//
