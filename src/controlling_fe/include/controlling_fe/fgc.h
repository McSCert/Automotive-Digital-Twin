//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: fgc.h
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
#ifndef RTW_HEADER_fgc_h_
#define RTW_HEADER_fgc_h_
#include "rtwtypes.h"
#include "slros2_initialize.h"
#include "fgc_types.h"

extern "C"
{

#include "rt_nonfinite.h"

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
struct B_fgc_T {
  SL_Bus_ackermann_msgs_AckermannDriveStamped BusAssignment2;// '<Root>/Bus Assignment2' 
  SL_Bus_std_msgs_Float32 In1;         // '<S15>/In1'
  SL_Bus_std_msgs_Float32 In1_a;       // '<S13>/In1'
  SL_Bus_std_msgs_Bool In1_m;          // '<S14>/In1'
  SL_Bus_std_msgs_Bool In1_l;          // '<S12>/In1'
  SL_Bus_std_msgs_Bool In1_le;         // '<S11>/In1'
  real32_T CastToSingle;               // '<S10>/Cast To Single'
};

// Block states (default storage) for system '<Root>'
struct DW_fgc_T {
  ros_slros2_internal_block_Pub_T obj; // '<S4>/SinkBlock'
  ros_slros2_internal_block_Pub_T obj_n;// '<S3>/SinkBlock'
  ros_slros2_internal_block_Sub_T obj_d;// '<S9>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_e;// '<S8>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_g;// '<S7>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_f;// '<S6>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_gb;// '<S5>/SourceBlock'
};

// Parameters (default storage)
struct P_fgc_T_ {
  SL_Bus_ackermann_msgs_AckermannDriveStamped Constant_Value;// Computed Parameter: Constant_Value
                                                                //  Referenced by: '<S1>/Constant'

  SL_Bus_std_msgs_Bool Out1_Y0;        // Computed Parameter: Out1_Y0
                                          //  Referenced by: '<S11>/Out1'

  SL_Bus_std_msgs_Bool Out1_Y0_d;      // Computed Parameter: Out1_Y0_d
                                          //  Referenced by: '<S12>/Out1'

  SL_Bus_std_msgs_Bool Out1_Y0_f;      // Computed Parameter: Out1_Y0_f
                                          //  Referenced by: '<S14>/Out1'

  SL_Bus_std_msgs_Bool Constant_Value_f;// Computed Parameter: Constant_Value_f
                                           //  Referenced by: '<S6>/Constant'

  SL_Bus_std_msgs_Bool Constant_Value_j;// Computed Parameter: Constant_Value_j
                                           //  Referenced by: '<S8>/Constant'

  SL_Bus_std_msgs_Bool Constant_Value_n;// Computed Parameter: Constant_Value_n
                                           //  Referenced by: '<S5>/Constant'

  SL_Bus_std_msgs_Float32 Out1_Y0_g;   // Computed Parameter: Out1_Y0_g
                                          //  Referenced by: '<S13>/Out1'

  SL_Bus_std_msgs_Float32 Out1_Y0_i;   // Computed Parameter: Out1_Y0_i
                                          //  Referenced by: '<S15>/Out1'

  SL_Bus_std_msgs_Float32 Constant_Value_o;// Computed Parameter: Constant_Value_o
                                              //  Referenced by: '<S2>/Constant'

  SL_Bus_std_msgs_Float32 Constant_Value_d;// Computed Parameter: Constant_Value_d
                                              //  Referenced by: '<S7>/Constant'

  SL_Bus_std_msgs_Float32 Constant_Value_j3;// Computed Parameter: Constant_Value_j3
                                               //  Referenced by: '<S9>/Constant'

  real_T Constant_Value_ov;            // Expression: 0
                                          //  Referenced by: '<S17>/Constant'

  real_T SET_DIST_Value;               // Expression: 0.3
                                          //  Referenced by: '<S19>/SET_DIST'

  real_T Saturation_UpperSat;          // Expression: inf
                                          //  Referenced by: '<S19>/Saturation'

  real_T Saturation_LowerSat;          // Expression: 0
                                          //  Referenced by: '<S19>/Saturation'

  real_T Min_Safe_Follow_Time_Value;   // Expression: 0.4
                                          //  Referenced by: '<S19>/Min_Safe_Follow_Time'

  real32_T safe_follow_speed_Y0;     // Computed Parameter: safe_follow_speed_Y0
                                        //  Referenced by: '<S10>/safe_follow_speed'

  real32_T Constant_Value_b;           // Computed Parameter: Constant_Value_b
                                          //  Referenced by: '<S10>/Constant'

  real32_T SteeringAngle_Value;       // Computed Parameter: SteeringAngle_Value
                                         //  Referenced by: '<Root>/SteeringAngle'

  real32_T SteeringAngleVelocity_Value;
                              // Computed Parameter: SteeringAngleVelocity_Value
                                 //  Referenced by: '<Root>/SteeringAngleVelocity'

  real32_T Acceleration_Value;         // Computed Parameter: Acceleration_Value
                                          //  Referenced by: '<Root>/Acceleration'

  real32_T Jerk_Value;                 // Computed Parameter: Jerk_Value
                                          //  Referenced by: '<Root>/Jerk'

};

// Real-time Model Data Structure
struct tag_RTM_fgc_T {
  const char_T * volatile errorStatus;
};

// Class declaration for model fgc
class fgc
{
  // public data and function members
 public:
  // Real-Time Model get method
  RT_MODEL_fgc_T * getRTM();

  // model initialize function
  void initialize();

  // model step function
  void step();

  // model terminate function
  void terminate();

  // Constructor
  fgc();

  // Destructor
  ~fgc();

  // private data and function members
 private:
  // Block signals
  B_fgc_T fgc_B;

  // Block states
  DW_fgc_T fgc_DW;

  // Tunable parameters
  static P_fgc_T fgc_P;

  // private member function(s) for subsystem '<Root>'
  void fgc_SystemCore_setup_e5u(ros_slros2_internal_block_Sub_T *obj);
  void fgc_SystemCore_setup_e5u4(ros_slros2_internal_block_Sub_T *obj);
  void fgc_SystemCore_setup_e5u4e(ros_slros2_internal_block_Sub_T *obj);
  void fgc_SystemCore_setup_e5(ros_slros2_internal_block_Sub_T *obj);
  void fgc_SystemCore_setup_e5u4ef(ros_slros2_internal_block_Sub_T *obj);
  void fgc_SystemCore_setup(ros_slros2_internal_block_Pub_T *obj);
  void fgc_SystemCore_setup_e(ros_slros2_internal_block_Pub_T *obj);

  // Real-Time Model
  RT_MODEL_fgc_T fgc_M;
};

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
//  '<Root>' : 'fgc'
//  '<S1>'   : 'fgc/Blank Message1'
//  '<S2>'   : 'fgc/Blank Message4'
//  '<S3>'   : 'fgc/Publish1'
//  '<S4>'   : 'fgc/Publish3'
//  '<S5>'   : 'fgc/Subscribe1'
//  '<S6>'   : 'fgc/Subscribe3'
//  '<S7>'   : 'fgc/Subscribe4'
//  '<S8>'   : 'fgc/Subscribe5'
//  '<S9>'   : 'fgc/Subscribe6'
//  '<S10>'  : 'fgc/Subsystem'
//  '<S11>'  : 'fgc/Subscribe1/Enabled Subsystem'
//  '<S12>'  : 'fgc/Subscribe3/Enabled Subsystem'
//  '<S13>'  : 'fgc/Subscribe4/Enabled Subsystem'
//  '<S14>'  : 'fgc/Subscribe5/Enabled Subsystem'
//  '<S15>'  : 'fgc/Subscribe6/Enabled Subsystem'
//  '<S16>'  : 'fgc/Subsystem/If Action Subsystem'
//  '<S17>'  : 'fgc/Subsystem/If Action Subsystem1'
//  '<S18>'  : 'fgc/Subsystem/If Action Subsystem/No_LV'
//  '<S19>'  : 'fgc/Subsystem/If Action Subsystem/Subsystem'

#endif                                 // RTW_HEADER_fgc_h_

//
// File trailer for generated code.
//
// [EOF]
//
