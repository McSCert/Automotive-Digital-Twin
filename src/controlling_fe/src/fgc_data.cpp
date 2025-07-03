//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: fgc_data.cpp
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

// Block parameters (default storage)
P_fgc_T fgc::fgc_P = {
  // Computed Parameter: Constant_Value
  //  Referenced by: '<S1>/Constant'

  {
    {
      {
        0,                             // sec
        0U                             // nanosec
      },                               // stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // frame_id

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // frame_id_SL_Info
    },                                 // header

    {
      0.0F,                            // steering_angle
      0.0F,                            // steering_angle_velocity
      0.0F,                            // speed
      0.0F,                            // acceleration
      0.0F                             // jerk
    }                                  // drive
  },

  // Computed Parameter: Out1_Y0
  //  Referenced by: '<S11>/Out1'

  {
    false                              // data
  },

  // Computed Parameter: Out1_Y0_d
  //  Referenced by: '<S12>/Out1'

  {
    false                              // data
  },

  // Computed Parameter: Out1_Y0_f
  //  Referenced by: '<S14>/Out1'

  {
    false                              // data
  },

  // Computed Parameter: Constant_Value_f
  //  Referenced by: '<S6>/Constant'

  {
    false                              // data
  },

  // Computed Parameter: Constant_Value_j
  //  Referenced by: '<S8>/Constant'

  {
    false                              // data
  },

  // Computed Parameter: Constant_Value_n
  //  Referenced by: '<S5>/Constant'

  {
    false                              // data
  },

  // Computed Parameter: Out1_Y0_g
  //  Referenced by: '<S13>/Out1'

  {
    0.0F                               // data
  },

  // Computed Parameter: Out1_Y0_i
  //  Referenced by: '<S15>/Out1'

  {
    0.0F                               // data
  },

  // Computed Parameter: Constant_Value_o
  //  Referenced by: '<S2>/Constant'

  {
    0.0F                               // data
  },

  // Computed Parameter: Constant_Value_d
  //  Referenced by: '<S7>/Constant'

  {
    0.0F                               // data
  },

  // Computed Parameter: Constant_Value_j3
  //  Referenced by: '<S9>/Constant'

  {
    0.0F                               // data
  },

  // Expression: 0
  //  Referenced by: '<S17>/Constant'

  0.0,

  // Expression: 0.3
  //  Referenced by: '<S19>/SET_DIST'

  0.3,

  // Expression: inf
  //  Referenced by: '<S19>/Saturation'

  0.0,

  // Expression: 0
  //  Referenced by: '<S19>/Saturation'

  0.0,

  // Expression: 0.4
  //  Referenced by: '<S19>/Min_Safe_Follow_Time'

  0.4,

  // Computed Parameter: safe_follow_speed_Y0
  //  Referenced by: '<S10>/safe_follow_speed'

  0.0F,

  // Computed Parameter: Constant_Value_b
  //  Referenced by: '<S10>/Constant'

  0.0F,

  // Computed Parameter: SteeringAngle_Value
  //  Referenced by: '<Root>/SteeringAngle'

  0.0F,

  // Computed Parameter: SteeringAngleVelocity_Value
  //  Referenced by: '<Root>/SteeringAngleVelocity'

  0.0F,

  // Computed Parameter: Acceleration_Value
  //  Referenced by: '<Root>/Acceleration'

  0.1F,

  // Computed Parameter: Jerk_Value
  //  Referenced by: '<Root>/Jerk'

  0.1F
};

//
// File trailer for generated code.
//
// [EOF]
//
