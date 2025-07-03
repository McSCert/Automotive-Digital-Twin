//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: fgc.cpp
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
#include "fgc.h"
#include "fgc_types.h"

extern "C"
{

#include "rt_nonfinite.h"

}

#include "rtwtypes.h"
#include "rmw/qos_profiles.h"
#include "rmw/types.h"
#include <stddef.h>

void fgc::fgc_SystemCore_setup_e5u(ros_slros2_internal_block_Sub_T *obj)
{
  rmw_qos_durability_policy_t durability;
  rmw_qos_history_policy_t history;
  rmw_qos_profile_t qos_profile;
  rmw_qos_reliability_policy_t reliability;
  char_T b_zeroDelimTopic[12];
  static const char_T tmp[11] = { '/', 'l', 'v', '_', 'p', 'r', 'e', 's', 'e',
    'n', 't' };

  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;
  history = RMW_QOS_POLICY_HISTORY_KEEP_LAST;
  reliability = RMW_QOS_POLICY_RELIABILITY_RELIABLE;
  durability = RMW_QOS_POLICY_DURABILITY_VOLATILE;
  SET_QOS_VALUES(qos_profile, history, (size_t)1.0, durability, reliability);
  for (int32_T i = 0; i < 11; i++) {
    b_zeroDelimTopic[i] = tmp[i];
  }

  b_zeroDelimTopic[11] = '\x00';
  Sub_fgc_177.createSubscriber(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void fgc::fgc_SystemCore_setup_e5u4(ros_slros2_internal_block_Sub_T *obj)
{
  rmw_qos_durability_policy_t durability;
  rmw_qos_history_policy_t history;
  rmw_qos_profile_t qos_profile;
  rmw_qos_reliability_policy_t reliability;
  char_T b_zeroDelimTopic[14];
  static const char_T tmp[13] = { '/', 'l', 'v', '_', 'l', 'o', 'n', 'g', '_',
    'd', 'i', 's', 't' };

  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;
  history = RMW_QOS_POLICY_HISTORY_KEEP_LAST;
  reliability = RMW_QOS_POLICY_RELIABILITY_RELIABLE;
  durability = RMW_QOS_POLICY_DURABILITY_VOLATILE;
  SET_QOS_VALUES(qos_profile, history, (size_t)1.0, durability, reliability);
  for (int32_T i = 0; i < 13; i++) {
    b_zeroDelimTopic[i] = tmp[i];
  }

  b_zeroDelimTopic[13] = '\x00';
  Sub_fgc_178.createSubscriber(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void fgc::fgc_SystemCore_setup_e5u4e(ros_slros2_internal_block_Sub_T *obj)
{
  rmw_qos_durability_policy_t durability;
  rmw_qos_history_policy_t history;
  rmw_qos_profile_t qos_profile;
  rmw_qos_reliability_policy_t reliability;
  char_T b_zeroDelimTopic[20];
  static const char_T tmp[19] = { '/', 'a', 'c', 'c', '/', 'e', 'm', 'e', 'r',
    'g', 'e', 'n', 'c', 'y', '_', 's', 't', 'o', 'p' };

  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;
  history = RMW_QOS_POLICY_HISTORY_KEEP_LAST;
  reliability = RMW_QOS_POLICY_RELIABILITY_RELIABLE;
  durability = RMW_QOS_POLICY_DURABILITY_VOLATILE;
  SET_QOS_VALUES(qos_profile, history, (size_t)1.0, durability, reliability);
  for (int32_T i = 0; i < 19; i++) {
    b_zeroDelimTopic[i] = tmp[i];
  }

  b_zeroDelimTopic[19] = '\x00';
  Sub_fgc_179.createSubscriber(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void fgc::fgc_SystemCore_setup_e5(ros_slros2_internal_block_Sub_T *obj)
{
  rmw_qos_durability_policy_t durability;
  rmw_qos_history_policy_t history;
  rmw_qos_profile_t qos_profile;
  rmw_qos_reliability_policy_t reliability;
  char_T b_zeroDelimTopic[16];
  static const char_T tmp[15] = { '/', 'a', 'c', 'c', '/', 'e', 'n', 'a', 'b',
    'l', 'e', '_', 'a', 'c', 'c' };

  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;
  history = RMW_QOS_POLICY_HISTORY_KEEP_LAST;
  reliability = RMW_QOS_POLICY_RELIABILITY_RELIABLE;
  durability = RMW_QOS_POLICY_DURABILITY_VOLATILE;
  SET_QOS_VALUES(qos_profile, history, (size_t)1.0, durability, reliability);
  for (int32_T i = 0; i < 15; i++) {
    b_zeroDelimTopic[i] = tmp[i];
  }

  b_zeroDelimTopic[15] = '\x00';
  Sub_fgc_221.createSubscriber(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void fgc::fgc_SystemCore_setup_e5u4ef(ros_slros2_internal_block_Sub_T *obj)
{
  rmw_qos_durability_policy_t durability;
  rmw_qos_history_policy_t history;
  rmw_qos_profile_t qos_profile;
  rmw_qos_reliability_policy_t reliability;
  char_T b_zeroDelimTopic[15];
  static const char_T tmp[14] = { '/', 'a', 'c', 'c', '/', 's', 'e', 't', '_',
    's', 'p', 'e', 'e', 'd' };

  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;
  history = RMW_QOS_POLICY_HISTORY_KEEP_LAST;
  reliability = RMW_QOS_POLICY_RELIABILITY_RELIABLE;
  durability = RMW_QOS_POLICY_DURABILITY_VOLATILE;
  SET_QOS_VALUES(qos_profile, history, (size_t)1.0, durability, reliability);
  for (int32_T i = 0; i < 14; i++) {
    b_zeroDelimTopic[i] = tmp[i];
  }

  b_zeroDelimTopic[14] = '\x00';
  Sub_fgc_187.createSubscriber(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void fgc::fgc_SystemCore_setup(ros_slros2_internal_block_Pub_T *obj)
{
  rmw_qos_durability_policy_t durability;
  rmw_qos_history_policy_t history;
  rmw_qos_profile_t qos_profile;
  rmw_qos_reliability_policy_t reliability;
  char_T b_zeroDelimTopic[10];
  static const char_T tmp[9] = { '/', 'S', 'F', '_', 'S', 'p', 'e', 'e', 'd' };

  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;
  history = RMW_QOS_POLICY_HISTORY_KEEP_LAST;
  reliability = RMW_QOS_POLICY_RELIABILITY_RELIABLE;
  durability = RMW_QOS_POLICY_DURABILITY_VOLATILE;
  SET_QOS_VALUES(qos_profile, history, (size_t)1.0, durability, reliability);
  for (int32_T i = 0; i < 9; i++) {
    b_zeroDelimTopic[i] = tmp[i];
  }

  b_zeroDelimTopic[9] = '\x00';
  Pub_fgc_183.createPublisher(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void fgc::fgc_SystemCore_setup_e(ros_slros2_internal_block_Pub_T *obj)
{
  rmw_qos_durability_policy_t durability;
  rmw_qos_history_policy_t history;
  rmw_qos_profile_t qos_profile;
  rmw_qos_reliability_policy_t reliability;
  char_T b_zeroDelimTopic[21];
  static const char_T tmp[20] = { '/', 'd', 't', '/', 'i', 'n', 'p', 'u', 't',
    '/', 'n', 'a', 'v', 'i', 'g', 'a', 't', 'i', 'o', 'n' };

  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;
  history = RMW_QOS_POLICY_HISTORY_KEEP_LAST;
  reliability = RMW_QOS_POLICY_RELIABILITY_RELIABLE;
  durability = RMW_QOS_POLICY_DURABILITY_VOLATILE;
  SET_QOS_VALUES(qos_profile, history, (size_t)1.0, durability, reliability);
  for (int32_T i = 0; i < 20; i++) {
    b_zeroDelimTopic[i] = tmp[i];
  }

  b_zeroDelimTopic[20] = '\x00';
  Pub_fgc_184.createPublisher(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

// Model step function
void fgc::step()
{
  SL_Bus_std_msgs_Bool b_varargout_2;
  SL_Bus_std_msgs_Float32 b_varargout_2_0;
  SL_Bus_std_msgs_Float32 rtb_BusAssignment;
  real_T rtb_saturate_set_speed;
  real32_T rtb_Merge;
  boolean_T b_varargout_1;
  boolean_T b_varargout_1_0;
  boolean_T b_varargout_1_1;
  boolean_T b_varargout_1_2;
  boolean_T b_varargout_1_3;

  // MATLABSystem: '<S6>/SourceBlock'
  b_varargout_1 = Sub_fgc_177.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S12>/Enable'

  if (b_varargout_1) {
    // SignalConversion generated from: '<S12>/In1'
    fgc_B.In1_l = b_varargout_2;
  }

  // End of Outputs for SubSystem: '<S6>/Enabled Subsystem'

  // MATLABSystem: '<S7>/SourceBlock'
  b_varargout_1_0 = Sub_fgc_178.getLatestMessage(&b_varargout_2_0);

  // Outputs for Enabled SubSystem: '<S7>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S13>/Enable'

  if (b_varargout_1_0) {
    // SignalConversion generated from: '<S13>/In1'
    fgc_B.In1_a = b_varargout_2_0;
  }

  // End of Outputs for SubSystem: '<S7>/Enabled Subsystem'

  // MATLABSystem: '<S8>/SourceBlock'
  b_varargout_1_1 = Sub_fgc_179.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S8>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S14>/Enable'

  if (b_varargout_1_1) {
    // SignalConversion generated from: '<S14>/In1'
    fgc_B.In1_m = b_varargout_2;
  }

  // End of Outputs for SubSystem: '<S8>/Enabled Subsystem'

  // MATLABSystem: '<S5>/SourceBlock'
  b_varargout_1_2 = Sub_fgc_221.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S5>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S11>/Enable'

  if (b_varargout_1_2) {
    // SignalConversion generated from: '<S11>/In1'
    fgc_B.In1_le = b_varargout_2;
  }

  // End of Outputs for SubSystem: '<S5>/Enabled Subsystem'

  // MATLABSystem: '<S9>/SourceBlock'
  b_varargout_1_3 = Sub_fgc_187.getLatestMessage(&b_varargout_2_0);

  // Outputs for Enabled SubSystem: '<S9>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S15>/Enable'

  if (b_varargout_1_3) {
    // SignalConversion generated from: '<S15>/In1'
    fgc_B.In1 = b_varargout_2_0;
  }

  // End of Outputs for SubSystem: '<S9>/Enabled Subsystem'

  // Outputs for Enabled SubSystem: '<Root>/Subsystem' incorporates:
  //   EnablePort: '<S10>/Enable'

  // Logic: '<Root>/OR1' incorporates:
  //   MATLABSystem: '<S5>/SourceBlock'
  //   MATLABSystem: '<S6>/SourceBlock'
  //   MATLABSystem: '<S7>/SourceBlock'
  //   MATLABSystem: '<S8>/SourceBlock'
  //   MATLABSystem: '<S9>/SourceBlock'

  if (b_varargout_1 || b_varargout_1_0 || b_varargout_1_1 || b_varargout_1_3 ||
      b_varargout_1_2) {
    // If: '<S10>/If' incorporates:
    //   If: '<S16>/If1'

    if (fgc_B.In1_m.data || (!fgc_B.In1_le.data)) {
      // Outputs for IfAction SubSystem: '<S10>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S17>/Action Port'

      // SignalConversion generated from: '<S17>/Out1' incorporates:
      //   Constant: '<S17>/Constant'

      rtb_saturate_set_speed = fgc_P.Constant_Value_ov;

      // End of Outputs for SubSystem: '<S10>/If Action Subsystem1'
    } else {
      // Outputs for IfAction SubSystem: '<S10>/If Action Subsystem' incorporates:
      //   ActionPort: '<S16>/Action Port'

      if (!fgc_B.In1_l.data) {
        // Outputs for IfAction SubSystem: '<S16>/No_LV' incorporates:
        //   ActionPort: '<S18>/Action Port'

        // If: '<S16>/If1' incorporates:
        //   DataTypeConversion: '<S18>/Cast To Single'

        rtb_Merge = fgc_B.In1.data;

        // End of Outputs for SubSystem: '<S16>/No_LV'
      } else {
        // Outputs for IfAction SubSystem: '<S16>/Subsystem' incorporates:
        //   ActionPort: '<S19>/Action Port'

        // If: '<S16>/If1' incorporates:
        //   Constant: '<S19>/Min_Safe_Follow_Time'
        //   Constant: '<S19>/SET_DIST'
        //   DataTypeConversion: '<S19>/Cast To Single1'
        //   Product: '<S19>/Divide'
        //   Saturate: '<S19>/Saturation'
        //   Sum: '<S19>/Subtract1'

        rtb_saturate_set_speed = fgc_B.In1_a.data - fgc_P.SET_DIST_Value;
        if (rtb_saturate_set_speed > fgc_P.Saturation_UpperSat) {
          rtb_saturate_set_speed = fgc_P.Saturation_UpperSat;
        } else if (rtb_saturate_set_speed < fgc_P.Saturation_LowerSat) {
          rtb_saturate_set_speed = fgc_P.Saturation_LowerSat;
        }

        rtb_Merge = static_cast<real32_T>(rtb_saturate_set_speed /
          fgc_P.Min_Safe_Follow_Time_Value);

        // End of Outputs for SubSystem: '<S16>/Subsystem'
      }

      // DataTypeConversion: '<S16>/Cast To Double'
      rtb_saturate_set_speed = rtb_Merge;

      // End of Outputs for SubSystem: '<S10>/If Action Subsystem'
    }

    // End of If: '<S10>/If'

    // MinMax: '<S10>/>0' incorporates:
    //   Constant: '<S10>/Constant'

    if ((!(rtb_saturate_set_speed >= fgc_P.Constant_Value_b)) && (!rtIsNaN(
          static_cast<real_T>(fgc_P.Constant_Value_b)))) {
      rtb_saturate_set_speed = fgc_P.Constant_Value_b;
    }

    // End of MinMax: '<S10>/>0'

    // MinMax: '<S10>/saturate_set_speed'
    if ((rtb_saturate_set_speed <= fgc_B.In1.data) || rtIsNaN(static_cast<real_T>
         (fgc_B.In1.data))) {
      // DataTypeConversion: '<S10>/Cast To Single'
      fgc_B.CastToSingle = static_cast<real32_T>(rtb_saturate_set_speed);
    } else {
      // DataTypeConversion: '<S10>/Cast To Single'
      fgc_B.CastToSingle = fgc_B.In1.data;
    }

    // End of MinMax: '<S10>/saturate_set_speed'
  }

  // End of Logic: '<Root>/OR1'
  // End of Outputs for SubSystem: '<Root>/Subsystem'

  // BusAssignment: '<Root>/Bus Assignment'
  rtb_BusAssignment.data = fgc_B.CastToSingle;

  // MATLABSystem: '<S3>/SinkBlock'
  Pub_fgc_183.publish(&rtb_BusAssignment);

  // BusAssignment: '<Root>/Bus Assignment2' incorporates:
  //   Constant: '<Root>/Acceleration'
  //   Constant: '<Root>/Jerk'
  //   Constant: '<Root>/SteeringAngle'
  //   Constant: '<Root>/SteeringAngleVelocity'
  //   Constant: '<S1>/Constant'

  fgc_B.BusAssignment2 = fgc_P.Constant_Value;
  fgc_B.BusAssignment2.drive.steering_angle = fgc_P.SteeringAngle_Value;
  fgc_B.BusAssignment2.drive.steering_angle_velocity =
    fgc_P.SteeringAngleVelocity_Value;
  fgc_B.BusAssignment2.drive.speed = fgc_B.CastToSingle;
  fgc_B.BusAssignment2.drive.acceleration = fgc_P.Acceleration_Value;
  fgc_B.BusAssignment2.drive.jerk = fgc_P.Jerk_Value;

  // MATLABSystem: '<S4>/SinkBlock'
  Pub_fgc_184.publish(&fgc_B.BusAssignment2);
}

// Model initialize function
void fgc::initialize()
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // non-finite (run-time) assignments
  fgc_P.Saturation_UpperSat = rtInf;

  // SystemInitialize for Enabled SubSystem: '<S6>/Enabled Subsystem'
  // SystemInitialize for SignalConversion generated from: '<S12>/In1' incorporates:
  //   Outport: '<S12>/Out1'

  fgc_B.In1_l = fgc_P.Out1_Y0_d;

  // End of SystemInitialize for SubSystem: '<S6>/Enabled Subsystem'

  // SystemInitialize for Enabled SubSystem: '<S7>/Enabled Subsystem'
  // SystemInitialize for SignalConversion generated from: '<S13>/In1' incorporates:
  //   Outport: '<S13>/Out1'

  fgc_B.In1_a = fgc_P.Out1_Y0_g;

  // End of SystemInitialize for SubSystem: '<S7>/Enabled Subsystem'

  // SystemInitialize for Enabled SubSystem: '<S8>/Enabled Subsystem'
  // SystemInitialize for SignalConversion generated from: '<S14>/In1' incorporates:
  //   Outport: '<S14>/Out1'

  fgc_B.In1_m = fgc_P.Out1_Y0_f;

  // End of SystemInitialize for SubSystem: '<S8>/Enabled Subsystem'

  // SystemInitialize for Enabled SubSystem: '<S5>/Enabled Subsystem'
  // SystemInitialize for SignalConversion generated from: '<S11>/In1' incorporates:
  //   Outport: '<S11>/Out1'

  fgc_B.In1_le = fgc_P.Out1_Y0;

  // End of SystemInitialize for SubSystem: '<S5>/Enabled Subsystem'

  // SystemInitialize for Enabled SubSystem: '<S9>/Enabled Subsystem'
  // SystemInitialize for SignalConversion generated from: '<S15>/In1' incorporates:
  //   Outport: '<S15>/Out1'

  fgc_B.In1 = fgc_P.Out1_Y0_i;

  // End of SystemInitialize for SubSystem: '<S9>/Enabled Subsystem'

  // SystemInitialize for Enabled SubSystem: '<Root>/Subsystem'
  // SystemInitialize for DataTypeConversion: '<S10>/Cast To Single' incorporates:
  //   Outport: '<S10>/safe_follow_speed'

  fgc_B.CastToSingle = fgc_P.safe_follow_speed_Y0;

  // End of SystemInitialize for SubSystem: '<Root>/Subsystem'

  // Start for MATLABSystem: '<S6>/SourceBlock'
  fgc_DW.obj_f.isInitialized = 0;
  fgc_DW.obj_f.matlabCodegenIsDeleted = false;
  fgc_SystemCore_setup_e5u(&fgc_DW.obj_f);

  // Start for MATLABSystem: '<S7>/SourceBlock'
  fgc_DW.obj_g.isInitialized = 0;
  fgc_DW.obj_g.matlabCodegenIsDeleted = false;
  fgc_SystemCore_setup_e5u4(&fgc_DW.obj_g);

  // Start for MATLABSystem: '<S8>/SourceBlock'
  fgc_DW.obj_e.isInitialized = 0;
  fgc_DW.obj_e.matlabCodegenIsDeleted = false;
  fgc_SystemCore_setup_e5u4e(&fgc_DW.obj_e);

  // Start for MATLABSystem: '<S5>/SourceBlock'
  fgc_DW.obj_gb.isInitialized = 0;
  fgc_DW.obj_gb.matlabCodegenIsDeleted = false;
  fgc_SystemCore_setup_e5(&fgc_DW.obj_gb);

  // Start for MATLABSystem: '<S9>/SourceBlock'
  fgc_DW.obj_d.isInitialized = 0;
  fgc_DW.obj_d.matlabCodegenIsDeleted = false;
  fgc_SystemCore_setup_e5u4ef(&fgc_DW.obj_d);

  // Start for MATLABSystem: '<S3>/SinkBlock'
  fgc_DW.obj_n.isInitialized = 0;
  fgc_DW.obj_n.matlabCodegenIsDeleted = false;
  fgc_SystemCore_setup(&fgc_DW.obj_n);

  // Start for MATLABSystem: '<S4>/SinkBlock'
  fgc_DW.obj.isInitialized = 0;
  fgc_DW.obj.matlabCodegenIsDeleted = false;
  fgc_SystemCore_setup_e(&fgc_DW.obj);
}

// Model terminate function
void fgc::terminate()
{
  // Terminate for MATLABSystem: '<S6>/SourceBlock'
  if (!fgc_DW.obj_f.matlabCodegenIsDeleted) {
    fgc_DW.obj_f.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S6>/SourceBlock'

  // Terminate for MATLABSystem: '<S7>/SourceBlock'
  if (!fgc_DW.obj_g.matlabCodegenIsDeleted) {
    fgc_DW.obj_g.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S7>/SourceBlock'

  // Terminate for MATLABSystem: '<S8>/SourceBlock'
  if (!fgc_DW.obj_e.matlabCodegenIsDeleted) {
    fgc_DW.obj_e.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S8>/SourceBlock'

  // Terminate for MATLABSystem: '<S5>/SourceBlock'
  if (!fgc_DW.obj_gb.matlabCodegenIsDeleted) {
    fgc_DW.obj_gb.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S5>/SourceBlock'

  // Terminate for MATLABSystem: '<S9>/SourceBlock'
  if (!fgc_DW.obj_d.matlabCodegenIsDeleted) {
    fgc_DW.obj_d.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S9>/SourceBlock'

  // Terminate for MATLABSystem: '<S3>/SinkBlock'
  if (!fgc_DW.obj_n.matlabCodegenIsDeleted) {
    fgc_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S3>/SinkBlock'

  // Terminate for MATLABSystem: '<S4>/SinkBlock'
  if (!fgc_DW.obj.matlabCodegenIsDeleted) {
    fgc_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S4>/SinkBlock'
}

// Constructor
fgc::fgc() :
  fgc_B(),
  fgc_DW(),
  fgc_M()
{
  // Currently there is no constructor body generated.
}

// Destructor
fgc::~fgc()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
RT_MODEL_fgc_T * fgc::getRTM()
{
  return (&fgc_M);
}

//
// File trailer for generated code.
//
// [EOF]
//
