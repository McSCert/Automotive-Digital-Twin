//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: data_preprocessing_fe.cpp
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
#include "data_preprocessing_fe.h"
#include "rtwtypes.h"
#include "data_preprocessing_fe_types.h"
#include <string.h>
#include <math.h>

extern "C"
{

#include "rt_nonfinite.h"

}

#include "rmw/qos_profiles.h"
#include "rmw/types.h"
#include <stddef.h>
#include <stdlib.h>

// Block signals (default storage)
B_data_preprocessing_fe_T data_preprocessing_fe_B;

// Block states (default storage)
DW_data_preprocessing_fe_T data_preprocessing_fe_DW;

// Real-time model
RT_MODEL_data_preprocessing_fe_T data_preprocessing_fe_M_ = RT_MODEL_data_preprocessing_fe_T();
RT_MODEL_data_preprocessing_fe_T *const data_preprocessing_fe_M = &data_preprocessing_fe_M_;

// Forward declaration for local functions
static void data_preprocessing_fe_any(const boolean_T x_data[], boolean_T y_data[],
  int32_T *y_size);
static void data_preprocessing_fe_nullAssignment(real_T x_data[], int32_T x_size[2],
  const boolean_T idx_data[]);
static void data_preprocessing_fe_emxInit_real_T(emxArray_real_T_data_preprocessing_fe_T
  **pEmxArray, int32_T numDimensions);
static void hokuyo_emxEnsureCapacity_real_T(emxArray_real_T_data_preprocessing_fe_T
  *emxArray, int32_T oldNumel);
static void data_preprocessing_fe_pdist2(const real_T Xin_data[], const int32_T Xin_size
  [2], const real_T Yin_data[], const int32_T Yin_size[2],
  emxArray_real_T_data_preprocessing_fe_T *D);
static void data_preprocessing_fe_emxInit_boolean_T(emxArray_boolean_T_hokuyoTrac_T
  **pEmxArray, int32_T numDimensions);
static void hok_emxEnsureCapacity_boolean_T(emxArray_boolean_T_hokuyoTrac_T
  *emxArray, int32_T oldNumel);
static void hokuyoTra_combineVectorElements(const
  emxArray_boolean_T_hokuyoTrac_T *x, int32_T y_data[], int32_T *y_size);
static void data_preprocessing_fe_emxFree_boolean_T(emxArray_boolean_T_hokuyoTrac_T
  **pEmxArray);
static void hokuyoTrack_binary_expand_op_de(boolean_T in1_data[], int32_T
  *in1_size, const real_T in2_data[], const int32_T in2_size[2], const
  emxArray_real_T_data_preprocessing_fe_T *in3, const sEizE7AuWDta99hHHr39skG_hokuy_T
  in4[10], int32_T in5, real_T in6, real_T in7);
static void data_preprocessing_fe_binary_expand_op_d(boolean_T in1_data[], int32_T
  *in1_size, const boolean_T in2_data[], const int32_T *in2_size, const real_T
  in3_data[], const int32_T in3_size[2]);
static void data_preprocessing_fe_binary_expand_op(boolean_T in1_data[], int32_T
  *in1_size, const real_T in2_data[], const int32_T in2_size[2]);
static int32_T hokuyoT_combineVectorElements_e(const boolean_T x_data[], const
  int32_T *x_size);
static void data_preprocessing_fe_eml_find(const boolean_T x_data[], const int32_T
  *x_size, int32_T i_data[], int32_T *i_size);
static void data_preprocessing_fe_emxFree_real_T(emxArray_real_T_data_preprocessing_fe_T
  **pEmxArray);
static real_T data_preprocessing_fe_maximum(const real_T x_data[], const int32_T x_size[2]);
static real_T data_preprocessing_fe_minimum(const real_T x_data[], const int32_T x_size[2]);
static void data_preprocessing_fe_emxInit_uint32_T(emxArray_uint32_T_hokuyoTrack_T
  **pEmxArray, int32_T numDimensions);
static void data_preprocessing_fe_emxInit_int32_T(emxArray_int32_T_data_preprocessing_fe_T
  **pEmxArray, int32_T numDimensions);
static void data_preprocessing_fe_bsxfun(const emxArray_real_T_data_preprocessing_fe_T *a, const
  emxArray_real_T_data_preprocessing_fe_T *b, emxArray_real_T_data_preprocessing_fe_T *c);
static void hokuy_emxEnsureCapacity_int32_T(emxArray_int32_T_data_preprocessing_fe_T
  *emxArray, int32_T oldNumel);
static void data_preprocessing_fe_eml_find_d(const emxArray_boolean_T_hokuyoTrac_T *x,
  emxArray_int32_T_data_preprocessing_fe_T *i, emxArray_int32_T_data_preprocessing_fe_T *j);
static void data_preprocessing_fe_any_o(const emxArray_boolean_T_hokuyoTrac_T *x,
  emxArray_boolean_T_hokuyoTrac_T *y);
static void data_preprocessing_fe_emxFree_int32_T(emxArray_int32_T_data_preprocessing_fe_T
  **pEmxArray);
static void data_preprocessing_fe_findNonCoveredZero(const
  emxArray_boolean_T_hokuyoTrac_T *Z, real_T *zi, real_T *zj);
static void hokuyoTrack_hungarianAssignment(emxArray_real_T_data_preprocessing_fe_T *cost,
  emxArray_boolean_T_hokuyoTrac_T *assignment);
static void hokuyoTra_binary_expand_op_dezv(emxArray_boolean_T_hokuyoTrac_T *in1,
  const emxArray_boolean_T_hokuyoTrac_T *in2, const
  emxArray_int32_T_data_preprocessing_fe_T *in3, const emxArray_real_T_data_preprocessing_fe_T
  *in4);
static void hoku_emxEnsureCapacity_uint32_T(emxArray_uint32_T_hokuyoTrack_T
  *emxArray, int32_T oldNumel);
static void hokuyoTrac_binary_expand_op_dez(emxArray_boolean_T_hokuyoTrac_T *in1,
  const emxArray_boolean_T_hokuyoTrac_T *in2, const
  emxArray_int32_T_data_preprocessing_fe_T *in3, const emxArray_real_T_data_preprocessing_fe_T
  *in4);
static void data_preprocessing_fe_and(emxArray_boolean_T_hokuyoTrac_T *in1, const
  emxArray_boolean_T_hokuyoTrac_T *in2, const emxArray_boolean_T_hokuyoTrac_T
  *in3);
static void data_preprocessing_fe_emxFree_uint32_T(emxArray_uint32_T_hokuyoTrack_T
  **pEmxArray);
static void data_preprocessing_fe_SystemCore_setup(ros_slros2_internal_block_Pub_T *obj);
static void data_preprocessing_fe_SystemCore_setup_d(ros_slros2_internal_block_Sub_T *obj);

// Function for MATLAB Function: '<S9>/LiDAR Clustering'
static void data_preprocessing_fe_any(const boolean_T x_data[], boolean_T y_data[],
  int32_T *y_size)
{
  int32_T i1;
  int32_T i2;
  *y_size = 2000;
  i1 = 0;
  i2 = 2000;
  for (int32_T j = 0; j < 2000; j++) {
    int32_T ix;
    boolean_T exitg1;
    y_data[j] = false;
    i1++;
    i2++;
    ix = i1;
    exitg1 = false;
    while ((!exitg1) && (ix <= i2)) {
      if (x_data[ix - 1]) {
        y_data[j] = true;
        exitg1 = true;
      } else {
        ix += 2000;
      }
    }
  }
}

// Function for MATLAB Function: '<S9>/LiDAR Clustering'
static void data_preprocessing_fe_nullAssignment(real_T x_data[], int32_T x_size[2],
  const boolean_T idx_data[])
{
  int32_T b_k;
  int32_T i;
  int32_T loop_ub;
  int32_T n;
  n = 0;
  i = 0;
  for (b_k = 0; b_k < 2000; b_k++) {
    boolean_T idx;
    idx = idx_data[b_k];
    n += idx;
    if (!idx) {
      x_data[i] = x_data[b_k];
      x_data[i + x_size[0]] = x_data[b_k + x_size[0]];
      i++;
    }
  }

  if (2000 - n < 1) {
    b_k = -1;
    n = -1;
  } else {
    b_k = 1999 - n;
    n = 1999 - n;
  }

  loop_ub = n + 1;
  for (n = 0; n < 2; n++) {
    for (i = 0; i < loop_ub; i++) {
      x_data[i + (b_k + 1) * n] = x_data[x_size[0] * n + i];
    }
  }

  x_size[0] = b_k + 1;
  x_size[1] = 2;
}

static void data_preprocessing_fe_emxInit_real_T(emxArray_real_T_data_preprocessing_fe_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_real_T_data_preprocessing_fe_T *emxArray;
  *pEmxArray = static_cast<emxArray_real_T_data_preprocessing_fe_T *>(malloc(sizeof
    (emxArray_real_T_data_preprocessing_fe_T)));
  emxArray = *pEmxArray;
  emxArray->data = static_cast<real_T *>(NULL);
  emxArray->numDimensions = numDimensions;
  emxArray->size = static_cast<int32_T *>(malloc(sizeof(int32_T)
    * static_cast<uint32_T>(numDimensions)));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (int32_T i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void hokuyo_emxEnsureCapacity_real_T(emxArray_real_T_data_preprocessing_fe_T
  *emxArray, int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  data_preprocessing_fe_B.newNumel = 1;
  for (data_preprocessing_fe_B.i_n = 0; data_preprocessing_fe_B.i_n < emxArray->numDimensions;
       data_preprocessing_fe_B.i_n++) {
    data_preprocessing_fe_B.newNumel *= emxArray->size[data_preprocessing_fe_B.i_n];
  }

  if (data_preprocessing_fe_B.newNumel > emxArray->allocatedSize) {
    data_preprocessing_fe_B.i_n = emxArray->allocatedSize;
    if (data_preprocessing_fe_B.i_n < 16) {
      data_preprocessing_fe_B.i_n = 16;
    }

    while (data_preprocessing_fe_B.i_n < data_preprocessing_fe_B.newNumel) {
      if (data_preprocessing_fe_B.i_n > 1073741823) {
        data_preprocessing_fe_B.i_n = MAX_int32_T;
      } else {
        data_preprocessing_fe_B.i_n <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(data_preprocessing_fe_B.i_n), sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * static_cast<uint32_T>
             (oldNumel));
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = static_cast<real_T *>(newData);
    emxArray->allocatedSize = data_preprocessing_fe_B.i_n;
    emxArray->canFreeData = true;
  }
}

// Function for MATLAB Function: '<S9>/LiDAR Clustering'
static void data_preprocessing_fe_pdist2(const real_T Xin_data[], const int32_T Xin_size
  [2], const real_T Yin_data[], const int32_T Yin_size[2],
  emxArray_real_T_data_preprocessing_fe_T *D)
{
  boolean_T exitg1;
  if (Xin_size[0] == 0) {
    D->size[0] = 0;
    D->size[1] = Yin_size[0];
  } else if (Yin_size[0] == 0) {
    D->size[0] = Xin_size[0];
    D->size[1] = 0;
  } else {
    data_preprocessing_fe_B.qq = D->size[0] * D->size[1];
    D->size[0] = Xin_size[0];
    D->size[1] = Yin_size[0];
    hokuyo_emxEnsureCapacity_real_T(D, data_preprocessing_fe_B.qq);
    data_preprocessing_fe_B.loop_ub_b = Xin_size[0] * Yin_size[0];
    for (data_preprocessing_fe_B.qq = 0; data_preprocessing_fe_B.qq < data_preprocessing_fe_B.loop_ub_b;
         data_preprocessing_fe_B.qq++) {
      D->data[data_preprocessing_fe_B.qq] = (rtNaN);
    }

    data_preprocessing_fe_B.loop_ub_b = Xin_size[0];
    for (data_preprocessing_fe_B.qq = 0; data_preprocessing_fe_B.qq < data_preprocessing_fe_B.loop_ub_b;
         data_preprocessing_fe_B.qq++) {
      data_preprocessing_fe_B.X_data[data_preprocessing_fe_B.qq << 1] = Xin_data[data_preprocessing_fe_B.qq];
      data_preprocessing_fe_B.X_data[1 + (data_preprocessing_fe_B.qq << 1)] =
        Xin_data[data_preprocessing_fe_B.qq + Xin_size[0]];
    }

    data_preprocessing_fe_B.loop_ub_b = Yin_size[0];
    for (data_preprocessing_fe_B.qq = 0; data_preprocessing_fe_B.qq < data_preprocessing_fe_B.loop_ub_b;
         data_preprocessing_fe_B.qq++) {
      data_preprocessing_fe_B.Y_data[data_preprocessing_fe_B.qq << 1] = Yin_data[data_preprocessing_fe_B.qq];
      data_preprocessing_fe_B.Y_data[1 + (data_preprocessing_fe_B.qq << 1)] =
        Yin_data[data_preprocessing_fe_B.qq + Yin_size[0]];
    }

    data_preprocessing_fe_B.loop_ub_b = Xin_size[0];
    for (data_preprocessing_fe_B.D = 0; data_preprocessing_fe_B.D < data_preprocessing_fe_B.loop_ub_b;
         data_preprocessing_fe_B.D++) {
      data_preprocessing_fe_B.logIndX_data[data_preprocessing_fe_B.D] = true;
      data_preprocessing_fe_B.nanflag = false;
      data_preprocessing_fe_B.D_o = 0;
      exitg1 = false;
      while ((!exitg1) && (data_preprocessing_fe_B.D_o < 2)) {
        if (rtIsNaN(data_preprocessing_fe_B.X_data[(data_preprocessing_fe_B.D << 1) +
                    data_preprocessing_fe_B.D_o])) {
          data_preprocessing_fe_B.nanflag = true;
          exitg1 = true;
        } else {
          data_preprocessing_fe_B.D_o++;
        }
      }

      if (data_preprocessing_fe_B.nanflag) {
        data_preprocessing_fe_B.logIndX_data[data_preprocessing_fe_B.D] = false;
      }
    }

    data_preprocessing_fe_B.loop_ub_b = Yin_size[0];
    for (data_preprocessing_fe_B.D = 0; data_preprocessing_fe_B.D < data_preprocessing_fe_B.loop_ub_b;
         data_preprocessing_fe_B.D++) {
      data_preprocessing_fe_B.logIndY_data[data_preprocessing_fe_B.D] = true;
      data_preprocessing_fe_B.nanflag = false;
      data_preprocessing_fe_B.D_o = 0;
      exitg1 = false;
      while ((!exitg1) && (data_preprocessing_fe_B.D_o < 2)) {
        if (rtIsNaN(data_preprocessing_fe_B.Y_data[(data_preprocessing_fe_B.D << 1) +
                    data_preprocessing_fe_B.D_o])) {
          data_preprocessing_fe_B.nanflag = true;
          exitg1 = true;
        } else {
          data_preprocessing_fe_B.D_o++;
        }
      }

      if (data_preprocessing_fe_B.nanflag) {
        data_preprocessing_fe_B.logIndY_data[data_preprocessing_fe_B.D] = false;
      }

      if (data_preprocessing_fe_B.logIndY_data[data_preprocessing_fe_B.D]) {
        data_preprocessing_fe_B.D_o = Xin_size[0];
        for (data_preprocessing_fe_B.qq = 0; data_preprocessing_fe_B.qq < data_preprocessing_fe_B.D_o;
             data_preprocessing_fe_B.qq++) {
          if (data_preprocessing_fe_B.logIndX_data[data_preprocessing_fe_B.qq]) {
            data_preprocessing_fe_B.tempSum_tmp = data_preprocessing_fe_B.X_data[data_preprocessing_fe_B.qq
              << 1] - data_preprocessing_fe_B.Y_data[data_preprocessing_fe_B.D << 1];
            data_preprocessing_fe_B.D_tmp = data_preprocessing_fe_B.X_data[(data_preprocessing_fe_B.qq << 1)
              + 1] - data_preprocessing_fe_B.Y_data[(data_preprocessing_fe_B.D << 1) + 1];
            D->data[data_preprocessing_fe_B.qq + D->size[0] * data_preprocessing_fe_B.D] = sqrt
              (data_preprocessing_fe_B.D_tmp * data_preprocessing_fe_B.D_tmp +
               data_preprocessing_fe_B.tempSum_tmp * data_preprocessing_fe_B.tempSum_tmp);
          }
        }
      }
    }
  }
}

static void data_preprocessing_fe_emxInit_boolean_T(emxArray_boolean_T_hokuyoTrac_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_boolean_T_hokuyoTrac_T *emxArray;
  *pEmxArray = static_cast<emxArray_boolean_T_hokuyoTrac_T *>(malloc(sizeof
    (emxArray_boolean_T_hokuyoTrac_T)));
  emxArray = *pEmxArray;
  emxArray->data = static_cast<boolean_T *>(NULL);
  emxArray->numDimensions = numDimensions;
  emxArray->size = static_cast<int32_T *>(malloc(sizeof(int32_T)
    * static_cast<uint32_T>(numDimensions)));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (int32_T i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void hok_emxEnsureCapacity_boolean_T(emxArray_boolean_T_hokuyoTrac_T
  *emxArray, int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  data_preprocessing_fe_B.newNumel_a = 1;
  for (data_preprocessing_fe_B.i_ju = 0; data_preprocessing_fe_B.i_ju < emxArray->numDimensions;
       data_preprocessing_fe_B.i_ju++) {
    data_preprocessing_fe_B.newNumel_a *= emxArray->size[data_preprocessing_fe_B.i_ju];
  }

  if (data_preprocessing_fe_B.newNumel_a > emxArray->allocatedSize) {
    data_preprocessing_fe_B.i_ju = emxArray->allocatedSize;
    if (data_preprocessing_fe_B.i_ju < 16) {
      data_preprocessing_fe_B.i_ju = 16;
    }

    while (data_preprocessing_fe_B.i_ju < data_preprocessing_fe_B.newNumel_a) {
      if (data_preprocessing_fe_B.i_ju > 1073741823) {
        data_preprocessing_fe_B.i_ju = MAX_int32_T;
      } else {
        data_preprocessing_fe_B.i_ju <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(data_preprocessing_fe_B.i_ju), sizeof
                     (boolean_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(boolean_T) * static_cast<uint32_T>
             (oldNumel));
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = static_cast<boolean_T *>(newData);
    emxArray->allocatedSize = data_preprocessing_fe_B.i_ju;
    emxArray->canFreeData = true;
  }
}

// Function for MATLAB Function: '<S9>/LiDAR Clustering'
static void hokuyoTra_combineVectorElements(const
  emxArray_boolean_T_hokuyoTrac_T *x, int32_T y_data[], int32_T *y_size)
{
  int32_T vlen;
  vlen = x->size[1];
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    *y_size = static_cast<int16_T>(x->size[0]);
    vlen = static_cast<int16_T>(x->size[0]);
    if (vlen - 1 >= 0) {
      memset(&y_data[0], 0, static_cast<uint32_T>(vlen) * sizeof(int32_T));
    }
  } else {
    int32_T b;
    int32_T vstride;
    int32_T xoffset;
    vstride = x->size[0];
    *y_size = x->size[0];
    b = x->size[0];
    for (xoffset = 0; xoffset < b; xoffset++) {
      y_data[xoffset] = x->data[xoffset];
    }

    for (b = 2; b <= vlen; b++) {
      xoffset = (b - 1) * vstride;
      for (int32_T b_j = 0; b_j < vstride; b_j++) {
        y_data[b_j] += x->data[xoffset + b_j];
      }
    }
  }
}

static void data_preprocessing_fe_emxFree_boolean_T(emxArray_boolean_T_hokuyoTrac_T
  **pEmxArray)
{
  if (*pEmxArray != static_cast<emxArray_boolean_T_hokuyoTrac_T *>(NULL)) {
    if (((*pEmxArray)->data != static_cast<boolean_T *>(NULL)) && (*pEmxArray)
        ->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = static_cast<emxArray_boolean_T_hokuyoTrac_T *>(NULL);
  }
}

static void hokuyoTrack_binary_expand_op_de(boolean_T in1_data[], int32_T
  *in1_size, const real_T in2_data[], const int32_T in2_size[2], const
  emxArray_real_T_data_preprocessing_fe_T *in3, const sEizE7AuWDta99hHHr39skG_hokuy_T
  in4[10], int32_T in5, real_T in6, real_T in7)
{
  int32_T in4_0;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;

  // Outputs for Enabled SubSystem: '<Root>/Create Hokuyo Tracks' incorporates:
  //   EnablePort: '<S1>/Enable'

  // MATLAB Function: '<S9>/LiDAR Clustering' incorporates:
  //   Constant: '<S8>/eps'

  in4_0 = static_cast<int32_T>(in4[in5].corePoints.b_index[static_cast<int32_T>
    (in6) - 1]);
  loop_ub = in3->size[0] == 1 ? in2_size[0] : in3->size[0];
  *in1_size = loop_ub;
  stride_0_0 = (in2_size[0] != 1);
  stride_1_0 = (in3->size[0] != 1);
  for (int32_T i = 0; i < loop_ub; i++) {
    in1_data[i] = ((!(in2_data[i * stride_0_0 + (in2_size[0] << 1)] != 0.0)) &&
                   (in3->data[(in4_0 - 1) * in3->size[0] + i * stride_1_0] <=
                    in7));
  }

  // End of MATLAB Function: '<S9>/LiDAR Clustering'
  // End of Outputs for SubSystem: '<Root>/Create Hokuyo Tracks'
}

static void data_preprocessing_fe_binary_expand_op_d(boolean_T in1_data[], int32_T
  *in1_size, const boolean_T in2_data[], const int32_T *in2_size, const real_T
  in3_data[], const int32_T in3_size[2])
{
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;

  // Outputs for Enabled SubSystem: '<Root>/Create Hokuyo Tracks' incorporates:
  //   EnablePort: '<S1>/Enable'

  // MATLAB Function: '<S9>/LiDAR Clustering'
  loop_ub = in3_size[0] == 1 ? *in2_size : in3_size[0];
  *in1_size = loop_ub;
  stride_0_0 = (*in2_size != 1);
  stride_1_0 = (in3_size[0] != 1);
  for (int32_T i = 0; i < loop_ub; i++) {
    in1_data[i] = (in2_data[i * stride_0_0] && (in3_data[i * stride_1_0 +
      in3_size[0] * 3] == 1.0));
  }

  // End of MATLAB Function: '<S9>/LiDAR Clustering'
  // End of Outputs for SubSystem: '<Root>/Create Hokuyo Tracks'
}

static void data_preprocessing_fe_binary_expand_op(boolean_T in1_data[], int32_T
  *in1_size, const real_T in2_data[], const int32_T in2_size[2])
{
  // Outputs for Enabled SubSystem: '<Root>/Create Hokuyo Tracks' incorporates:
  //   EnablePort: '<S1>/Enable'

  // MATLAB Function: '<S9>/LiDAR Clustering'
  data_preprocessing_fe_B.loop_ub_bs = in2_size[0] == 1 ? *in1_size : in2_size[0];
  data_preprocessing_fe_B.stride_0_0 = (*in1_size != 1);
  data_preprocessing_fe_B.stride_1_0 = (in2_size[0] != 1);
  for (data_preprocessing_fe_B.i1 = 0; data_preprocessing_fe_B.i1 < data_preprocessing_fe_B.loop_ub_bs;
       data_preprocessing_fe_B.i1++) {
    data_preprocessing_fe_B.in1_data[data_preprocessing_fe_B.i1] = (in1_data[data_preprocessing_fe_B.i1 *
      data_preprocessing_fe_B.stride_0_0] && (in2_data[data_preprocessing_fe_B.i1 *
      data_preprocessing_fe_B.stride_1_0 + in2_size[0] * 3] == 0.0));
  }

  *in1_size = data_preprocessing_fe_B.loop_ub_bs;
  if (data_preprocessing_fe_B.loop_ub_bs - 1 >= 0) {
    memcpy(&in1_data[0], &data_preprocessing_fe_B.in1_data[0], static_cast<uint32_T>
           (data_preprocessing_fe_B.loop_ub_bs) * sizeof(boolean_T));
  }

  // End of MATLAB Function: '<S9>/LiDAR Clustering'
  // End of Outputs for SubSystem: '<Root>/Create Hokuyo Tracks'
}

// Function for MATLAB Function: '<S9>/LiDAR Clustering'
static int32_T hokuyoT_combineVectorElements_e(const boolean_T x_data[], const
  int32_T *x_size)
{
  int32_T vlen;
  int32_T y;
  vlen = *x_size;
  if (*x_size == 0) {
    y = 0;
  } else {
    y = x_data[0];
    for (int32_T k = 2; k <= vlen; k++) {
      y += x_data[k - 1];
    }
  }

  return y;
}

// Function for MATLAB Function: '<S9>/LiDAR Clustering'
static void data_preprocessing_fe_eml_find(const boolean_T x_data[], const int32_T
  *x_size, int32_T i_data[], int32_T *i_size)
{
  int32_T idx;
  int32_T ii;
  boolean_T exitg1;
  idx = 0;
  *i_size = *x_size;
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= *x_size - 1)) {
    if (x_data[ii]) {
      idx++;
      i_data[idx - 1] = ii + 1;
      if (idx >= *x_size) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }

  if (*x_size == 1) {
    if (idx == 0) {
      *i_size = 0;
    }
  } else if (idx < 1) {
    *i_size = 0;
  } else {
    *i_size = idx;
  }
}

static void data_preprocessing_fe_emxFree_real_T(emxArray_real_T_data_preprocessing_fe_T
  **pEmxArray)
{
  if (*pEmxArray != static_cast<emxArray_real_T_data_preprocessing_fe_T *>(NULL)) {
    if (((*pEmxArray)->data != static_cast<real_T *>(NULL)) && (*pEmxArray)
        ->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = static_cast<emxArray_real_T_data_preprocessing_fe_T *>(NULL);
  }
}

// Function for MATLAB Function: '<S13>/2D Cluster Processing'
static real_T data_preprocessing_fe_maximum(const real_T x_data[], const int32_T x_size[2])
{
  real_T ex;
  int32_T last;
  last = x_size[1];
  if (static_cast<uint16_T>(x_size[1] - 1) + 1 <= 2) {
    if (static_cast<uint16_T>(x_size[1] - 1) + 1 == 1) {
      ex = x_data[0];
    } else {
      real_T x;
      ex = x_data[x_size[1] - 1];
      x = x_data[0];
      if (!(x < ex)) {
        if (rtIsNaN(x_data[0])) {
          if (rtIsNaN(ex)) {
            ex = x;
          }
        } else {
          ex = x;
        }
      }
    }
  } else {
    int32_T idx;
    int32_T k;
    ex = x_data[0];
    if (!rtIsNaN(ex)) {
      idx = 1;
    } else {
      boolean_T exitg1;
      idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!rtIsNaN(x_data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (idx == 0) {
    } else {
      ex = x_data[idx - 1];
      for (k = idx + 1; k <= last; k++) {
        real_T x;
        x = x_data[k - 1];
        if (ex < x) {
          ex = x;
        }
      }
    }
  }

  return ex;
}

// Function for MATLAB Function: '<S13>/2D Cluster Processing'
static real_T data_preprocessing_fe_minimum(const real_T x_data[], const int32_T x_size[2])
{
  real_T ex;
  int32_T last;
  last = x_size[1];
  if (static_cast<uint16_T>(x_size[1] - 1) + 1 <= 2) {
    if (static_cast<uint16_T>(x_size[1] - 1) + 1 == 1) {
      ex = x_data[0];
    } else {
      real_T x;
      ex = x_data[x_size[1] - 1];
      x = x_data[0];
      if (!(x > ex)) {
        if (rtIsNaN(x_data[0])) {
          if (rtIsNaN(ex)) {
            ex = x;
          }
        } else {
          ex = x;
        }
      }
    }
  } else {
    int32_T idx;
    int32_T k;
    ex = x_data[0];
    if (!rtIsNaN(ex)) {
      idx = 1;
    } else {
      boolean_T exitg1;
      idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!rtIsNaN(x_data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (idx == 0) {
    } else {
      ex = x_data[idx - 1];
      for (k = idx + 1; k <= last; k++) {
        real_T x;
        x = x_data[k - 1];
        if (ex > x) {
          ex = x;
        }
      }
    }
  }

  return ex;
}

static void data_preprocessing_fe_emxInit_uint32_T(emxArray_uint32_T_hokuyoTrack_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_uint32_T_hokuyoTrack_T *emxArray;
  *pEmxArray = static_cast<emxArray_uint32_T_hokuyoTrack_T *>(malloc(sizeof
    (emxArray_uint32_T_hokuyoTrack_T)));
  emxArray = *pEmxArray;
  emxArray->data = static_cast<uint32_T *>(NULL);
  emxArray->numDimensions = numDimensions;
  emxArray->size = static_cast<int32_T *>(malloc(sizeof(int32_T)
    * static_cast<uint32_T>(numDimensions)));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (int32_T i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void data_preprocessing_fe_emxInit_int32_T(emxArray_int32_T_data_preprocessing_fe_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_int32_T_data_preprocessing_fe_T *emxArray;
  *pEmxArray = static_cast<emxArray_int32_T_data_preprocessing_fe_T *>(malloc(sizeof
    (emxArray_int32_T_data_preprocessing_fe_T)));
  emxArray = *pEmxArray;
  emxArray->data = static_cast<int32_T *>(NULL);
  emxArray->numDimensions = numDimensions;
  emxArray->size = static_cast<int32_T *>(malloc(sizeof(int32_T)
    * static_cast<uint32_T>(numDimensions)));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (data_preprocessing_fe_B.i_jz = 0; data_preprocessing_fe_B.i_jz < numDimensions;
       data_preprocessing_fe_B.i_jz++) {
    emxArray->size[data_preprocessing_fe_B.i_jz] = 0;
  }
}

// Function for MATLAB Function: '<S13>/2D Measurement to Track Assignment'
static void data_preprocessing_fe_bsxfun(const emxArray_real_T_data_preprocessing_fe_T *a, const
  emxArray_real_T_data_preprocessing_fe_T *b, emxArray_real_T_data_preprocessing_fe_T *c)
{
  if (b->size[0] == 1) {
    data_preprocessing_fe_B.csz_idx_0 = a->size[0];
  } else if (a->size[0] == 1) {
    data_preprocessing_fe_B.csz_idx_0 = b->size[0];
  } else if (a->size[0] == b->size[0]) {
    data_preprocessing_fe_B.csz_idx_0 = a->size[0];
  } else if (b->size[0] <= a->size[0]) {
    data_preprocessing_fe_B.csz_idx_0 = b->size[0];
  } else {
    data_preprocessing_fe_B.csz_idx_0 = a->size[0];
  }

  data_preprocessing_fe_B.k_e = c->size[0] * c->size[1];
  c->size[0] = data_preprocessing_fe_B.csz_idx_0;
  c->size[1] = a->size[1];
  hokuyo_emxEnsureCapacity_real_T(c, data_preprocessing_fe_B.k_e);
  if ((data_preprocessing_fe_B.csz_idx_0 != 0) && (a->size[1] != 0)) {
    data_preprocessing_fe_B.csz_idx_0 = (a->size[1] != 1);
    data_preprocessing_fe_B.d = a->size[1] - 1;
    data_preprocessing_fe_B.b_acoef = (a->size[0] != 1);
    data_preprocessing_fe_B.bcoef = (b->size[0] != 1);
    for (data_preprocessing_fe_B.k_e = 0; data_preprocessing_fe_B.k_e <= data_preprocessing_fe_B.d;
         data_preprocessing_fe_B.k_e++) {
      data_preprocessing_fe_B.varargin_2 = data_preprocessing_fe_B.csz_idx_0 * data_preprocessing_fe_B.k_e;
      data_preprocessing_fe_B.e = c->size[0] - 1;
      for (data_preprocessing_fe_B.b_k = 0; data_preprocessing_fe_B.b_k <= data_preprocessing_fe_B.e;
           data_preprocessing_fe_B.b_k++) {
        c->data[data_preprocessing_fe_B.b_k + c->size[0] * data_preprocessing_fe_B.k_e] = a->
          data[data_preprocessing_fe_B.b_acoef * data_preprocessing_fe_B.b_k + a->size[0] *
          data_preprocessing_fe_B.varargin_2] - b->data[data_preprocessing_fe_B.bcoef *
          data_preprocessing_fe_B.b_k];
      }
    }
  }
}

static void hokuy_emxEnsureCapacity_int32_T(emxArray_int32_T_data_preprocessing_fe_T
  *emxArray, int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  data_preprocessing_fe_B.newNumel_b = 1;
  for (data_preprocessing_fe_B.i_d = 0; data_preprocessing_fe_B.i_d < emxArray->numDimensions;
       data_preprocessing_fe_B.i_d++) {
    data_preprocessing_fe_B.newNumel_b *= emxArray->size[data_preprocessing_fe_B.i_d];
  }

  if (data_preprocessing_fe_B.newNumel_b > emxArray->allocatedSize) {
    data_preprocessing_fe_B.i_d = emxArray->allocatedSize;
    if (data_preprocessing_fe_B.i_d < 16) {
      data_preprocessing_fe_B.i_d = 16;
    }

    while (data_preprocessing_fe_B.i_d < data_preprocessing_fe_B.newNumel_b) {
      if (data_preprocessing_fe_B.i_d > 1073741823) {
        data_preprocessing_fe_B.i_d = MAX_int32_T;
      } else {
        data_preprocessing_fe_B.i_d <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(data_preprocessing_fe_B.i_d), sizeof(int32_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(int32_T) * static_cast<uint32_T>
             (oldNumel));
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = static_cast<int32_T *>(newData);
    emxArray->allocatedSize = data_preprocessing_fe_B.i_d;
    emxArray->canFreeData = true;
  }
}

// Function for MATLAB Function: '<S13>/2D Measurement to Track Assignment'
static void data_preprocessing_fe_eml_find_d(const emxArray_boolean_T_hokuyoTrac_T *x,
  emxArray_int32_T_data_preprocessing_fe_T *i, emxArray_int32_T_data_preprocessing_fe_T *j)
{
  int32_T idx;
  int32_T ii;
  int32_T jj;
  int32_T nx;
  boolean_T exitg1;
  boolean_T guard1;
  nx = x->size[0] * x->size[1];
  if (nx == 0) {
    i->size[0] = 0;
    j->size[0] = 0;
  } else {
    idx = 0;
    ii = i->size[0];
    i->size[0] = nx;
    hokuy_emxEnsureCapacity_int32_T(i, ii);
    ii = j->size[0];
    j->size[0] = nx;
    hokuy_emxEnsureCapacity_int32_T(j, ii);
    ii = 1;
    jj = 1;
    exitg1 = false;
    while ((!exitg1) && (jj <= x->size[1])) {
      guard1 = false;
      if (x->data[((jj - 1) * x->size[0] + ii) - 1]) {
        idx++;
        i->data[idx - 1] = ii;
        j->data[idx - 1] = jj;
        if (idx >= nx) {
          exitg1 = true;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }

      if (guard1) {
        ii++;
        if (ii > x->size[0]) {
          ii = 1;
          jj++;
        }
      }
    }

    if (nx == 1) {
      if (idx == 0) {
        i->size[0] = 0;
        j->size[0] = 0;
      }
    } else if (idx < 1) {
      i->size[0] = 0;
      j->size[0] = 0;
    } else {
      ii = i->size[0];
      i->size[0] = idx;
      hokuy_emxEnsureCapacity_int32_T(i, ii);
      ii = j->size[0];
      j->size[0] = idx;
      hokuy_emxEnsureCapacity_int32_T(j, ii);
    }
  }
}

// Function for MATLAB Function: '<S13>/2D Measurement to Track Assignment'
static void data_preprocessing_fe_any_o(const emxArray_boolean_T_hokuyoTrac_T *x,
  emxArray_boolean_T_hokuyoTrac_T *y)
{
  boolean_T exitg1;
  data_preprocessing_fe_B.i_j = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = x->size[1];
  hok_emxEnsureCapacity_boolean_T(y, data_preprocessing_fe_B.i_j);
  data_preprocessing_fe_B.loop_ub_f = x->size[1];
  data_preprocessing_fe_B.i2 = 0;
  for (data_preprocessing_fe_B.i_j = 0; data_preprocessing_fe_B.i_j < data_preprocessing_fe_B.loop_ub_f;
       data_preprocessing_fe_B.i_j++) {
    y->data[data_preprocessing_fe_B.i_j] = false;
    data_preprocessing_fe_B.a_b = data_preprocessing_fe_B.i2 + x->size[0];
    data_preprocessing_fe_B.ix = data_preprocessing_fe_B.i2;
    data_preprocessing_fe_B.i2 += x->size[0];
    exitg1 = false;
    while ((!exitg1) && (data_preprocessing_fe_B.ix + 1 <= data_preprocessing_fe_B.a_b)) {
      if (x->data[data_preprocessing_fe_B.ix]) {
        y->data[data_preprocessing_fe_B.i_j] = true;
        exitg1 = true;
      } else {
        data_preprocessing_fe_B.ix++;
      }
    }
  }
}

static void data_preprocessing_fe_emxFree_int32_T(emxArray_int32_T_data_preprocessing_fe_T
  **pEmxArray)
{
  if (*pEmxArray != static_cast<emxArray_int32_T_data_preprocessing_fe_T *>(NULL)) {
    if (((*pEmxArray)->data != static_cast<int32_T *>(NULL)) && (*pEmxArray)
        ->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = static_cast<emxArray_int32_T_data_preprocessing_fe_T *>(NULL);
  }
}

// Function for MATLAB Function: '<S13>/2D Measurement to Track Assignment'
static void data_preprocessing_fe_findNonCoveredZero(const
  emxArray_boolean_T_hokuyoTrac_T *Z, real_T *zi, real_T *zj)
{
  emxArray_int32_T_data_preprocessing_fe_T *i;
  emxArray_int32_T_data_preprocessing_fe_T *j;
  boolean_T exitg1;
  boolean_T guard1;
  data_preprocessing_fe_B.nx = Z->size[0] * Z->size[1];
  data_preprocessing_fe_B.k = (data_preprocessing_fe_B.nx >= 1);
  data_preprocessing_fe_emxInit_int32_T(&i, 1);
  data_preprocessing_fe_emxInit_int32_T(&j, 1);
  if (data_preprocessing_fe_B.nx == 0) {
    i->size[0] = 0;
    j->size[0] = 0;
  } else {
    data_preprocessing_fe_B.nx = 0;
    data_preprocessing_fe_B.b_ii = i->size[0];
    i->size[0] = data_preprocessing_fe_B.k;
    hokuy_emxEnsureCapacity_int32_T(i, data_preprocessing_fe_B.b_ii);
    data_preprocessing_fe_B.b_ii = j->size[0];
    j->size[0] = data_preprocessing_fe_B.k;
    hokuy_emxEnsureCapacity_int32_T(j, data_preprocessing_fe_B.b_ii);
    data_preprocessing_fe_B.b_ii = 1;
    data_preprocessing_fe_B.b_jj = 1;
    exitg1 = false;
    while ((!exitg1) && (data_preprocessing_fe_B.b_jj <= Z->size[1])) {
      guard1 = false;
      if (Z->data[((data_preprocessing_fe_B.b_jj - 1) * Z->size[0] + data_preprocessing_fe_B.b_ii)
          - 1]) {
        data_preprocessing_fe_B.nx++;
        i->data[data_preprocessing_fe_B.nx - 1] = data_preprocessing_fe_B.b_ii;
        j->data[data_preprocessing_fe_B.nx - 1] = data_preprocessing_fe_B.b_jj;
        if (data_preprocessing_fe_B.nx >= data_preprocessing_fe_B.k) {
          exitg1 = true;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }

      if (guard1) {
        data_preprocessing_fe_B.b_ii++;
        if (data_preprocessing_fe_B.b_ii > Z->size[0]) {
          data_preprocessing_fe_B.b_ii = 1;
          data_preprocessing_fe_B.b_jj++;
        }
      }
    }

    if (data_preprocessing_fe_B.k == 1) {
      if (data_preprocessing_fe_B.nx == 0) {
        i->size[0] = 0;
        j->size[0] = 0;
      }
    } else {
      data_preprocessing_fe_B.k = (data_preprocessing_fe_B.nx >= 1);
      data_preprocessing_fe_B.b_ii = i->size[0];
      i->size[0] = data_preprocessing_fe_B.k;
      hokuy_emxEnsureCapacity_int32_T(i, data_preprocessing_fe_B.b_ii);
      data_preprocessing_fe_B.b_ii = j->size[0];
      j->size[0] = data_preprocessing_fe_B.k;
      hokuy_emxEnsureCapacity_int32_T(j, data_preprocessing_fe_B.b_ii);
    }
  }

  if (i->size[0] == 0) {
    *zi = -1.0;
    *zj = -1.0;
  } else {
    *zi = i->data[0];
    *zj = j->data[0];
  }

  data_preprocessing_fe_emxFree_int32_T(&j);
  data_preprocessing_fe_emxFree_int32_T(&i);
}

// Function for MATLAB Function: '<S13>/2D Measurement to Track Assignment'
static void hokuyoTrack_hungarianAssignment(emxArray_real_T_data_preprocessing_fe_T *cost,
  emxArray_boolean_T_hokuyoTrac_T *assignment)
{
  emxArray_boolean_T_hokuyoTrac_T *Z;
  emxArray_boolean_T_hokuyoTrac_T *colCover;
  emxArray_boolean_T_hokuyoTrac_T *lzi;
  emxArray_boolean_T_hokuyoTrac_T *primes;
  emxArray_boolean_T_hokuyoTrac_T *rowCover;
  emxArray_boolean_T_hokuyoTrac_T *starredRow;
  emxArray_int32_T_data_preprocessing_fe_T *b_rowInd_tmp;
  emxArray_int32_T_data_preprocessing_fe_T *b_uncovered_tmp;
  emxArray_int32_T_data_preprocessing_fe_T *ii;
  emxArray_int32_T_data_preprocessing_fe_T *jj;
  emxArray_int32_T_data_preprocessing_fe_T *r;
  emxArray_int32_T_data_preprocessing_fe_T *rowInd_tmp;
  emxArray_int32_T_data_preprocessing_fe_T *s;
  emxArray_int32_T_data_preprocessing_fe_T *t;
  emxArray_int32_T_data_preprocessing_fe_T *tmp;
  emxArray_int32_T_data_preprocessing_fe_T *tmp_0;
  emxArray_int32_T_data_preprocessing_fe_T *tmp_1;
  emxArray_int32_T_data_preprocessing_fe_T *tmp_2;
  emxArray_int32_T_data_preprocessing_fe_T *u;
  emxArray_int32_T_data_preprocessing_fe_T *uncovered_tmp;
  emxArray_int32_T_data_preprocessing_fe_T *v;
  emxArray_real_T_data_preprocessing_fe_T *b_cost;
  emxArray_real_T_data_preprocessing_fe_T *cost_0;
  emxArray_real_T_data_preprocessing_fe_T *cost_1;
  emxArray_real_T_data_preprocessing_fe_T *minval;
  int32_T exitg1;
  int32_T exitg3;
  int32_T exitg5;
  boolean_T exitg2;
  boolean_T exitg4;
  data_preprocessing_fe_B.m = cost->size[0] - 1;
  data_preprocessing_fe_B.n = cost->size[1];
  data_preprocessing_fe_emxInit_real_T(&minval, 1);
  data_preprocessing_fe_B.v_idx_1 = minval->size[0];
  minval->size[0] = cost->size[0];
  hokuyo_emxEnsureCapacity_real_T(minval, data_preprocessing_fe_B.v_idx_1);
  if (cost->size[0] >= 1) {
    memcpy(&minval->data[0], &cost->data[0], static_cast<uint32_T>
           (data_preprocessing_fe_B.m + 1) * sizeof(real_T));
    for (data_preprocessing_fe_B.j = 2; data_preprocessing_fe_B.j <= data_preprocessing_fe_B.n;
         data_preprocessing_fe_B.j++) {
      for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <= data_preprocessing_fe_B.m;
           data_preprocessing_fe_B.i_ln++) {
        data_preprocessing_fe_B.zi = cost->data[(data_preprocessing_fe_B.j - 1) * cost->size[0] +
          data_preprocessing_fe_B.i_ln];
        if (rtIsNaN(data_preprocessing_fe_B.zi)) {
          data_preprocessing_fe_B.shouldCreateNewZero = false;
        } else {
          data_preprocessing_fe_B.zj = minval->data[data_preprocessing_fe_B.i_ln];
          data_preprocessing_fe_B.shouldCreateNewZero = (rtIsNaN(data_preprocessing_fe_B.zj) ||
            (data_preprocessing_fe_B.zj > data_preprocessing_fe_B.zi));
        }

        if (data_preprocessing_fe_B.shouldCreateNewZero) {
          minval->data[data_preprocessing_fe_B.i_ln] = data_preprocessing_fe_B.zi;
        }
      }
    }
  }

  data_preprocessing_fe_emxInit_real_T(&cost_1, 2);
  data_preprocessing_fe_B.v_idx_1 = cost_1->size[0] * cost_1->size[1];
  cost_1->size[0] = cost->size[0];
  cost_1->size[1] = cost->size[1];
  hokuyo_emxEnsureCapacity_real_T(cost_1, data_preprocessing_fe_B.v_idx_1);
  data_preprocessing_fe_B.loop_ub_h = cost->size[0] * cost->size[1] - 1;
  if (data_preprocessing_fe_B.loop_ub_h >= 0) {
    memcpy(&cost_1->data[0], &cost->data[0], static_cast<uint32_T>
           (data_preprocessing_fe_B.loop_ub_h + 1) * sizeof(real_T));
  }

  data_preprocessing_fe_bsxfun(cost_1, minval, cost);
  data_preprocessing_fe_emxFree_real_T(&cost_1);
  data_preprocessing_fe_emxInit_boolean_T(&rowCover, 2);
  data_preprocessing_fe_B.v_idx_1 = rowCover->size[0] * rowCover->size[1];
  rowCover->size[0] = 1;
  rowCover->size[1] = cost->size[0];
  hok_emxEnsureCapacity_boolean_T(rowCover, data_preprocessing_fe_B.v_idx_1);
  data_preprocessing_fe_B.loop_ub_h = cost->size[0];
  if (data_preprocessing_fe_B.loop_ub_h - 1 >= 0) {
    memset(&rowCover->data[0], 0, static_cast<uint32_T>(data_preprocessing_fe_B.loop_ub_h)
           * sizeof(boolean_T));
  }

  data_preprocessing_fe_emxInit_boolean_T(&colCover, 2);
  data_preprocessing_fe_B.v_idx_1 = colCover->size[0] * colCover->size[1];
  colCover->size[0] = 1;
  colCover->size[1] = cost->size[1];
  hok_emxEnsureCapacity_boolean_T(colCover, data_preprocessing_fe_B.v_idx_1);
  data_preprocessing_fe_B.loop_ub_h = cost->size[1];
  if (data_preprocessing_fe_B.loop_ub_h - 1 >= 0) {
    memset(&colCover->data[0], 0, static_cast<uint32_T>(data_preprocessing_fe_B.loop_ub_h)
           * sizeof(boolean_T));
  }

  data_preprocessing_fe_B.v_idx_1 = assignment->size[0] * assignment->size[1];
  assignment->size[0] = cost->size[0];
  assignment->size[1] = cost->size[1];
  hok_emxEnsureCapacity_boolean_T(assignment, data_preprocessing_fe_B.v_idx_1);
  data_preprocessing_fe_B.m = cost->size[0] * cost->size[1];
  data_preprocessing_fe_emxInit_boolean_T(&lzi, 2);
  data_preprocessing_fe_B.v_idx_1 = lzi->size[0] * lzi->size[1];
  lzi->size[0] = cost->size[0];
  lzi->size[1] = cost->size[1];
  hok_emxEnsureCapacity_boolean_T(lzi, data_preprocessing_fe_B.v_idx_1);
  for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln < data_preprocessing_fe_B.m;
       data_preprocessing_fe_B.i_ln++) {
    assignment->data[data_preprocessing_fe_B.i_ln] = false;
    lzi->data[data_preprocessing_fe_B.i_ln] = (cost->data[data_preprocessing_fe_B.i_ln] == 0.0);
  }

  data_preprocessing_fe_emxInit_int32_T(&ii, 1);
  data_preprocessing_fe_emxInit_int32_T(&jj, 1);
  data_preprocessing_fe_eml_find_d(lzi, ii, jj);
  data_preprocessing_fe_B.v_idx_1 = minval->size[0];
  minval->size[0] = ii->size[0];
  hokuyo_emxEnsureCapacity_real_T(minval, data_preprocessing_fe_B.v_idx_1);
  data_preprocessing_fe_B.loop_ub_h = ii->size[0];
  for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln < data_preprocessing_fe_B.loop_ub_h;
       data_preprocessing_fe_B.i_ln++) {
    minval->data[data_preprocessing_fe_B.i_ln] = ii->data[data_preprocessing_fe_B.i_ln];
  }

  data_preprocessing_fe_B.n = minval->size[0];
  for (data_preprocessing_fe_B.j = 0; data_preprocessing_fe_B.j < data_preprocessing_fe_B.n;
       data_preprocessing_fe_B.j++) {
    data_preprocessing_fe_B.i_ln = static_cast<int32_T>(minval->data[data_preprocessing_fe_B.j]);
    data_preprocessing_fe_B.v_idx_1 = data_preprocessing_fe_B.i_ln - 1;
    if (!rowCover->data[data_preprocessing_fe_B.v_idx_1]) {
      data_preprocessing_fe_B.nRows = jj->data[data_preprocessing_fe_B.j];
      data_preprocessing_fe_B.end = data_preprocessing_fe_B.nRows - 1;
      if (!colCover->data[data_preprocessing_fe_B.end]) {
        assignment->data[(data_preprocessing_fe_B.i_ln + assignment->size[0] *
                          (data_preprocessing_fe_B.nRows - 1)) - 1] = true;
        rowCover->data[data_preprocessing_fe_B.v_idx_1] = true;
        colCover->data[data_preprocessing_fe_B.end] = true;
      }
    }
  }

  data_preprocessing_fe_emxFree_real_T(&minval);
  data_preprocessing_fe_any_o(assignment, colCover);
  data_preprocessing_fe_emxInit_boolean_T(&primes, 2);
  data_preprocessing_fe_emxInit_boolean_T(&Z, 2);
  data_preprocessing_fe_emxInit_boolean_T(&starredRow, 2);
  data_preprocessing_fe_emxInit_real_T(&b_cost, 2);
  data_preprocessing_fe_emxInit_int32_T(&rowInd_tmp, 2);
  data_preprocessing_fe_emxInit_int32_T(&r, 2);
  data_preprocessing_fe_emxInit_int32_T(&s, 2);
  data_preprocessing_fe_emxInit_int32_T(&t, 2);
  data_preprocessing_fe_emxInit_int32_T(&u, 2);
  data_preprocessing_fe_emxInit_int32_T(&uncovered_tmp, 2);
  data_preprocessing_fe_emxInit_int32_T(&b_uncovered_tmp, 2);
  data_preprocessing_fe_emxInit_int32_T(&v, 1);
  data_preprocessing_fe_emxInit_int32_T(&b_rowInd_tmp, 2);
  data_preprocessing_fe_emxInit_int32_T(&tmp, 2);
  data_preprocessing_fe_emxInit_int32_T(&tmp_0, 2);
  data_preprocessing_fe_emxInit_int32_T(&tmp_1, 2);
  data_preprocessing_fe_emxInit_int32_T(&tmp_2, 1);
  data_preprocessing_fe_emxInit_real_T(&cost_0, 2);
  do {
    exitg1 = 0;
    data_preprocessing_fe_B.shouldCreateNewZero = true;
    data_preprocessing_fe_B.n = 1;
    exitg2 = false;
    while ((!exitg2) && (data_preprocessing_fe_B.n <= colCover->size[1])) {
      if (!colCover->data[data_preprocessing_fe_B.n - 1]) {
        data_preprocessing_fe_B.shouldCreateNewZero = false;
        exitg2 = true;
      } else {
        data_preprocessing_fe_B.n++;
      }
    }

    if (!data_preprocessing_fe_B.shouldCreateNewZero) {
      data_preprocessing_fe_B.v_idx_1 = rowCover->size[0] * rowCover->size[1];
      rowCover->size[0] = 1;
      rowCover->size[1] = cost->size[0];
      hok_emxEnsureCapacity_boolean_T(rowCover, data_preprocessing_fe_B.v_idx_1);
      data_preprocessing_fe_B.loop_ub_h = cost->size[0];
      if (data_preprocessing_fe_B.loop_ub_h - 1 >= 0) {
        memset(&rowCover->data[0], 0, static_cast<uint32_T>
               (data_preprocessing_fe_B.loop_ub_h) * sizeof(boolean_T));
      }

      data_preprocessing_fe_B.v_idx_1 = primes->size[0] * primes->size[1];
      primes->size[0] = assignment->size[0];
      primes->size[1] = assignment->size[1];
      hok_emxEnsureCapacity_boolean_T(primes, data_preprocessing_fe_B.v_idx_1);
      data_preprocessing_fe_B.v_idx_1 = Z->size[0] * Z->size[1];
      Z->size[0] = cost->size[0];
      Z->size[1] = cost->size[1];
      hok_emxEnsureCapacity_boolean_T(Z, data_preprocessing_fe_B.v_idx_1);
      for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln < data_preprocessing_fe_B.m;
           data_preprocessing_fe_B.i_ln++) {
        primes->data[data_preprocessing_fe_B.i_ln] = false;
        Z->data[data_preprocessing_fe_B.i_ln] = !(cost->data[data_preprocessing_fe_B.i_ln] != 0.0);
      }

      data_preprocessing_fe_B.n = colCover->size[1] - 1;
      data_preprocessing_fe_B.trueCount = 0;
      for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <= data_preprocessing_fe_B.n;
           data_preprocessing_fe_B.i_ln++) {
        if (colCover->data[data_preprocessing_fe_B.i_ln]) {
          data_preprocessing_fe_B.trueCount++;
        }
      }

      data_preprocessing_fe_B.v_idx_1 = tmp->size[0] * tmp->size[1];
      tmp->size[0] = 1;
      tmp->size[1] = data_preprocessing_fe_B.trueCount;
      hokuy_emxEnsureCapacity_int32_T(tmp, data_preprocessing_fe_B.v_idx_1);
      data_preprocessing_fe_B.trueCount = 0;
      for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <= data_preprocessing_fe_B.n;
           data_preprocessing_fe_B.i_ln++) {
        if (colCover->data[data_preprocessing_fe_B.i_ln]) {
          tmp->data[data_preprocessing_fe_B.trueCount] = data_preprocessing_fe_B.i_ln;
          data_preprocessing_fe_B.trueCount++;
        }
      }

      data_preprocessing_fe_B.j = Z->size[0];
      data_preprocessing_fe_B.nRows = tmp->size[1];
      for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln < data_preprocessing_fe_B.nRows;
           data_preprocessing_fe_B.i_ln++) {
        for (data_preprocessing_fe_B.end = 0; data_preprocessing_fe_B.end < data_preprocessing_fe_B.j;
             data_preprocessing_fe_B.end++) {
          Z->data[data_preprocessing_fe_B.end + Z->size[0] * tmp->
            data[data_preprocessing_fe_B.i_ln]] = false;
        }
      }

      do {
        exitg3 = 0;
        data_preprocessing_fe_B.shouldCreateNewZero = true;
        data_preprocessing_fe_findNonCoveredZero(Z, &data_preprocessing_fe_B.zi,
          &data_preprocessing_fe_B.zj);
        exitg2 = false;
        while ((!exitg2) && (data_preprocessing_fe_B.zi > 0.0)) {
          primes->data[(static_cast<int32_T>(data_preprocessing_fe_B.zi) + primes->size[0]
                        * (static_cast<int32_T>(data_preprocessing_fe_B.zj) - 1)) - 1] =
            true;
          data_preprocessing_fe_B.v_idx_1 = starredRow->size[0] * starredRow->size[1];
          starredRow->size[0] = 1;
          starredRow->size[1] = assignment->size[1];
          hok_emxEnsureCapacity_boolean_T(starredRow, data_preprocessing_fe_B.v_idx_1);
          data_preprocessing_fe_B.loop_ub_h = assignment->size[1];
          for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <
               data_preprocessing_fe_B.loop_ub_h; data_preprocessing_fe_B.i_ln++) {
            starredRow->data[data_preprocessing_fe_B.i_ln] = assignment->data
              [(assignment->size[0] * data_preprocessing_fe_B.i_ln + static_cast<int32_T>
                (data_preprocessing_fe_B.zi)) - 1];
          }

          data_preprocessing_fe_B.b_y = false;
          data_preprocessing_fe_B.j = 1;
          exitg4 = false;
          while ((!exitg4) && (data_preprocessing_fe_B.j <= assignment->size[1])) {
            if (starredRow->data[data_preprocessing_fe_B.j - 1]) {
              data_preprocessing_fe_B.b_y = true;
              exitg4 = true;
            } else {
              data_preprocessing_fe_B.j++;
            }
          }

          if (data_preprocessing_fe_B.b_y) {
            rowCover->data[static_cast<int32_T>(data_preprocessing_fe_B.zi) - 1] = true;
            data_preprocessing_fe_B.end = starredRow->size[1] - 1;
            data_preprocessing_fe_B.trueCount = 0;
            for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <=
                 data_preprocessing_fe_B.end; data_preprocessing_fe_B.i_ln++) {
              if (starredRow->data[data_preprocessing_fe_B.i_ln]) {
                data_preprocessing_fe_B.trueCount++;
              }
            }

            data_preprocessing_fe_B.v_idx_1 = t->size[0] * t->size[1];
            t->size[0] = 1;
            t->size[1] = data_preprocessing_fe_B.trueCount;
            hokuy_emxEnsureCapacity_int32_T(t, data_preprocessing_fe_B.v_idx_1);
            data_preprocessing_fe_B.trueCount = 0;
            for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <=
                 data_preprocessing_fe_B.end; data_preprocessing_fe_B.i_ln++) {
              if (starredRow->data[data_preprocessing_fe_B.i_ln]) {
                t->data[data_preprocessing_fe_B.trueCount] = data_preprocessing_fe_B.i_ln;
                data_preprocessing_fe_B.trueCount++;
              }
            }

            data_preprocessing_fe_B.loop_ub_h = t->size[1];
            for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <
                 data_preprocessing_fe_B.loop_ub_h; data_preprocessing_fe_B.i_ln++) {
              colCover->data[t->data[data_preprocessing_fe_B.i_ln]] = false;
            }

            data_preprocessing_fe_B.unnamed_idx_1 = Z->size[1];
            for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <
                 data_preprocessing_fe_B.unnamed_idx_1; data_preprocessing_fe_B.i_ln++) {
              Z->data[(static_cast<int32_T>(data_preprocessing_fe_B.zi) + Z->size[0] *
                       data_preprocessing_fe_B.i_ln) - 1] = false;
            }

            data_preprocessing_fe_B.end = rowCover->size[1] - 1;
            data_preprocessing_fe_B.trueCount = 0;
            for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <=
                 data_preprocessing_fe_B.end; data_preprocessing_fe_B.i_ln++) {
              if (!rowCover->data[data_preprocessing_fe_B.i_ln]) {
                data_preprocessing_fe_B.trueCount++;
              }
            }

            data_preprocessing_fe_B.v_idx_1 = u->size[0] * u->size[1];
            u->size[0] = 1;
            u->size[1] = data_preprocessing_fe_B.trueCount;
            hokuy_emxEnsureCapacity_int32_T(u, data_preprocessing_fe_B.v_idx_1);
            data_preprocessing_fe_B.trueCount = 0;
            for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <=
                 data_preprocessing_fe_B.end; data_preprocessing_fe_B.i_ln++) {
              if (!rowCover->data[data_preprocessing_fe_B.i_ln]) {
                u->data[data_preprocessing_fe_B.trueCount] = data_preprocessing_fe_B.i_ln;
                data_preprocessing_fe_B.trueCount++;
              }
            }

            data_preprocessing_fe_B.v_idx_1 = ii->size[0];
            ii->size[0] = u->size[1];
            hokuy_emxEnsureCapacity_int32_T(ii, data_preprocessing_fe_B.v_idx_1);
            data_preprocessing_fe_B.loop_ub_h = u->size[1];
            if (data_preprocessing_fe_B.loop_ub_h - 1 >= 0) {
              memcpy(&ii->data[0], &u->data[0], static_cast<uint32_T>
                     (data_preprocessing_fe_B.loop_ub_h) * sizeof(int32_T));
            }

            data_preprocessing_fe_B.v_idx_1 = jj->size[0];
            jj->size[0] = t->size[1];
            hokuy_emxEnsureCapacity_int32_T(jj, data_preprocessing_fe_B.v_idx_1);
            data_preprocessing_fe_B.loop_ub_h = t->size[1];
            data_preprocessing_fe_B.v_idx_1 = lzi->size[0] * lzi->size[1];
            lzi->size[0] = u->size[1];
            lzi->size[1] = t->size[1];
            hok_emxEnsureCapacity_boolean_T(lzi, data_preprocessing_fe_B.v_idx_1);
            for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <
                 data_preprocessing_fe_B.loop_ub_h; data_preprocessing_fe_B.i_ln++) {
              jj->data[data_preprocessing_fe_B.i_ln] = t->data[data_preprocessing_fe_B.i_ln];
              data_preprocessing_fe_B.trueCount = u->size[1];
              for (data_preprocessing_fe_B.end = 0; data_preprocessing_fe_B.end <
                   data_preprocessing_fe_B.trueCount; data_preprocessing_fe_B.end++) {
                lzi->data[data_preprocessing_fe_B.end + lzi->size[0] *
                  data_preprocessing_fe_B.i_ln] = !(cost->data[cost->size[0] * t->
                  data[data_preprocessing_fe_B.i_ln] + u->data[data_preprocessing_fe_B.end]] !=
                  0.0);
              }
            }

            data_preprocessing_fe_B.j = ii->size[0];
            data_preprocessing_fe_B.loop_ub_h = jj->size[0];
            for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <
                 data_preprocessing_fe_B.loop_ub_h; data_preprocessing_fe_B.i_ln++) {
              for (data_preprocessing_fe_B.end = 0; data_preprocessing_fe_B.end < data_preprocessing_fe_B.j;
                   data_preprocessing_fe_B.end++) {
                Z->data[ii->data[data_preprocessing_fe_B.end] + Z->size[0] * jj->
                  data[data_preprocessing_fe_B.i_ln]] = lzi->data[data_preprocessing_fe_B.j *
                  data_preprocessing_fe_B.i_ln + data_preprocessing_fe_B.end];
              }
            }

            data_preprocessing_fe_findNonCoveredZero(Z, &data_preprocessing_fe_B.zi,
              &data_preprocessing_fe_B.zj);
          } else {
            data_preprocessing_fe_B.shouldCreateNewZero = false;
            exitg2 = true;
          }
        }

        if (data_preprocessing_fe_B.shouldCreateNewZero) {
          data_preprocessing_fe_B.v_idx_1 = b_cost->size[0] * b_cost->size[1];
          b_cost->size[0] = cost->size[0];
          b_cost->size[1] = cost->size[1];
          hokuyo_emxEnsureCapacity_real_T(b_cost, data_preprocessing_fe_B.v_idx_1);
          data_preprocessing_fe_B.v_idx_1 = Z->size[0] * Z->size[1];
          Z->size[0] = cost->size[0];
          Z->size[1] = cost->size[1];
          hok_emxEnsureCapacity_boolean_T(Z, data_preprocessing_fe_B.v_idx_1);
          for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln < data_preprocessing_fe_B.m;
               data_preprocessing_fe_B.i_ln++) {
            b_cost->data[data_preprocessing_fe_B.i_ln] = cost->data[data_preprocessing_fe_B.i_ln];
            Z->data[data_preprocessing_fe_B.i_ln] = false;
          }

          data_preprocessing_fe_B.j = rowCover->size[1] - 1;
          data_preprocessing_fe_B.trueCount = 0;
          for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <= data_preprocessing_fe_B.j;
               data_preprocessing_fe_B.i_ln++) {
            if (!rowCover->data[data_preprocessing_fe_B.i_ln]) {
              data_preprocessing_fe_B.trueCount++;
            }
          }

          data_preprocessing_fe_B.v_idx_1 = uncovered_tmp->size[0] * uncovered_tmp->size
            [1];
          uncovered_tmp->size[0] = 1;
          uncovered_tmp->size[1] = data_preprocessing_fe_B.trueCount;
          hokuy_emxEnsureCapacity_int32_T(uncovered_tmp, data_preprocessing_fe_B.v_idx_1);
          data_preprocessing_fe_B.trueCount = 0;
          for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <= data_preprocessing_fe_B.j;
               data_preprocessing_fe_B.i_ln++) {
            if (!rowCover->data[data_preprocessing_fe_B.i_ln]) {
              uncovered_tmp->data[data_preprocessing_fe_B.trueCount] =
                data_preprocessing_fe_B.i_ln;
              data_preprocessing_fe_B.trueCount++;
            }
          }

          data_preprocessing_fe_B.trueCount = 0;
          for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <= data_preprocessing_fe_B.n;
               data_preprocessing_fe_B.i_ln++) {
            if (!colCover->data[data_preprocessing_fe_B.i_ln]) {
              data_preprocessing_fe_B.trueCount++;
            }
          }

          data_preprocessing_fe_B.v_idx_1 = b_uncovered_tmp->size[0] *
            b_uncovered_tmp->size[1];
          b_uncovered_tmp->size[0] = 1;
          b_uncovered_tmp->size[1] = data_preprocessing_fe_B.trueCount;
          hokuy_emxEnsureCapacity_int32_T(b_uncovered_tmp,
            data_preprocessing_fe_B.v_idx_1);
          data_preprocessing_fe_B.trueCount = 0;
          for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <= data_preprocessing_fe_B.n;
               data_preprocessing_fe_B.i_ln++) {
            if (!colCover->data[data_preprocessing_fe_B.i_ln]) {
              b_uncovered_tmp->data[data_preprocessing_fe_B.trueCount] =
                data_preprocessing_fe_B.i_ln;
              data_preprocessing_fe_B.trueCount++;
            }
          }

          data_preprocessing_fe_B.i_ln = uncovered_tmp->size[1] * b_uncovered_tmp->size[1];
          if (data_preprocessing_fe_B.i_ln <= 2) {
            if (data_preprocessing_fe_B.i_ln == 1) {
              data_preprocessing_fe_B.end = 0;
              data_preprocessing_fe_B.zj = cost->data[cost->size[0] *
                b_uncovered_tmp->data[data_preprocessing_fe_B.end] + uncovered_tmp->
                data[data_preprocessing_fe_B.end]];
            } else {
              data_preprocessing_fe_B.end = 0;
              data_preprocessing_fe_B.zj = cost->data[cost->size[0] *
                b_uncovered_tmp->data[data_preprocessing_fe_B.end] + uncovered_tmp->
                data[data_preprocessing_fe_B.end]];
              data_preprocessing_fe_B.zi = cost->data[b_uncovered_tmp->data
                [(data_preprocessing_fe_B.i_ln - 1) / uncovered_tmp->size[1]] *
                cost->size[0] + uncovered_tmp->data[(data_preprocessing_fe_B.i_ln - 1) %
                uncovered_tmp->size[1]]];
              if ((data_preprocessing_fe_B.zj > data_preprocessing_fe_B.zi) || (rtIsNaN
                   (data_preprocessing_fe_B.zj) && (!rtIsNaN(data_preprocessing_fe_B.zi)))) {
                data_preprocessing_fe_B.zj = data_preprocessing_fe_B.zi;
              }
            }
          } else {
            data_preprocessing_fe_B.end = 0;
            data_preprocessing_fe_B.zj = cost->data[cost->size[0] * b_uncovered_tmp->
              data[data_preprocessing_fe_B.end] + uncovered_tmp->data[data_preprocessing_fe_B.end]];
            if (!rtIsNaN(data_preprocessing_fe_B.zj)) {
              data_preprocessing_fe_B.nRows = 0;
            } else {
              data_preprocessing_fe_B.nRows = -1;
              data_preprocessing_fe_B.nCols = 1;
              exitg2 = false;
              while ((!exitg2) && (data_preprocessing_fe_B.nCols + 1 <=
                                   data_preprocessing_fe_B.i_ln)) {
                if (!rtIsNaN(cost->data[b_uncovered_tmp->
                             data[data_preprocessing_fe_B.nCols / uncovered_tmp->size[1]]
                             * cost->size[0] + uncovered_tmp->
                             data[data_preprocessing_fe_B.nCols % uncovered_tmp->size[1]]]))
                {
                  data_preprocessing_fe_B.nRows = data_preprocessing_fe_B.nCols;
                  exitg2 = true;
                } else {
                  data_preprocessing_fe_B.nCols++;
                }
              }
            }

            if (data_preprocessing_fe_B.nRows + 1 != 0) {
              data_preprocessing_fe_B.zj = cost->data[b_uncovered_tmp->
                data[data_preprocessing_fe_B.nRows / uncovered_tmp->size[1]] * cost->
                size[0] + uncovered_tmp->data[data_preprocessing_fe_B.nRows %
                uncovered_tmp->size[1]]];
              for (data_preprocessing_fe_B.nCols = data_preprocessing_fe_B.nRows + 2;
                   data_preprocessing_fe_B.nCols <= data_preprocessing_fe_B.i_ln;
                   data_preprocessing_fe_B.nCols++) {
                data_preprocessing_fe_B.zi = cost->data[b_uncovered_tmp->data
                  [(data_preprocessing_fe_B.nCols - 1) / uncovered_tmp->size[1]] *
                  cost->size[0] + uncovered_tmp->data[(data_preprocessing_fe_B.nCols - 1)
                  % uncovered_tmp->size[1]]];
                if (data_preprocessing_fe_B.zj > data_preprocessing_fe_B.zi) {
                  data_preprocessing_fe_B.zj = data_preprocessing_fe_B.zi;
                }
              }
            }
          }

          data_preprocessing_fe_B.trueCount = 0;
          for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <= data_preprocessing_fe_B.j;
               data_preprocessing_fe_B.i_ln++) {
            if (rowCover->data[data_preprocessing_fe_B.i_ln]) {
              data_preprocessing_fe_B.trueCount++;
            }
          }

          data_preprocessing_fe_B.v_idx_1 = r->size[0] * r->size[1];
          r->size[0] = 1;
          r->size[1] = data_preprocessing_fe_B.trueCount;
          hokuy_emxEnsureCapacity_int32_T(r, data_preprocessing_fe_B.v_idx_1);
          data_preprocessing_fe_B.trueCount = 0;
          for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <= data_preprocessing_fe_B.j;
               data_preprocessing_fe_B.i_ln++) {
            if (rowCover->data[data_preprocessing_fe_B.i_ln]) {
              r->data[data_preprocessing_fe_B.trueCount] = data_preprocessing_fe_B.i_ln;
              data_preprocessing_fe_B.trueCount++;
            }
          }

          data_preprocessing_fe_B.v_idx_1 = ii->size[0];
          ii->size[0] = r->size[1];
          hokuy_emxEnsureCapacity_int32_T(ii, data_preprocessing_fe_B.v_idx_1);
          data_preprocessing_fe_B.loop_ub_h = r->size[1];
          if (data_preprocessing_fe_B.loop_ub_h - 1 >= 0) {
            memcpy(&ii->data[0], &r->data[0], static_cast<uint32_T>
                   (data_preprocessing_fe_B.loop_ub_h) * sizeof(int32_T));
          }

          data_preprocessing_fe_B.trueCount = 0;
          for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <= data_preprocessing_fe_B.n;
               data_preprocessing_fe_B.i_ln++) {
            if (colCover->data[data_preprocessing_fe_B.i_ln]) {
              data_preprocessing_fe_B.trueCount++;
            }
          }

          data_preprocessing_fe_B.v_idx_1 = s->size[0] * s->size[1];
          s->size[0] = 1;
          s->size[1] = data_preprocessing_fe_B.trueCount;
          hokuy_emxEnsureCapacity_int32_T(s, data_preprocessing_fe_B.v_idx_1);
          data_preprocessing_fe_B.trueCount = 0;
          for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <= data_preprocessing_fe_B.n;
               data_preprocessing_fe_B.i_ln++) {
            if (colCover->data[data_preprocessing_fe_B.i_ln]) {
              s->data[data_preprocessing_fe_B.trueCount] = data_preprocessing_fe_B.i_ln;
              data_preprocessing_fe_B.trueCount++;
            }
          }

          data_preprocessing_fe_B.v_idx_1 = jj->size[0];
          jj->size[0] = s->size[1];
          hokuy_emxEnsureCapacity_int32_T(jj, data_preprocessing_fe_B.v_idx_1);
          data_preprocessing_fe_B.loop_ub_h = s->size[1];
          data_preprocessing_fe_B.v_idx_1 = cost_0->size[0] * cost_0->size[1];
          cost_0->size[0] = r->size[1];
          cost_0->size[1] = s->size[1];
          hokuyo_emxEnsureCapacity_real_T(cost_0, data_preprocessing_fe_B.v_idx_1);
          for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <
               data_preprocessing_fe_B.loop_ub_h; data_preprocessing_fe_B.i_ln++) {
            jj->data[data_preprocessing_fe_B.i_ln] = s->data[data_preprocessing_fe_B.i_ln];
            data_preprocessing_fe_B.trueCount = r->size[1];
            for (data_preprocessing_fe_B.end = 0; data_preprocessing_fe_B.end <
                 data_preprocessing_fe_B.trueCount; data_preprocessing_fe_B.end++) {
              cost_0->data[data_preprocessing_fe_B.end + cost_0->size[0] *
                data_preprocessing_fe_B.i_ln] = cost->data[cost->size[0] * s->
                data[data_preprocessing_fe_B.i_ln] + r->data[data_preprocessing_fe_B.end]] +
                data_preprocessing_fe_B.zj;
            }
          }

          data_preprocessing_fe_B.j = ii->size[0];
          data_preprocessing_fe_B.loop_ub_h = jj->size[0];
          for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <
               data_preprocessing_fe_B.loop_ub_h; data_preprocessing_fe_B.i_ln++) {
            for (data_preprocessing_fe_B.end = 0; data_preprocessing_fe_B.end < data_preprocessing_fe_B.j;
                 data_preprocessing_fe_B.end++) {
              b_cost->data[ii->data[data_preprocessing_fe_B.end] + b_cost->size[0] *
                jj->data[data_preprocessing_fe_B.i_ln]] = cost_0->data[data_preprocessing_fe_B.j *
                data_preprocessing_fe_B.i_ln + data_preprocessing_fe_B.end];
            }
          }

          data_preprocessing_fe_B.v_idx_1 = ii->size[0];
          ii->size[0] = uncovered_tmp->size[1];
          hokuy_emxEnsureCapacity_int32_T(ii, data_preprocessing_fe_B.v_idx_1);
          data_preprocessing_fe_B.loop_ub_h = uncovered_tmp->size[1];
          if (data_preprocessing_fe_B.loop_ub_h - 1 >= 0) {
            memcpy(&ii->data[0], &uncovered_tmp->data[0], static_cast<uint32_T>
                   (data_preprocessing_fe_B.loop_ub_h) * sizeof(int32_T));
          }

          data_preprocessing_fe_B.v_idx_1 = jj->size[0];
          jj->size[0] = b_uncovered_tmp->size[1];
          hokuy_emxEnsureCapacity_int32_T(jj, data_preprocessing_fe_B.v_idx_1);
          data_preprocessing_fe_B.loop_ub_h = b_uncovered_tmp->size[1];
          data_preprocessing_fe_B.v_idx_1 = cost_0->size[0] * cost_0->size[1];
          cost_0->size[0] = uncovered_tmp->size[1];
          cost_0->size[1] = b_uncovered_tmp->size[1];
          hokuyo_emxEnsureCapacity_real_T(cost_0, data_preprocessing_fe_B.v_idx_1);
          for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <
               data_preprocessing_fe_B.loop_ub_h; data_preprocessing_fe_B.i_ln++) {
            jj->data[data_preprocessing_fe_B.i_ln] = b_uncovered_tmp->
              data[data_preprocessing_fe_B.i_ln];
            data_preprocessing_fe_B.trueCount = uncovered_tmp->size[1];
            for (data_preprocessing_fe_B.end = 0; data_preprocessing_fe_B.end <
                 data_preprocessing_fe_B.trueCount; data_preprocessing_fe_B.end++) {
              cost_0->data[data_preprocessing_fe_B.end + cost_0->size[0] *
                data_preprocessing_fe_B.i_ln] = cost->data[cost->size[0] *
                b_uncovered_tmp->data[data_preprocessing_fe_B.i_ln] + uncovered_tmp->
                data[data_preprocessing_fe_B.end]] - data_preprocessing_fe_B.zj;
            }
          }

          data_preprocessing_fe_B.j = ii->size[0];
          data_preprocessing_fe_B.loop_ub_h = jj->size[0];
          for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <
               data_preprocessing_fe_B.loop_ub_h; data_preprocessing_fe_B.i_ln++) {
            for (data_preprocessing_fe_B.end = 0; data_preprocessing_fe_B.end < data_preprocessing_fe_B.j;
                 data_preprocessing_fe_B.end++) {
              b_cost->data[ii->data[data_preprocessing_fe_B.end] + b_cost->size[0] *
                jj->data[data_preprocessing_fe_B.i_ln]] = cost_0->data[data_preprocessing_fe_B.j *
                data_preprocessing_fe_B.i_ln + data_preprocessing_fe_B.end];
            }
          }

          data_preprocessing_fe_B.v_idx_1 = ii->size[0];
          ii->size[0] = uncovered_tmp->size[1];
          hokuy_emxEnsureCapacity_int32_T(ii, data_preprocessing_fe_B.v_idx_1);
          data_preprocessing_fe_B.loop_ub_h = uncovered_tmp->size[1];
          if (data_preprocessing_fe_B.loop_ub_h - 1 >= 0) {
            memcpy(&ii->data[0], &uncovered_tmp->data[0], static_cast<uint32_T>
                   (data_preprocessing_fe_B.loop_ub_h) * sizeof(int32_T));
          }

          data_preprocessing_fe_B.v_idx_1 = jj->size[0];
          jj->size[0] = b_uncovered_tmp->size[1];
          hokuy_emxEnsureCapacity_int32_T(jj, data_preprocessing_fe_B.v_idx_1);
          data_preprocessing_fe_B.loop_ub_h = b_uncovered_tmp->size[1];
          data_preprocessing_fe_B.v_idx_1 = lzi->size[0] * lzi->size[1];
          lzi->size[0] = uncovered_tmp->size[1];
          lzi->size[1] = b_uncovered_tmp->size[1];
          hok_emxEnsureCapacity_boolean_T(lzi, data_preprocessing_fe_B.v_idx_1);
          for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <
               data_preprocessing_fe_B.loop_ub_h; data_preprocessing_fe_B.i_ln++) {
            jj->data[data_preprocessing_fe_B.i_ln] = b_uncovered_tmp->
              data[data_preprocessing_fe_B.i_ln];
            data_preprocessing_fe_B.trueCount = uncovered_tmp->size[1];
            for (data_preprocessing_fe_B.end = 0; data_preprocessing_fe_B.end <
                 data_preprocessing_fe_B.trueCount; data_preprocessing_fe_B.end++) {
              lzi->data[data_preprocessing_fe_B.end + lzi->size[0] * data_preprocessing_fe_B.i_ln]
                = !(b_cost->data[b_cost->size[0] * b_uncovered_tmp->
                    data[data_preprocessing_fe_B.i_ln] + uncovered_tmp->
                    data[data_preprocessing_fe_B.end]] != 0.0);
            }
          }

          data_preprocessing_fe_B.j = ii->size[0];
          data_preprocessing_fe_B.loop_ub_h = jj->size[0];
          for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <
               data_preprocessing_fe_B.loop_ub_h; data_preprocessing_fe_B.i_ln++) {
            for (data_preprocessing_fe_B.end = 0; data_preprocessing_fe_B.end < data_preprocessing_fe_B.j;
                 data_preprocessing_fe_B.end++) {
              Z->data[ii->data[data_preprocessing_fe_B.end] + Z->size[0] * jj->
                data[data_preprocessing_fe_B.i_ln]] = lzi->data[data_preprocessing_fe_B.j *
                data_preprocessing_fe_B.i_ln + data_preprocessing_fe_B.end];
            }
          }

          data_preprocessing_fe_B.v_idx_1 = cost->size[0] * cost->size[1];
          cost->size[0] = b_cost->size[0];
          cost->size[1] = b_cost->size[1];
          hokuyo_emxEnsureCapacity_real_T(cost, data_preprocessing_fe_B.v_idx_1);
          if (data_preprocessing_fe_B.m - 1 >= 0) {
            memcpy(&cost->data[0], &b_cost->data[0], static_cast<uint32_T>
                   (data_preprocessing_fe_B.m) * sizeof(real_T));
          }
        } else {
          exitg3 = 1;
        }
      } while (exitg3 == 0);

      data_preprocessing_fe_B.nRows = assignment->size[0];
      data_preprocessing_fe_B.nCols = assignment->size[1];
      data_preprocessing_fe_B.v_idx_1 = rowCover->size[0] * rowCover->size[1];
      rowCover->size[0] = 1;
      rowCover->size[1] = assignment->size[0];
      hok_emxEnsureCapacity_boolean_T(rowCover, data_preprocessing_fe_B.v_idx_1);
      data_preprocessing_fe_B.loop_ub_h = assignment->size[0];
      if (data_preprocessing_fe_B.loop_ub_h - 1 >= 0) {
        memset(&rowCover->data[0], 0, static_cast<uint32_T>
               (data_preprocessing_fe_B.loop_ub_h) * sizeof(boolean_T));
      }

      data_preprocessing_fe_B.v_idx_1 = colCover->size[0] * colCover->size[1];
      colCover->size[0] = 1;
      colCover->size[1] = assignment->size[1];
      hok_emxEnsureCapacity_boolean_T(colCover, data_preprocessing_fe_B.v_idx_1);
      data_preprocessing_fe_B.loop_ub_h = assignment->size[1];
      if (data_preprocessing_fe_B.loop_ub_h - 1 >= 0) {
        memset(&colCover->data[0], 0, static_cast<uint32_T>
               (data_preprocessing_fe_B.loop_ub_h) * sizeof(boolean_T));
      }

      rowCover->data[static_cast<int32_T>(data_preprocessing_fe_B.zi) - 1] = true;
      colCover->data[static_cast<int32_T>(data_preprocessing_fe_B.zj) - 1] = true;
      data_preprocessing_fe_B.n = colCover->size[1] - 1;
      data_preprocessing_fe_B.trueCount = 0;
      for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <= data_preprocessing_fe_B.n;
           data_preprocessing_fe_B.i_ln++) {
        if (colCover->data[data_preprocessing_fe_B.i_ln]) {
          data_preprocessing_fe_B.trueCount++;
        }
      }

      data_preprocessing_fe_B.v_idx_1 = rowInd_tmp->size[0] * rowInd_tmp->size[1];
      rowInd_tmp->size[0] = 1;
      rowInd_tmp->size[1] = data_preprocessing_fe_B.trueCount;
      hokuy_emxEnsureCapacity_int32_T(rowInd_tmp, data_preprocessing_fe_B.v_idx_1);
      data_preprocessing_fe_B.trueCount = 0;
      for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <= data_preprocessing_fe_B.n;
           data_preprocessing_fe_B.i_ln++) {
        if (colCover->data[data_preprocessing_fe_B.i_ln]) {
          rowInd_tmp->data[data_preprocessing_fe_B.trueCount] = data_preprocessing_fe_B.i_ln;
          data_preprocessing_fe_B.trueCount++;
        }
      }

      if (assignment->size[0] < 1) {
        data_preprocessing_fe_B.loop_ub_h = -1;
      } else {
        data_preprocessing_fe_B.loop_ub_h = assignment->size[0] - 1;
      }

      data_preprocessing_fe_B.v_idx_1 = Z->size[0] * Z->size[1];
      Z->size[0] = data_preprocessing_fe_B.loop_ub_h + 1;
      Z->size[1] = rowInd_tmp->size[1];
      hok_emxEnsureCapacity_boolean_T(Z, data_preprocessing_fe_B.v_idx_1);
      data_preprocessing_fe_B.trueCount = rowInd_tmp->size[1];
      for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <
           data_preprocessing_fe_B.trueCount; data_preprocessing_fe_B.i_ln++) {
        for (data_preprocessing_fe_B.end = 0; data_preprocessing_fe_B.end <=
             data_preprocessing_fe_B.loop_ub_h; data_preprocessing_fe_B.end++) {
          Z->data[data_preprocessing_fe_B.end + Z->size[0] * data_preprocessing_fe_B.i_ln] =
            assignment->data[assignment->size[0] * rowInd_tmp->
            data[data_preprocessing_fe_B.i_ln] + data_preprocessing_fe_B.end];
        }
      }

      data_preprocessing_fe_B.j = rowCover->size[1] - 1;
      data_preprocessing_fe_B.trueCount = 0;
      for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <= data_preprocessing_fe_B.j;
           data_preprocessing_fe_B.i_ln++) {
        if (rowCover->data[data_preprocessing_fe_B.i_ln]) {
          data_preprocessing_fe_B.trueCount++;
        }
      }

      data_preprocessing_fe_B.v_idx_1 = tmp_0->size[0] * tmp_0->size[1];
      tmp_0->size[0] = 1;
      tmp_0->size[1] = data_preprocessing_fe_B.trueCount;
      hokuy_emxEnsureCapacity_int32_T(tmp_0, data_preprocessing_fe_B.v_idx_1);
      data_preprocessing_fe_B.trueCount = 0;
      for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <= data_preprocessing_fe_B.j;
           data_preprocessing_fe_B.i_ln++) {
        if (rowCover->data[data_preprocessing_fe_B.i_ln]) {
          tmp_0->data[data_preprocessing_fe_B.trueCount] = data_preprocessing_fe_B.i_ln;
          data_preprocessing_fe_B.trueCount++;
        }
      }

      data_preprocessing_fe_B.loop_ub_h = tmp_0->size[1];
      data_preprocessing_fe_B.unnamed_idx_1 = rowInd_tmp->size[1];
      for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <
           data_preprocessing_fe_B.unnamed_idx_1; data_preprocessing_fe_B.i_ln++) {
        for (data_preprocessing_fe_B.end = 0; data_preprocessing_fe_B.end <
             data_preprocessing_fe_B.loop_ub_h; data_preprocessing_fe_B.end++) {
          assignment->data[tmp_0->data[data_preprocessing_fe_B.end] + assignment->size[0]
            * rowInd_tmp->data[data_preprocessing_fe_B.i_ln]] = true;
        }
      }

      do {
        exitg3 = 0;
        data_preprocessing_fe_B.shouldCreateNewZero = false;
        data_preprocessing_fe_B.i_ln = 1;
        do {
          exitg5 = 0;
          data_preprocessing_fe_B.loop_ub_h = Z->size[0] * Z->size[1];
          if (data_preprocessing_fe_B.i_ln <= data_preprocessing_fe_B.loop_ub_h) {
            if (Z->data[data_preprocessing_fe_B.i_ln - 1]) {
              data_preprocessing_fe_B.shouldCreateNewZero = true;
              exitg5 = 1;
            } else {
              data_preprocessing_fe_B.i_ln++;
            }
          } else {
            exitg5 = 1;
          }
        } while (exitg5 == 0);

        if (data_preprocessing_fe_B.shouldCreateNewZero) {
          data_preprocessing_fe_B.unnamed_idx_1 = data_preprocessing_fe_B.loop_ub_h - 1;
          data_preprocessing_fe_B.trueCount = 0;
          for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <=
               data_preprocessing_fe_B.unnamed_idx_1; data_preprocessing_fe_B.i_ln++) {
            if (Z->data[data_preprocessing_fe_B.i_ln]) {
              data_preprocessing_fe_B.trueCount++;
            }
          }

          data_preprocessing_fe_B.v_idx_1 = v->size[0];
          v->size[0] = data_preprocessing_fe_B.trueCount;
          hokuy_emxEnsureCapacity_int32_T(v, data_preprocessing_fe_B.v_idx_1);
          data_preprocessing_fe_B.trueCount = 0;
          for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <=
               data_preprocessing_fe_B.unnamed_idx_1; data_preprocessing_fe_B.i_ln++) {
            if (Z->data[data_preprocessing_fe_B.i_ln]) {
              v->data[data_preprocessing_fe_B.trueCount] = data_preprocessing_fe_B.i_ln;
              data_preprocessing_fe_B.trueCount++;
            }
          }

          data_preprocessing_fe_B.end = colCover->size[1] - 1;
          data_preprocessing_fe_B.trueCount = 0;
          for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <=
               data_preprocessing_fe_B.end; data_preprocessing_fe_B.i_ln++) {
            if (colCover->data[data_preprocessing_fe_B.i_ln]) {
              data_preprocessing_fe_B.trueCount++;
            }
          }

          data_preprocessing_fe_B.v_idx_1 = tmp_1->size[0] * tmp_1->size[1];
          tmp_1->size[0] = 1;
          tmp_1->size[1] = data_preprocessing_fe_B.trueCount;
          hokuy_emxEnsureCapacity_int32_T(tmp_1, data_preprocessing_fe_B.v_idx_1);
          data_preprocessing_fe_B.trueCount = 0;
          for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <=
               data_preprocessing_fe_B.end; data_preprocessing_fe_B.i_ln++) {
            if (colCover->data[data_preprocessing_fe_B.i_ln]) {
              tmp_1->data[data_preprocessing_fe_B.trueCount] = data_preprocessing_fe_B.i_ln;
              data_preprocessing_fe_B.trueCount++;
            }
          }

          data_preprocessing_fe_B.trueCount = v->size[0];
          data_preprocessing_fe_B.v_idx_1 = tmp_1->size[1];
          for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <
               data_preprocessing_fe_B.v_idx_1; data_preprocessing_fe_B.i_ln++) {
            for (data_preprocessing_fe_B.end = 0; data_preprocessing_fe_B.end <
                 data_preprocessing_fe_B.trueCount; data_preprocessing_fe_B.end++) {
              assignment->data[v->data[data_preprocessing_fe_B.end] + assignment->size[0]
                * tmp_1->data[data_preprocessing_fe_B.i_ln]] = false;
            }
          }

          if (data_preprocessing_fe_B.nCols < 1) {
            data_preprocessing_fe_B.end = -1;
          } else {
            data_preprocessing_fe_B.end = data_preprocessing_fe_B.n;
          }

          data_preprocessing_fe_B.v_idx_1 = colCover->size[0] * colCover->size[1];
          colCover->size[0] = 1;
          colCover->size[1] = data_preprocessing_fe_B.end + 1;
          hok_emxEnsureCapacity_boolean_T(colCover, data_preprocessing_fe_B.v_idx_1);
          for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <=
               data_preprocessing_fe_B.end; data_preprocessing_fe_B.i_ln++) {
            colCover->data[data_preprocessing_fe_B.i_ln] = primes->data[primes->size[0] *
              data_preprocessing_fe_B.i_ln + v->data[0]];
          }

          data_preprocessing_fe_B.v_idx_1 = lzi->size[0] * lzi->size[1];
          lzi->size[0] = Z->size[0];
          lzi->size[1] = Z->size[1];
          hok_emxEnsureCapacity_boolean_T(lzi, data_preprocessing_fe_B.v_idx_1);
          if (data_preprocessing_fe_B.loop_ub_h - 1 >= 0) {
            memcpy(&lzi->data[0], &Z->data[0], static_cast<uint32_T>
                   (data_preprocessing_fe_B.loop_ub_h) * sizeof(boolean_T));
          }

          data_preprocessing_fe_B.end = colCover->size[1] - 1;
          data_preprocessing_fe_B.trueCount = 0;
          for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <=
               data_preprocessing_fe_B.end; data_preprocessing_fe_B.i_ln++) {
            if (colCover->data[data_preprocessing_fe_B.i_ln]) {
              data_preprocessing_fe_B.trueCount++;
            }
          }

          data_preprocessing_fe_B.v_idx_1 = b_rowInd_tmp->size[0] * b_rowInd_tmp->size[1];
          b_rowInd_tmp->size[0] = 1;
          b_rowInd_tmp->size[1] = data_preprocessing_fe_B.trueCount;
          hokuy_emxEnsureCapacity_int32_T(b_rowInd_tmp, data_preprocessing_fe_B.v_idx_1);
          data_preprocessing_fe_B.trueCount = 0;
          for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <=
               data_preprocessing_fe_B.end; data_preprocessing_fe_B.i_ln++) {
            if (colCover->data[data_preprocessing_fe_B.i_ln]) {
              b_rowInd_tmp->data[data_preprocessing_fe_B.trueCount] = data_preprocessing_fe_B.i_ln;
              data_preprocessing_fe_B.trueCount++;
            }
          }

          if (data_preprocessing_fe_B.nRows < 1) {
            data_preprocessing_fe_B.loop_ub_h = -1;
          } else {
            data_preprocessing_fe_B.loop_ub_h = data_preprocessing_fe_B.j;
          }

          data_preprocessing_fe_B.v_idx_1 = Z->size[0] * Z->size[1];
          Z->size[0] = data_preprocessing_fe_B.loop_ub_h + 1;
          Z->size[1] = b_rowInd_tmp->size[1];
          hok_emxEnsureCapacity_boolean_T(Z, data_preprocessing_fe_B.v_idx_1);
          data_preprocessing_fe_B.trueCount = b_rowInd_tmp->size[1];
          for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <
               data_preprocessing_fe_B.trueCount; data_preprocessing_fe_B.i_ln++) {
            for (data_preprocessing_fe_B.end = 0; data_preprocessing_fe_B.end <=
                 data_preprocessing_fe_B.loop_ub_h; data_preprocessing_fe_B.end++) {
              Z->data[data_preprocessing_fe_B.end + Z->size[0] * data_preprocessing_fe_B.i_ln] =
                assignment->data[assignment->size[0] * b_rowInd_tmp->
                data[data_preprocessing_fe_B.i_ln] + data_preprocessing_fe_B.end];
            }
          }

          data_preprocessing_fe_B.trueCount = 0;
          for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <=
               data_preprocessing_fe_B.unnamed_idx_1; data_preprocessing_fe_B.i_ln++) {
            if (lzi->data[data_preprocessing_fe_B.i_ln]) {
              data_preprocessing_fe_B.trueCount++;
            }
          }

          data_preprocessing_fe_B.v_idx_1 = tmp_2->size[0];
          tmp_2->size[0] = data_preprocessing_fe_B.trueCount;
          hokuy_emxEnsureCapacity_int32_T(tmp_2, data_preprocessing_fe_B.v_idx_1);
          data_preprocessing_fe_B.trueCount = 0;
          for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <=
               data_preprocessing_fe_B.unnamed_idx_1; data_preprocessing_fe_B.i_ln++) {
            if (lzi->data[data_preprocessing_fe_B.i_ln]) {
              tmp_2->data[data_preprocessing_fe_B.trueCount] = data_preprocessing_fe_B.i_ln;
              data_preprocessing_fe_B.trueCount++;
            }
          }

          data_preprocessing_fe_B.loop_ub_h = tmp_2->size[0];
          data_preprocessing_fe_B.unnamed_idx_1 = b_rowInd_tmp->size[1];
          for (data_preprocessing_fe_B.i_ln = 0; data_preprocessing_fe_B.i_ln <
               data_preprocessing_fe_B.unnamed_idx_1; data_preprocessing_fe_B.i_ln++) {
            for (data_preprocessing_fe_B.end = 0; data_preprocessing_fe_B.end <
                 data_preprocessing_fe_B.loop_ub_h; data_preprocessing_fe_B.end++) {
              assignment->data[tmp_2->data[data_preprocessing_fe_B.end] +
                assignment->size[0] * b_rowInd_tmp->data[data_preprocessing_fe_B.i_ln]] =
                true;
            }
          }
        } else {
          exitg3 = 1;
        }
      } while (exitg3 == 0);

      data_preprocessing_fe_any_o(assignment, colCover);
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  data_preprocessing_fe_emxFree_real_T(&cost_0);
  data_preprocessing_fe_emxFree_int32_T(&tmp_2);
  data_preprocessing_fe_emxFree_int32_T(&tmp_1);
  data_preprocessing_fe_emxFree_int32_T(&tmp_0);
  data_preprocessing_fe_emxFree_int32_T(&tmp);
  data_preprocessing_fe_emxFree_int32_T(&b_rowInd_tmp);
  data_preprocessing_fe_emxFree_int32_T(&v);
  data_preprocessing_fe_emxFree_int32_T(&b_uncovered_tmp);
  data_preprocessing_fe_emxFree_int32_T(&uncovered_tmp);
  data_preprocessing_fe_emxFree_int32_T(&u);
  data_preprocessing_fe_emxFree_int32_T(&t);
  data_preprocessing_fe_emxFree_int32_T(&s);
  data_preprocessing_fe_emxFree_int32_T(&r);
  data_preprocessing_fe_emxFree_int32_T(&rowInd_tmp);
  data_preprocessing_fe_emxFree_boolean_T(&lzi);
  data_preprocessing_fe_emxFree_int32_T(&jj);
  data_preprocessing_fe_emxFree_int32_T(&ii);
  data_preprocessing_fe_emxFree_boolean_T(&colCover);
  data_preprocessing_fe_emxFree_boolean_T(&rowCover);
  data_preprocessing_fe_emxFree_real_T(&b_cost);
  data_preprocessing_fe_emxFree_boolean_T(&starredRow);
  data_preprocessing_fe_emxFree_boolean_T(&Z);
  data_preprocessing_fe_emxFree_boolean_T(&primes);
}

static void hokuyoTra_binary_expand_op_dezv(emxArray_boolean_T_hokuyoTrac_T *in1,
  const emxArray_boolean_T_hokuyoTrac_T *in2, const
  emxArray_int32_T_data_preprocessing_fe_T *in3, const emxArray_real_T_data_preprocessing_fe_T
  *in4)
{
  int32_T i;
  int32_T in4_0;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;

  // Outputs for Enabled SubSystem: '<Root>/Create Hokuyo Tracks' incorporates:
  //   EnablePort: '<S1>/Enable'

  // MATLAB Function: '<S13>/2D Measurement to Track Assignment'
  in4_0 = in4->size[1];
  loop_ub = in3->size[0] == 1 ? in2->size[0] : in3->size[0];
  i = in1->size[0];
  in1->size[0] = loop_ub;
  hok_emxEnsureCapacity_boolean_T(in1, i);
  stride_0_0 = (in2->size[0] != 1);
  stride_1_0 = (in3->size[0] != 1);
  for (i = 0; i < loop_ub; i++) {
    in1->data[i] = (in2->data[i * stride_0_0] && (in3->data[i * stride_1_0] >
      in4_0));
  }

  // End of MATLAB Function: '<S13>/2D Measurement to Track Assignment'
  // End of Outputs for SubSystem: '<Root>/Create Hokuyo Tracks'
}

static void hoku_emxEnsureCapacity_uint32_T(emxArray_uint32_T_hokuyoTrack_T
  *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(i), sizeof(uint32_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(uint32_T) * static_cast<uint32_T>
             (oldNumel));
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = static_cast<uint32_T *>(newData);
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void hokuyoTrac_binary_expand_op_dez(emxArray_boolean_T_hokuyoTrac_T *in1,
  const emxArray_boolean_T_hokuyoTrac_T *in2, const
  emxArray_int32_T_data_preprocessing_fe_T *in3, const emxArray_real_T_data_preprocessing_fe_T
  *in4)
{
  int32_T i;
  int32_T in4_0;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;

  // Outputs for Enabled SubSystem: '<Root>/Create Hokuyo Tracks' incorporates:
  //   EnablePort: '<S1>/Enable'

  // MATLAB Function: '<S13>/2D Measurement to Track Assignment'
  in4_0 = in4->size[0];
  loop_ub = in3->size[0] == 1 ? in2->size[0] : in3->size[0];
  i = in1->size[0];
  in1->size[0] = loop_ub;
  hok_emxEnsureCapacity_boolean_T(in1, i);
  stride_0_0 = (in2->size[0] != 1);
  stride_1_0 = (in3->size[0] != 1);
  for (i = 0; i < loop_ub; i++) {
    in1->data[i] = (in2->data[i * stride_0_0] && (in3->data[i * stride_1_0] >
      in4_0));
  }

  // End of MATLAB Function: '<S13>/2D Measurement to Track Assignment'
  // End of Outputs for SubSystem: '<Root>/Create Hokuyo Tracks'
}

static void data_preprocessing_fe_and(emxArray_boolean_T_hokuyoTrac_T *in1, const
  emxArray_boolean_T_hokuyoTrac_T *in2, const emxArray_boolean_T_hokuyoTrac_T
  *in3)
{
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;

  // Outputs for Enabled SubSystem: '<Root>/Create Hokuyo Tracks' incorporates:
  //   EnablePort: '<S1>/Enable'

  // MATLAB Function: '<S13>/2D Measurement to Track Assignment'
  loop_ub = in3->size[0] == 1 ? in2->size[0] : in3->size[0];
  i = in1->size[0];
  in1->size[0] = loop_ub;
  hok_emxEnsureCapacity_boolean_T(in1, i);
  stride_0_0 = (in2->size[0] != 1);
  stride_1_0 = (in3->size[0] != 1);
  for (i = 0; i < loop_ub; i++) {
    in1->data[i] = (in2->data[i * stride_0_0] && in3->data[i * stride_1_0]);
  }

  // End of MATLAB Function: '<S13>/2D Measurement to Track Assignment'
  // End of Outputs for SubSystem: '<Root>/Create Hokuyo Tracks'
}

static void data_preprocessing_fe_emxFree_uint32_T(emxArray_uint32_T_hokuyoTrack_T
  **pEmxArray)
{
  if (*pEmxArray != static_cast<emxArray_uint32_T_hokuyoTrack_T *>(NULL)) {
    if (((*pEmxArray)->data != static_cast<uint32_T *>(NULL)) && (*pEmxArray)
        ->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = static_cast<emxArray_uint32_T_hokuyoTrack_T *>(NULL);
  }
}

static void data_preprocessing_fe_SystemCore_setup(ros_slros2_internal_block_Pub_T *obj)
{
  rmw_qos_durability_policy_t durability;
  rmw_qos_history_policy_t history;
  rmw_qos_profile_t qos_profile;
  rmw_qos_reliability_policy_t reliability;
  char_T b_zeroDelimTopic[15];
  static const char_T tmp[14] = { '/', 'H', 'o', 'k', 'u', 'y', 'o', '/', 'T',
    'r', 'a', 'c', 'k', 's' };

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
  Pub_data_preprocessing_fe_80.createPublisher(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

static void data_preprocessing_fe_SystemCore_setup_d(ros_slros2_internal_block_Sub_T *obj)
{
  rmw_qos_durability_policy_t durability;
  rmw_qos_history_policy_t history;
  rmw_qos_profile_t qos_profile;
  rmw_qos_reliability_policy_t reliability;
  char_T b_zeroDelimTopic[6];
  static const char_T tmp[5] = { '/', 's', 'c', 'a', 'n' };

  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;
  history = RMW_QOS_POLICY_HISTORY_KEEP_LAST;
  reliability = RMW_QOS_POLICY_RELIABILITY_RELIABLE;
  durability = RMW_QOS_POLICY_DURABILITY_VOLATILE;
  SET_QOS_VALUES(qos_profile, history, (size_t)1.0, durability, reliability);
  for (int32_T i = 0; i < 5; i++) {
    b_zeroDelimTopic[i] = tmp[i];
  }

  b_zeroDelimTopic[5] = '\x00';
  Sub_data_preprocessing_fe_90.createSubscriber(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

// Model step function
void data_preprocessing_fe_step(void)
{
  emxArray_boolean_T_hokuyoTrac_T *neighbouringDistance_0;
  emxArray_boolean_T_hokuyoTrac_T *r;
  emxArray_boolean_T_hokuyoTrac_T *s;
  emxArray_boolean_T_hokuyoTrac_T *tmp;
  emxArray_boolean_T_hokuyoTrac_T *tmp_0;
  emxArray_int32_T_data_preprocessing_fe_T *ii;
  emxArray_int32_T_data_preprocessing_fe_T *jj;
  emxArray_int32_T_data_preprocessing_fe_T *tmp_1;
  emxArray_real_T_data_preprocessing_fe_T *b_x;
  emxArray_real_T_data_preprocessing_fe_T *b_y;
  emxArray_real_T_data_preprocessing_fe_T *costMatrix;
  emxArray_real_T_data_preprocessing_fe_T *detections;
  emxArray_real_T_data_preprocessing_fe_T *detections_0;
  emxArray_real_T_data_preprocessing_fe_T *neighbouringDistance;
  emxArray_real_T_data_preprocessing_fe_T *paddedCost;
  emxArray_real_T_data_preprocessing_fe_T *tracksData;
  emxArray_uint32_T_hokuyoTrack_T *assignments;
  emxArray_uint32_T_hokuyoTrack_T *b_y_0;
  emxArray_uint32_T_hokuyoTrack_T *unassignedDetections;
  emxArray_uint32_T_hokuyoTrack_T *unassignedTracks;
  emxArray_uint32_T_hokuyoTrack_T *y;
  static const ClusterBoundingBox tmp_2 = { 0.0,// y
    0.0,                               // x
    0.0,                               // width
    0.0                                // length
  };

  static const int8_T o[8] = { 0, 1, 0, 0, 0, 0, 0, 0 };

  static const int8_T m[8] = { 0, 0, 0, 1, 0, 0, 0, 0 };

  static const int8_T l[8] = { 0, 0, 0, 0, 0, 1, 0, 0 };

  static const int8_T h[8] = { 0, 0, 0, 0, 0, 0, 0, 1 };

  static const int8_T g[32] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 };

  static const int8_T c_b[32] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0 };

  emxArray_boolean_T_hokuyoTrac_T *tmp_3;
  boolean_T exitg1;

  // MATLABSystem: '<S2>/SourceBlock'
  data_preprocessing_fe_B.empty_non_axis_sizes = Sub_data_preprocessing_fe_90.getLatestMessage
    (&data_preprocessing_fe_B.b_varargout_2);

  // Outputs for Enabled SubSystem: '<S2>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S18>/Enable'

  if (data_preprocessing_fe_B.empty_non_axis_sizes) {
    // SignalConversion generated from: '<S18>/In1'
    data_preprocessing_fe_B.In1 = data_preprocessing_fe_B.b_varargout_2;
  }

  // End of Outputs for SubSystem: '<S2>/Enabled Subsystem'

  // MATLABSystem: '<Root>/Read Scan'
  memset(&data_preprocessing_fe_B.rangesTmp_data[0], 0, 1500U * sizeof(real32_T));
  memset(&data_preprocessing_fe_B.anglesTmp_data[0], 0, 1500U * sizeof(real32_T));
  if (data_preprocessing_fe_B.In1.ranges_SL_Info.CurrentLength >=
      data_preprocessing_fe_B.In1.ranges_SL_Info.ReceivedLength) {
    if (data_preprocessing_fe_B.In1.ranges_SL_Info.CurrentLength >= 1500U) {
      data_preprocessing_fe_B.y = 1500U;
    } else {
      data_preprocessing_fe_B.y = data_preprocessing_fe_B.In1.ranges_SL_Info.CurrentLength;
    }

    if (data_preprocessing_fe_B.y < 1U) {
      data_preprocessing_fe_B.numClusters = -1;
    } else {
      data_preprocessing_fe_B.numClusters = static_cast<int32_T>(data_preprocessing_fe_B.y) - 1;
    }

    if (data_preprocessing_fe_B.numClusters >= 0) {
      memcpy(&data_preprocessing_fe_B.rangesTmp_data[0], &data_preprocessing_fe_B.In1.ranges[0],
             static_cast<uint32_T>(data_preprocessing_fe_B.numClusters + 1) * sizeof
             (real32_T));
    }

    if (data_preprocessing_fe_B.y < 1U) {
      data_preprocessing_fe_B.jA = 0;
      data_preprocessing_fe_B.numAssignments = 0;
    } else {
      data_preprocessing_fe_B.jA = static_cast<int32_T>(data_preprocessing_fe_B.y);
      data_preprocessing_fe_B.numAssignments = static_cast<int32_T>(data_preprocessing_fe_B.y);
      data_preprocessing_fe_B.loop_ub = static_cast<int32_T>(data_preprocessing_fe_B.y) - 1;
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <=
           data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.b_data[data_preprocessing_fe_B.vstride] = static_cast<int16_T>
          (data_preprocessing_fe_B.vstride);
      }
    }

    for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
         data_preprocessing_fe_B.numAssignments; data_preprocessing_fe_B.vstride++) {
      data_preprocessing_fe_B.angles_data[data_preprocessing_fe_B.vstride] = static_cast<real32_T>
        (data_preprocessing_fe_B.b_data[data_preprocessing_fe_B.vstride]) *
        data_preprocessing_fe_B.In1.angle_increment + data_preprocessing_fe_B.In1.angle_min;
    }

    data_preprocessing_fe_B.loop_ub = data_preprocessing_fe_B.numAssignments - 1;
    for (data_preprocessing_fe_B.jj = 0; data_preprocessing_fe_B.jj <= data_preprocessing_fe_B.loop_ub;
         data_preprocessing_fe_B.jj++) {
      data_preprocessing_fe_B.y_data[data_preprocessing_fe_B.jj] = fabs
        (data_preprocessing_fe_B.angles_data[data_preprocessing_fe_B.jj]);
    }

    for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
         data_preprocessing_fe_B.numAssignments; data_preprocessing_fe_B.vstride++) {
      data_preprocessing_fe_B.x_data[data_preprocessing_fe_B.vstride] =
        (data_preprocessing_fe_B.y_data[data_preprocessing_fe_B.vstride] > 3.1415926535897931);
    }

    data_preprocessing_fe_B.rEQ0 = false;
    data_preprocessing_fe_B.vstride = 0;
    exitg1 = false;
    while ((!exitg1) && (data_preprocessing_fe_B.vstride + 1 <=
                         data_preprocessing_fe_B.numAssignments)) {
      if (data_preprocessing_fe_B.x_data[data_preprocessing_fe_B.vstride]) {
        data_preprocessing_fe_B.rEQ0 = true;
        exitg1 = true;
      } else {
        data_preprocessing_fe_B.vstride++;
      }
    }

    if (data_preprocessing_fe_B.rEQ0) {
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
           data_preprocessing_fe_B.numAssignments; data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.angles_data[data_preprocessing_fe_B.vstride] += 3.1415926535897931;
      }

      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
           data_preprocessing_fe_B.numAssignments; data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.numCorePoints =
          data_preprocessing_fe_B.angles_data[data_preprocessing_fe_B.vstride];
        if (rtIsNaN(data_preprocessing_fe_B.numCorePoints) || rtIsInf
            (data_preprocessing_fe_B.numCorePoints)) {
          data_preprocessing_fe_B.Add = (rtNaN);
        } else if (data_preprocessing_fe_B.numCorePoints == 0.0) {
          data_preprocessing_fe_B.Add = 0.0;
        } else {
          data_preprocessing_fe_B.Add = fmod(data_preprocessing_fe_B.numCorePoints,
            6.2831853071795862);
          data_preprocessing_fe_B.rEQ0 = (data_preprocessing_fe_B.Add == 0.0);
          if (!data_preprocessing_fe_B.rEQ0) {
            data_preprocessing_fe_B.q = fabs(data_preprocessing_fe_B.numCorePoints /
              6.2831853071795862);
            data_preprocessing_fe_B.rEQ0 = !(fabs(data_preprocessing_fe_B.q - floor
              (data_preprocessing_fe_B.q + 0.5)) > 2.2204460492503131E-16 *
              data_preprocessing_fe_B.q);
          }

          if (data_preprocessing_fe_B.rEQ0) {
            data_preprocessing_fe_B.Add = 0.0;
          } else if (data_preprocessing_fe_B.numCorePoints < 0.0) {
            data_preprocessing_fe_B.Add += 6.2831853071795862;
          }
        }

        data_preprocessing_fe_B.y_data[data_preprocessing_fe_B.vstride] = data_preprocessing_fe_B.Add;
      }

      data_preprocessing_fe_B.tmp_size_d = data_preprocessing_fe_B.numAssignments;
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
           data_preprocessing_fe_B.numAssignments; data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.x_data[data_preprocessing_fe_B.vstride] =
          ((data_preprocessing_fe_B.y_data[data_preprocessing_fe_B.vstride] == 0.0) &&
           (data_preprocessing_fe_B.angles_data[data_preprocessing_fe_B.vstride] > 0.0));
      }

      data_preprocessing_fe_B.jBcol = data_preprocessing_fe_B.tmp_size_d - 1;
      for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i <= data_preprocessing_fe_B.jBcol;
           data_preprocessing_fe_B.i++) {
        if (data_preprocessing_fe_B.x_data[data_preprocessing_fe_B.i]) {
          data_preprocessing_fe_B.y_data[data_preprocessing_fe_B.i] = 6.2831853071795862;
        }
      }

      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
           data_preprocessing_fe_B.numAssignments; data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.angles_data[data_preprocessing_fe_B.vstride] =
          data_preprocessing_fe_B.y_data[data_preprocessing_fe_B.vstride] - 3.1415926535897931;
      }
    }

    for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < data_preprocessing_fe_B.jA;
         data_preprocessing_fe_B.vstride++) {
      data_preprocessing_fe_B.anglesTmp_data[data_preprocessing_fe_B.vstride] =
        static_cast<real32_T>(data_preprocessing_fe_B.angles_data[data_preprocessing_fe_B.vstride]);
    }
  }

  memcpy(&data_preprocessing_fe_B.t.f1[0], &data_preprocessing_fe_B.rangesTmp_data[0], 1500U *
         sizeof(real32_T));
  memcpy(&data_preprocessing_fe_B.u.f1[0], &data_preprocessing_fe_B.anglesTmp_data[0], 1500U *
         sizeof(real32_T));

  // Sum: '<Root>/Add' incorporates:
  //   Constant: '<Root>/Constant'
  //   Product: '<Root>/Divide'

  data_preprocessing_fe_B.Add = static_cast<real_T>
    (data_preprocessing_fe_B.In1.header.stamp.nanosec) / data_preprocessing_fe_P.Constant_Value_a
    + static_cast<real_T>(data_preprocessing_fe_B.In1.header.stamp.sec);

  // Sum: '<Root>/Subtract' incorporates:
  //   Memory: '<Root>/Memory'

  data_preprocessing_fe_B.q = data_preprocessing_fe_B.Add - data_preprocessing_fe_DW.Memory_PreviousInput;

  // Outputs for Enabled SubSystem: '<Root>/Create Hokuyo Tracks' incorporates:
  //   EnablePort: '<S1>/Enable'

  // MATLABSystem: '<S2>/SourceBlock' incorporates:
  //   MATLAB Function: '<S13>/2D Measurement to Track Assignment'
  //   MATLAB Function: '<S9>/LiDAR Clustering'

  if (data_preprocessing_fe_B.empty_non_axis_sizes) {
    // MATLAB Function: '<S9>/LiDAR Calibration' incorporates:
    //   Constant: '<S8>/xOffset'
    //   MATLABSystem: '<Root>/Read Scan'

    for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i < 4000; data_preprocessing_fe_B.i++) {
      data_preprocessing_fe_B.sensorData[data_preprocessing_fe_B.i] = (rtNaN);
    }

    for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 1500;
         data_preprocessing_fe_B.vstride++) {
      data_preprocessing_fe_B.b_index_tmp[data_preprocessing_fe_B.vstride] =
        data_preprocessing_fe_B.t.f1[data_preprocessing_fe_B.vstride];
    }

    data_preprocessing_fe_B.rEQ0 = false;
    data_preprocessing_fe_B.jA = 0;
    exitg1 = false;
    while ((!exitg1) && (data_preprocessing_fe_B.jA < 1500)) {
      if (data_preprocessing_fe_B.b_index_tmp[data_preprocessing_fe_B.jA] > 0.0) {
        data_preprocessing_fe_B.rEQ0 = true;
        exitg1 = true;
      } else {
        data_preprocessing_fe_B.jA++;
      }
    }

    if (data_preprocessing_fe_B.rEQ0) {
      data_preprocessing_fe_B.vstride = 0;
      for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i < 1500; data_preprocessing_fe_B.i++) {
        if ((data_preprocessing_fe_B.b_index_tmp[data_preprocessing_fe_B.i] != 0.0) &&
            (data_preprocessing_fe_B.u.f1[data_preprocessing_fe_B.i] != 0.0F)) {
          data_preprocessing_fe_B.vstride++;
        }
      }

      data_preprocessing_fe_B.tmp_size = data_preprocessing_fe_B.vstride;
      data_preprocessing_fe_B.kAcol = 0;
      for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i < 1500; data_preprocessing_fe_B.i++) {
        if ((data_preprocessing_fe_B.b_index_tmp[data_preprocessing_fe_B.i] != 0.0) &&
            (data_preprocessing_fe_B.u.f1[data_preprocessing_fe_B.i] != 0.0F)) {
          data_preprocessing_fe_B.tmp_data_k[data_preprocessing_fe_B.kAcol] = data_preprocessing_fe_B.i;
          data_preprocessing_fe_B.kAcol++;
        }
      }

      data_preprocessing_fe_B.loop_ub = data_preprocessing_fe_B.vstride;
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
           data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.jj = data_preprocessing_fe_B.tmp_data_k[data_preprocessing_fe_B.vstride];
        data_preprocessing_fe_B.rangesTmp_data[data_preprocessing_fe_B.vstride] =
          data_preprocessing_fe_B.u.f1[data_preprocessing_fe_B.jj];
        data_preprocessing_fe_B.anglesTmp_data[data_preprocessing_fe_B.vstride] =
          data_preprocessing_fe_B.u.f1[data_preprocessing_fe_B.jj];
      }

      data_preprocessing_fe_B.vstride = 0;
      for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i < 1500; data_preprocessing_fe_B.i++) {
        if ((data_preprocessing_fe_B.b_index_tmp[data_preprocessing_fe_B.i] != 0.0) &&
            (data_preprocessing_fe_B.u.f1[data_preprocessing_fe_B.i] != 0.0F)) {
          data_preprocessing_fe_B.vstride++;
        }
      }

      for (data_preprocessing_fe_B.jj = 0; data_preprocessing_fe_B.jj < data_preprocessing_fe_B.vstride;
           data_preprocessing_fe_B.jj++) {
        data_preprocessing_fe_B.anglesTmp_data[data_preprocessing_fe_B.jj] = static_cast<real32_T>
          (cos(static_cast<real_T>
               (data_preprocessing_fe_B.anglesTmp_data[data_preprocessing_fe_B.jj])));
      }

      data_preprocessing_fe_B.anglesTmp_size = data_preprocessing_fe_B.tmp_size;
      data_preprocessing_fe_B.loop_ub = data_preprocessing_fe_B.tmp_size;
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
           data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.anglesTmp_data[data_preprocessing_fe_B.vstride] =
          data_preprocessing_fe_B.t.f1[data_preprocessing_fe_B.tmp_data_k[data_preprocessing_fe_B.vstride]]
          * data_preprocessing_fe_B.anglesTmp_data[data_preprocessing_fe_B.vstride] +
          static_cast<real32_T>(data_preprocessing_fe_P.xOffset_Value);
      }

      data_preprocessing_fe_B.vstride = 0;
      for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i < 1500; data_preprocessing_fe_B.i++) {
        if ((data_preprocessing_fe_B.b_index_tmp[data_preprocessing_fe_B.i] != 0.0) &&
            (data_preprocessing_fe_B.u.f1[data_preprocessing_fe_B.i] != 0.0F)) {
          data_preprocessing_fe_B.vstride++;
        }
      }

      for (data_preprocessing_fe_B.jj = 0; data_preprocessing_fe_B.jj < data_preprocessing_fe_B.vstride;
           data_preprocessing_fe_B.jj++) {
        data_preprocessing_fe_B.rangesTmp_data[data_preprocessing_fe_B.jj] = static_cast<real32_T>
          (sin(static_cast<real_T>
               (data_preprocessing_fe_B.rangesTmp_data[data_preprocessing_fe_B.jj])));
      }

      data_preprocessing_fe_B.ranges_size = data_preprocessing_fe_B.tmp_size;
      data_preprocessing_fe_B.loop_ub = data_preprocessing_fe_B.tmp_size;
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
           data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.ranges_data[data_preprocessing_fe_B.vstride] =
          -data_preprocessing_fe_B.t.f1[data_preprocessing_fe_B.tmp_data_k[data_preprocessing_fe_B.vstride]]
          * data_preprocessing_fe_B.rangesTmp_data[data_preprocessing_fe_B.vstride];
      }

      data_preprocessing_fe_B.jBcol = data_preprocessing_fe_B.anglesTmp_size - 1;
      data_preprocessing_fe_B.vstride = 0;
      for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i <= data_preprocessing_fe_B.jBcol;
           data_preprocessing_fe_B.i++) {
        data_preprocessing_fe_B.anglesTmp =
          data_preprocessing_fe_B.anglesTmp_data[data_preprocessing_fe_B.i];
        if ((!rtIsInfF(data_preprocessing_fe_B.anglesTmp)) && (!rtIsNaNF
             (data_preprocessing_fe_B.anglesTmp))) {
          data_preprocessing_fe_B.vstride++;
        }
      }

      data_preprocessing_fe_B.jA = data_preprocessing_fe_B.vstride;
      data_preprocessing_fe_B.kAcol = 0;
      for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i <= data_preprocessing_fe_B.jBcol;
           data_preprocessing_fe_B.i++) {
        data_preprocessing_fe_B.anglesTmp =
          data_preprocessing_fe_B.anglesTmp_data[data_preprocessing_fe_B.i];
        if ((!rtIsInfF(data_preprocessing_fe_B.anglesTmp)) && (!rtIsNaNF
             (data_preprocessing_fe_B.anglesTmp))) {
          data_preprocessing_fe_B.tmp_data_f[data_preprocessing_fe_B.kAcol] = static_cast<int16_T>
            (data_preprocessing_fe_B.i);
          data_preprocessing_fe_B.kAcol++;
        }
      }

      data_preprocessing_fe_B.jBcol = data_preprocessing_fe_B.ranges_size - 1;
      data_preprocessing_fe_B.vstride = 0;
      for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i <= data_preprocessing_fe_B.jBcol;
           data_preprocessing_fe_B.i++) {
        data_preprocessing_fe_B.anglesTmp = data_preprocessing_fe_B.ranges_data[data_preprocessing_fe_B.i];
        if ((!rtIsInfF(data_preprocessing_fe_B.anglesTmp)) && (!rtIsNaNF
             (data_preprocessing_fe_B.anglesTmp))) {
          data_preprocessing_fe_B.vstride++;
        }
      }

      data_preprocessing_fe_B.kAcol = 0;
      for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i <= data_preprocessing_fe_B.jBcol;
           data_preprocessing_fe_B.i++) {
        data_preprocessing_fe_B.anglesTmp = data_preprocessing_fe_B.ranges_data[data_preprocessing_fe_B.i];
        if ((!rtIsInfF(data_preprocessing_fe_B.anglesTmp)) && (!rtIsNaNF
             (data_preprocessing_fe_B.anglesTmp))) {
          data_preprocessing_fe_B.tmp_data_g[data_preprocessing_fe_B.kAcol] = static_cast<int16_T>
            (data_preprocessing_fe_B.i);
          data_preprocessing_fe_B.kAcol++;
        }
      }

      data_preprocessing_fe_B.numAssignments = data_preprocessing_fe_B.vstride;
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
           data_preprocessing_fe_B.jA; data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.sensorData[data_preprocessing_fe_B.vstride] =
          data_preprocessing_fe_B.anglesTmp_data[data_preprocessing_fe_B.tmp_data_f[data_preprocessing_fe_B.vstride]];
      }

      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
           data_preprocessing_fe_B.numAssignments; data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.sensorData[data_preprocessing_fe_B.vstride + 2000] =
          data_preprocessing_fe_B.ranges_data[data_preprocessing_fe_B.tmp_data_g[data_preprocessing_fe_B.vstride]];
      }
    }

    // End of MATLAB Function: '<S9>/LiDAR Calibration'

    // MATLAB Function: '<S9>/LiDAR Clustering'
    data_preprocessing_fe_B.sensorData_size[0] = 2000;
    data_preprocessing_fe_B.sensorData_size[1] = 2;
    for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 4000;
         data_preprocessing_fe_B.vstride++) {
      data_preprocessing_fe_B.numCorePoints =
        data_preprocessing_fe_B.sensorData[data_preprocessing_fe_B.vstride];
      data_preprocessing_fe_B.sensorData_data[data_preprocessing_fe_B.vstride] =
        data_preprocessing_fe_B.numCorePoints;
      data_preprocessing_fe_B.tmp_data_cv[data_preprocessing_fe_B.vstride] = rtIsNaN
        (data_preprocessing_fe_B.numCorePoints);
    }

    data_preprocessing_fe_any(data_preprocessing_fe_B.tmp_data_cv, data_preprocessing_fe_B.tmp_data_g1,
                     &data_preprocessing_fe_B.tmp_size_d);
    data_preprocessing_fe_nullAssignment(data_preprocessing_fe_B.sensorData_data,
      data_preprocessing_fe_B.sensorData_size, data_preprocessing_fe_B.tmp_data_g1);
    data_preprocessing_fe_emxInit_real_T(&neighbouringDistance, 2);

    // MATLAB Function: '<S9>/LiDAR Clustering'
    data_preprocessing_fe_pdist2(data_preprocessing_fe_B.sensorData_data,
                        data_preprocessing_fe_B.sensorData_size,
                        data_preprocessing_fe_B.sensorData_data,
                        data_preprocessing_fe_B.sensorData_size, neighbouringDistance);
    if (data_preprocessing_fe_B.sensorData_size[0] != 0) {
      data_preprocessing_fe_B.sizes_idx_0 = static_cast<int16_T>
        (data_preprocessing_fe_B.sensorData_size[0]);
    } else if (static_cast<int16_T>(data_preprocessing_fe_B.sensorData_size[0]) != 0) {
      data_preprocessing_fe_B.sizes_idx_0 = static_cast<int16_T>
        (data_preprocessing_fe_B.sensorData_size[0]);
    } else {
      data_preprocessing_fe_B.sizes_idx_0 = 0;
    }

    data_preprocessing_fe_B.empty_non_axis_sizes = (data_preprocessing_fe_B.sizes_idx_0 == 0);
    if (data_preprocessing_fe_B.empty_non_axis_sizes) {
      data_preprocessing_fe_B.b_input_sizes_idx_1 = 2;
      data_preprocessing_fe_B.i2_o = 2;
    } else {
      if (static_cast<int16_T>(data_preprocessing_fe_B.sensorData_size[0]) != 0) {
        data_preprocessing_fe_B.b_input_sizes_idx_1 = 2;
      } else {
        data_preprocessing_fe_B.b_input_sizes_idx_1 = 0;
      }

      if (data_preprocessing_fe_B.sensorData_size[0] != 0) {
        data_preprocessing_fe_B.i2_o = 2;
      } else {
        data_preprocessing_fe_B.i2_o = 0;
      }
    }

    data_preprocessing_fe_B.data_size[0] = data_preprocessing_fe_B.sizes_idx_0;
    data_preprocessing_fe_B.data_size[1] = data_preprocessing_fe_B.i2_o +
      data_preprocessing_fe_B.b_input_sizes_idx_1;
    if (data_preprocessing_fe_B.empty_non_axis_sizes) {
      data_preprocessing_fe_B.i2_o = 2;
    } else if (data_preprocessing_fe_B.sensorData_size[0] != 0) {
      data_preprocessing_fe_B.i2_o = 2;
    } else {
      data_preprocessing_fe_B.i2_o = 0;
    }

    data_preprocessing_fe_B.loop_ub = data_preprocessing_fe_B.sizes_idx_0 * data_preprocessing_fe_B.i2_o;
    if (data_preprocessing_fe_B.loop_ub - 1 >= 0) {
      memcpy(&data_preprocessing_fe_B.data_data[0], &data_preprocessing_fe_B.sensorData_data[0],
             static_cast<uint32_T>(data_preprocessing_fe_B.loop_ub) * sizeof(real_T));
    }

    // MATLAB Function: '<S9>/LiDAR Clustering'
    data_preprocessing_fe_B.loop_ub = data_preprocessing_fe_B.sizes_idx_0 *
      data_preprocessing_fe_B.b_input_sizes_idx_1;
    if (data_preprocessing_fe_B.loop_ub - 1 >= 0) {
      if (data_preprocessing_fe_B.empty_non_axis_sizes) {
        data_preprocessing_fe_B.i3 = 2;
      } else if (data_preprocessing_fe_B.sensorData_size[0] != 0) {
        data_preprocessing_fe_B.i3 = 2;
      } else {
        data_preprocessing_fe_B.i3 = 0;
      }
    }

    if (data_preprocessing_fe_B.loop_ub - 1 >= 0) {
      memset(&data_preprocessing_fe_B.data_data[data_preprocessing_fe_B.sizes_idx_0 *
             data_preprocessing_fe_B.i3], 0, static_cast<uint32_T>
             ((data_preprocessing_fe_B.loop_ub + data_preprocessing_fe_B.sizes_idx_0 *
               data_preprocessing_fe_B.i3) - data_preprocessing_fe_B.sizes_idx_0 *
              data_preprocessing_fe_B.i3) * sizeof(real_T));
    }

    data_preprocessing_fe_emxInit_boolean_T(&neighbouringDistance_0, 2);
    data_preprocessing_fe_B.i_l = neighbouringDistance_0->size[0] *
      neighbouringDistance_0->size[1];

    // MATLAB Function: '<S9>/LiDAR Clustering'
    neighbouringDistance_0->size[0] = neighbouringDistance->size[0];
    neighbouringDistance_0->size[1] = neighbouringDistance->size[1];
    hok_emxEnsureCapacity_boolean_T(neighbouringDistance_0, data_preprocessing_fe_B.i_l);

    // MATLAB Function: '<S9>/LiDAR Clustering' incorporates:
    //   Constant: '<S8>/eps'

    data_preprocessing_fe_B.loop_ub = neighbouringDistance->size[0] *
      neighbouringDistance->size[1];
    for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
         data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
      neighbouringDistance_0->data[data_preprocessing_fe_B.vstride] =
        (neighbouringDistance->data[data_preprocessing_fe_B.vstride] <=
         data_preprocessing_fe_P.eps_Value);
    }

    hokuyoTra_combineVectorElements(neighbouringDistance_0,
      data_preprocessing_fe_B.tmp_data_c, &data_preprocessing_fe_B.tmp_size_d);
    data_preprocessing_fe_emxFree_boolean_T(&neighbouringDistance_0);

    // MATLAB Function: '<S9>/LiDAR Clustering' incorporates:
    //   Constant: '<S8>/minPoints'

    data_preprocessing_fe_B.loop_ub = data_preprocessing_fe_B.tmp_size_d;
    for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
         data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
      data_preprocessing_fe_B.tmp_data_g1[data_preprocessing_fe_B.vstride] =
        (data_preprocessing_fe_B.tmp_data_c[data_preprocessing_fe_B.vstride] >
         data_preprocessing_fe_P.minPoints_Value);
    }

    data_preprocessing_fe_B.jBcol = data_preprocessing_fe_B.tmp_size_d - 1;
    data_preprocessing_fe_B.vstride = 0;
    for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i <= data_preprocessing_fe_B.jBcol;
         data_preprocessing_fe_B.i++) {
      if (data_preprocessing_fe_B.tmp_data_g1[data_preprocessing_fe_B.i]) {
        data_preprocessing_fe_B.vstride++;
      }
    }

    data_preprocessing_fe_B.kAcol = 0;
    for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i <= data_preprocessing_fe_B.jBcol;
         data_preprocessing_fe_B.i++) {
      if (data_preprocessing_fe_B.tmp_data_g1[data_preprocessing_fe_B.i]) {
        data_preprocessing_fe_B.tmp_data_b[data_preprocessing_fe_B.kAcol] = static_cast<int16_T>
          (data_preprocessing_fe_B.i);
        data_preprocessing_fe_B.kAcol++;
      }
    }

    // MATLAB Function: '<S9>/LiDAR Clustering' incorporates:
    //   Constant: '<S8>/eps'
    //   Constant: '<S8>/minPoints'

    data_preprocessing_fe_B.i = data_preprocessing_fe_B.vstride;
    for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < data_preprocessing_fe_B.i;
         data_preprocessing_fe_B.vstride++) {
      data_preprocessing_fe_B.data_data[data_preprocessing_fe_B.tmp_data_b[data_preprocessing_fe_B.vstride]
        + data_preprocessing_fe_B.sizes_idx_0 * 3] = 1.0;
    }

    data_preprocessing_fe_B.numClusters = -1;
    for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 2000;
         data_preprocessing_fe_B.vstride++) {
      data_preprocessing_fe_B.b_s.corePoints.x[data_preprocessing_fe_B.vstride] = (rtNaN);
      data_preprocessing_fe_B.b_s.corePoints.y[data_preprocessing_fe_B.vstride] = (rtNaN);
      data_preprocessing_fe_B.b_s.corePoints.b_index[data_preprocessing_fe_B.vstride] = (rtNaN);
      data_preprocessing_fe_B.b_s.nonCorePoints.x[data_preprocessing_fe_B.vstride] = (rtNaN);
      data_preprocessing_fe_B.b_s.nonCorePoints.y[data_preprocessing_fe_B.vstride] = (rtNaN);
      data_preprocessing_fe_B.b_s.nonCorePoints.b_index[data_preprocessing_fe_B.vstride] = (rtNaN);
    }

    for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i < 10; data_preprocessing_fe_B.i++) {
      data_preprocessing_fe_B.clustering[data_preprocessing_fe_B.i] = data_preprocessing_fe_B.b_s;
    }

    data_preprocessing_fe_B.numAssignments = data_preprocessing_fe_B.sizes_idx_0;
    for (data_preprocessing_fe_B.jj = 0; data_preprocessing_fe_B.jj <
         data_preprocessing_fe_B.numAssignments; data_preprocessing_fe_B.jj++) {
      data_preprocessing_fe_B.i_l = (data_preprocessing_fe_B.sizes_idx_0 << 1) + data_preprocessing_fe_B.jj;
      if ((!(data_preprocessing_fe_B.data_data[data_preprocessing_fe_B.i_l] != 0.0)) &&
          (data_preprocessing_fe_B.data_data[data_preprocessing_fe_B.sizes_idx_0 * 3 +
           data_preprocessing_fe_B.jj] != 0.0) && (data_preprocessing_fe_B.numClusters + 1 < 10))
      {
        data_preprocessing_fe_B.data_data[data_preprocessing_fe_B.i_l] = 1.0;
        data_preprocessing_fe_B.numClusters++;
        data_preprocessing_fe_B.numCorePoints = 1.0;
        data_preprocessing_fe_B.numNonCorePoints = 0.0;
        data_preprocessing_fe_B.clustering[data_preprocessing_fe_B.numClusters].corePoints.x[0] =
          data_preprocessing_fe_B.data_data[data_preprocessing_fe_B.jj];
        data_preprocessing_fe_B.clustering[data_preprocessing_fe_B.numClusters].corePoints.y[0] =
          data_preprocessing_fe_B.data_data[data_preprocessing_fe_B.jj +
          data_preprocessing_fe_B.sizes_idx_0];
        data_preprocessing_fe_B.clustering[data_preprocessing_fe_B.numClusters]
          .corePoints.b_index[0] = static_cast<real_T>(data_preprocessing_fe_B.jj) + 1.0;
        data_preprocessing_fe_B.corePointsProcessed = 0.0;
        while (data_preprocessing_fe_B.corePointsProcessed < data_preprocessing_fe_B.numCorePoints)
        {
          data_preprocessing_fe_B.corePointsProcessed++;
          if (data_preprocessing_fe_B.sizes_idx_0 == neighbouringDistance->size[0]) {
            data_preprocessing_fe_B.i = static_cast<int32_T>
              (data_preprocessing_fe_B.clustering[data_preprocessing_fe_B.numClusters].
               corePoints.b_index[static_cast<int32_T>
               (data_preprocessing_fe_B.corePointsProcessed) - 1]);
            data_preprocessing_fe_B.logicalIndex_size = data_preprocessing_fe_B.sizes_idx_0;
            data_preprocessing_fe_B.loop_ub = data_preprocessing_fe_B.sizes_idx_0;
            for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
                 data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
              data_preprocessing_fe_B.logicalIndex_data[data_preprocessing_fe_B.vstride] =
                ((!(data_preprocessing_fe_B.data_data[(data_preprocessing_fe_B.sizes_idx_0 << 1) +
                    data_preprocessing_fe_B.vstride] != 0.0)) &&
                 (neighbouringDistance->data[(data_preprocessing_fe_B.i - 1) *
                  neighbouringDistance->size[0] + data_preprocessing_fe_B.vstride] <=
                  data_preprocessing_fe_P.eps_Value));
            }
          } else {
            hokuyoTrack_binary_expand_op_de(data_preprocessing_fe_B.logicalIndex_data,
              &data_preprocessing_fe_B.logicalIndex_size, data_preprocessing_fe_B.data_data,
              data_preprocessing_fe_B.data_size, neighbouringDistance,
              data_preprocessing_fe_B.clustering, data_preprocessing_fe_B.numClusters,
              data_preprocessing_fe_B.corePointsProcessed, data_preprocessing_fe_P.eps_Value);
          }

          data_preprocessing_fe_B.jA = data_preprocessing_fe_B.logicalIndex_size - 1;
          data_preprocessing_fe_B.vstride = 0;
          for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i <= data_preprocessing_fe_B.jA;
               data_preprocessing_fe_B.i++) {
            if (data_preprocessing_fe_B.logicalIndex_data[data_preprocessing_fe_B.i]) {
              data_preprocessing_fe_B.vstride++;
            }
          }

          data_preprocessing_fe_B.kAcol = 0;
          for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i <= data_preprocessing_fe_B.jA;
               data_preprocessing_fe_B.i++) {
            if (data_preprocessing_fe_B.logicalIndex_data[data_preprocessing_fe_B.i]) {
              data_preprocessing_fe_B.tmp_data_p[data_preprocessing_fe_B.kAcol] = static_cast<
                int16_T>(data_preprocessing_fe_B.i);
              data_preprocessing_fe_B.kAcol++;
            }
          }

          data_preprocessing_fe_B.i = data_preprocessing_fe_B.vstride;
          for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
               data_preprocessing_fe_B.i; data_preprocessing_fe_B.vstride++) {
            data_preprocessing_fe_B.data_data[data_preprocessing_fe_B.tmp_data_p[data_preprocessing_fe_B.vstride]
              + (data_preprocessing_fe_B.sizes_idx_0 << 1)] = 1.0;
          }

          if (data_preprocessing_fe_B.logicalIndex_size == data_preprocessing_fe_B.sizes_idx_0) {
            data_preprocessing_fe_B.corePointLogical_size =
              data_preprocessing_fe_B.logicalIndex_size;
            data_preprocessing_fe_B.loop_ub = data_preprocessing_fe_B.logicalIndex_size;
            for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
                 data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
              data_preprocessing_fe_B.corePointLogical_data[data_preprocessing_fe_B.vstride] =
                (data_preprocessing_fe_B.logicalIndex_data[data_preprocessing_fe_B.vstride] &&
                 (data_preprocessing_fe_B.data_data[data_preprocessing_fe_B.sizes_idx_0 * 3 +
                  data_preprocessing_fe_B.vstride] == 1.0));
            }
          } else {
            data_preprocessing_fe_binary_expand_op_d(data_preprocessing_fe_B.corePointLogical_data,
              &data_preprocessing_fe_B.corePointLogical_size,
              data_preprocessing_fe_B.logicalIndex_data,
              &data_preprocessing_fe_B.logicalIndex_size, data_preprocessing_fe_B.data_data,
              data_preprocessing_fe_B.data_size);
          }

          if (data_preprocessing_fe_B.logicalIndex_size == data_preprocessing_fe_B.sizes_idx_0) {
            data_preprocessing_fe_B.loop_ub = data_preprocessing_fe_B.logicalIndex_size;
            for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
                 data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
              data_preprocessing_fe_B.logicalIndex_data[data_preprocessing_fe_B.vstride] =
                (data_preprocessing_fe_B.logicalIndex_data[data_preprocessing_fe_B.vstride] &&
                 (data_preprocessing_fe_B.data_data[data_preprocessing_fe_B.sizes_idx_0 * 3 +
                  data_preprocessing_fe_B.vstride] == 0.0));
            }
          } else {
            data_preprocessing_fe_binary_expand_op(data_preprocessing_fe_B.logicalIndex_data,
              &data_preprocessing_fe_B.logicalIndex_size, data_preprocessing_fe_B.data_data,
              data_preprocessing_fe_B.data_size);
          }

          data_preprocessing_fe_B.newCorePointsTot = data_preprocessing_fe_B.numCorePoints +
            static_cast<real_T>(hokuyoT_combineVectorElements_e
                                (data_preprocessing_fe_B.corePointLogical_data,
            &data_preprocessing_fe_B.corePointLogical_size));
          data_preprocessing_fe_B.newNonCorePointsTot = data_preprocessing_fe_B.numNonCorePoints +
            static_cast<real_T>(hokuyoT_combineVectorElements_e
                                (data_preprocessing_fe_B.logicalIndex_data,
            &data_preprocessing_fe_B.logicalIndex_size));
          if (data_preprocessing_fe_B.numCorePoints + 1.0 >
              data_preprocessing_fe_B.newCorePointsTot) {
            data_preprocessing_fe_B.jA = 0;
            data_preprocessing_fe_B.loop_ub = 0;
          } else {
            data_preprocessing_fe_B.jA = static_cast<int32_T>
              (data_preprocessing_fe_B.numCorePoints + 1.0) - 1;
            data_preprocessing_fe_B.loop_ub = static_cast<int32_T>
              (data_preprocessing_fe_B.newCorePointsTot);
          }

          data_preprocessing_fe_B.jBcol = data_preprocessing_fe_B.corePointLogical_size - 1;
          data_preprocessing_fe_B.kAcol = 0;
          for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i <= data_preprocessing_fe_B.jBcol;
               data_preprocessing_fe_B.i++) {
            if (data_preprocessing_fe_B.corePointLogical_data[data_preprocessing_fe_B.i]) {
              data_preprocessing_fe_B.t_data[data_preprocessing_fe_B.kAcol] = static_cast<int16_T>
                (data_preprocessing_fe_B.i);
              data_preprocessing_fe_B.kAcol++;
            }
          }

          data_preprocessing_fe_B.loop_ub -= data_preprocessing_fe_B.jA;
          for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
               data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
            data_preprocessing_fe_B.clustering[data_preprocessing_fe_B.numClusters]
              .corePoints.x[data_preprocessing_fe_B.jA + data_preprocessing_fe_B.vstride] =
              data_preprocessing_fe_B.data_data[data_preprocessing_fe_B.t_data[data_preprocessing_fe_B.vstride]];
          }

          if (data_preprocessing_fe_B.numCorePoints + 1.0 >
              data_preprocessing_fe_B.newCorePointsTot) {
            data_preprocessing_fe_B.i = 0;
            data_preprocessing_fe_B.vstride = 0;
          } else {
            data_preprocessing_fe_B.i = static_cast<int32_T>(data_preprocessing_fe_B.numCorePoints
              + 1.0) - 1;
            data_preprocessing_fe_B.vstride = static_cast<int32_T>
              (data_preprocessing_fe_B.newCorePointsTot);
          }

          data_preprocessing_fe_B.loop_ub = data_preprocessing_fe_B.vstride - data_preprocessing_fe_B.i;
          for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
               data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
            data_preprocessing_fe_B.clustering[data_preprocessing_fe_B.numClusters]
              .corePoints.y[data_preprocessing_fe_B.i + data_preprocessing_fe_B.vstride] =
              data_preprocessing_fe_B.data_data[data_preprocessing_fe_B.t_data[data_preprocessing_fe_B.vstride]
              + data_preprocessing_fe_B.sizes_idx_0];
          }

          if (data_preprocessing_fe_B.numCorePoints + 1.0 >
              data_preprocessing_fe_B.newCorePointsTot) {
            data_preprocessing_fe_B.jA = 0;
            data_preprocessing_fe_B.jBcol = 0;
          } else {
            data_preprocessing_fe_B.jA = static_cast<int32_T>
              (data_preprocessing_fe_B.numCorePoints + 1.0) - 1;
            data_preprocessing_fe_B.jBcol = static_cast<int32_T>
              (data_preprocessing_fe_B.newCorePointsTot);
          }

          data_preprocessing_fe_eml_find(data_preprocessing_fe_B.corePointLogical_data,
                                &data_preprocessing_fe_B.corePointLogical_size,
                                data_preprocessing_fe_B.tmp_data_c,
                                &data_preprocessing_fe_B.tmp_size_d);
          data_preprocessing_fe_B.loop_ub = data_preprocessing_fe_B.jBcol - data_preprocessing_fe_B.jA;
          for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
               data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
            data_preprocessing_fe_B.clustering[data_preprocessing_fe_B.numClusters].
              corePoints.b_index[data_preprocessing_fe_B.jA + data_preprocessing_fe_B.vstride] =
              data_preprocessing_fe_B.tmp_data_c[data_preprocessing_fe_B.vstride];
          }

          if (data_preprocessing_fe_B.numNonCorePoints + 1.0 >
              data_preprocessing_fe_B.newNonCorePointsTot) {
            data_preprocessing_fe_B.jA = 0;
            data_preprocessing_fe_B.loop_ub = 0;
          } else {
            data_preprocessing_fe_B.jA = static_cast<int32_T>
              (data_preprocessing_fe_B.numNonCorePoints + 1.0) - 1;
            data_preprocessing_fe_B.loop_ub = static_cast<int32_T>
              (data_preprocessing_fe_B.newNonCorePointsTot);
          }

          data_preprocessing_fe_B.i_l = data_preprocessing_fe_B.logicalIndex_size - 1;
          data_preprocessing_fe_B.kAcol = 0;
          for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i <= data_preprocessing_fe_B.i_l;
               data_preprocessing_fe_B.i++) {
            if (data_preprocessing_fe_B.logicalIndex_data[data_preprocessing_fe_B.i]) {
              data_preprocessing_fe_B.u_data[data_preprocessing_fe_B.kAcol] = static_cast<int16_T>
                (data_preprocessing_fe_B.i);
              data_preprocessing_fe_B.kAcol++;
            }
          }

          data_preprocessing_fe_B.loop_ub -= data_preprocessing_fe_B.jA;
          for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
               data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
            data_preprocessing_fe_B.clustering[data_preprocessing_fe_B.numClusters].
              nonCorePoints.x[data_preprocessing_fe_B.jA + data_preprocessing_fe_B.vstride] =
              data_preprocessing_fe_B.data_data[data_preprocessing_fe_B.u_data[data_preprocessing_fe_B.vstride]];
          }

          if (data_preprocessing_fe_B.numNonCorePoints + 1.0 >
              data_preprocessing_fe_B.newNonCorePointsTot) {
            data_preprocessing_fe_B.jA = 0;
            data_preprocessing_fe_B.i = 0;
          } else {
            data_preprocessing_fe_B.jA = static_cast<int32_T>
              (data_preprocessing_fe_B.numNonCorePoints + 1.0) - 1;
            data_preprocessing_fe_B.i = static_cast<int32_T>
              (data_preprocessing_fe_B.newNonCorePointsTot);
          }

          data_preprocessing_fe_B.loop_ub = data_preprocessing_fe_B.i - data_preprocessing_fe_B.jA;
          for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
               data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
            data_preprocessing_fe_B.clustering[data_preprocessing_fe_B.numClusters].
              nonCorePoints.y[data_preprocessing_fe_B.jA + data_preprocessing_fe_B.vstride] =
              data_preprocessing_fe_B.data_data[data_preprocessing_fe_B.u_data[data_preprocessing_fe_B.vstride]
              + data_preprocessing_fe_B.sizes_idx_0];
          }

          if (data_preprocessing_fe_B.numNonCorePoints + 1.0 >
              data_preprocessing_fe_B.newNonCorePointsTot) {
            data_preprocessing_fe_B.jBcol = 0;
            data_preprocessing_fe_B.vstride = 0;
          } else {
            data_preprocessing_fe_B.jBcol = static_cast<int32_T>
              (data_preprocessing_fe_B.numNonCorePoints + 1.0) - 1;
            data_preprocessing_fe_B.vstride = static_cast<int32_T>
              (data_preprocessing_fe_B.newNonCorePointsTot);
          }

          data_preprocessing_fe_eml_find(data_preprocessing_fe_B.logicalIndex_data,
                                &data_preprocessing_fe_B.logicalIndex_size,
                                data_preprocessing_fe_B.tmp_data_c,
                                &data_preprocessing_fe_B.tmp_size_d);
          data_preprocessing_fe_B.loop_ub = data_preprocessing_fe_B.vstride - data_preprocessing_fe_B.jBcol;
          for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
               data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
            data_preprocessing_fe_B.clustering[data_preprocessing_fe_B.numClusters].
              nonCorePoints.b_index[data_preprocessing_fe_B.jBcol +
              data_preprocessing_fe_B.vstride] =
              data_preprocessing_fe_B.tmp_data_c[data_preprocessing_fe_B.vstride];
          }

          data_preprocessing_fe_B.numCorePoints = data_preprocessing_fe_B.newCorePointsTot;
          data_preprocessing_fe_B.numNonCorePoints = data_preprocessing_fe_B.newNonCorePointsTot;
        }

        if (data_preprocessing_fe_B.numCorePoints + data_preprocessing_fe_B.numNonCorePoints <
            data_preprocessing_fe_P.minPoints_Value) {
          for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 2000;
               data_preprocessing_fe_B.vstride++) {
            data_preprocessing_fe_B.b_s.corePoints.x[data_preprocessing_fe_B.vstride] = (rtNaN);
            data_preprocessing_fe_B.b_s.corePoints.y[data_preprocessing_fe_B.vstride] = (rtNaN);
            data_preprocessing_fe_B.b_s.corePoints.b_index[data_preprocessing_fe_B.vstride] =
              (rtNaN);
            data_preprocessing_fe_B.b_s.nonCorePoints.x[data_preprocessing_fe_B.vstride] = (rtNaN);
            data_preprocessing_fe_B.b_s.nonCorePoints.y[data_preprocessing_fe_B.vstride] = (rtNaN);
            data_preprocessing_fe_B.b_s.nonCorePoints.b_index[data_preprocessing_fe_B.vstride] =
              (rtNaN);
          }

          data_preprocessing_fe_B.clustering[data_preprocessing_fe_B.numClusters] =
            data_preprocessing_fe_B.b_s;
          data_preprocessing_fe_B.numClusters--;
        }
      }
    }

    data_preprocessing_fe_emxFree_real_T(&neighbouringDistance);

    // MATLAB Function: '<S9>/LiDAR Clustering'
    data_preprocessing_fe_B.c_s.numPoints = 0.0;
    memset(&data_preprocessing_fe_B.c_s.y[0], 0, 750U * sizeof(real_T));
    memset(&data_preprocessing_fe_B.c_s.x[0], 0, 750U * sizeof(real_T));
    for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i < 10; data_preprocessing_fe_B.i++) {
      data_preprocessing_fe_B.rtb_clusters_ClusterList[data_preprocessing_fe_B.i] =
        data_preprocessing_fe_B.c_s;
    }

    for (data_preprocessing_fe_B.numAssignments = 0; data_preprocessing_fe_B.numAssignments <=
         data_preprocessing_fe_B.numClusters; data_preprocessing_fe_B.numAssignments++) {
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 2000;
           data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.sensorData[data_preprocessing_fe_B.vstride] =
          data_preprocessing_fe_B.clustering[data_preprocessing_fe_B.numAssignments]
          .corePoints.x[data_preprocessing_fe_B.vstride];
        data_preprocessing_fe_B.sensorData[data_preprocessing_fe_B.vstride + 2000] =
          data_preprocessing_fe_B.clustering[data_preprocessing_fe_B.numAssignments].
          nonCorePoints.x[data_preprocessing_fe_B.vstride];
        data_preprocessing_fe_B.sensorData_data[data_preprocessing_fe_B.vstride] =
          data_preprocessing_fe_B.clustering[data_preprocessing_fe_B.numAssignments]
          .corePoints.y[data_preprocessing_fe_B.vstride];
        data_preprocessing_fe_B.sensorData_data[data_preprocessing_fe_B.vstride + 2000] =
          data_preprocessing_fe_B.clustering[data_preprocessing_fe_B.numAssignments].
          nonCorePoints.y[data_preprocessing_fe_B.vstride];
      }

      data_preprocessing_fe_B.vstride = 0;
      for (data_preprocessing_fe_B.jA = 0; data_preprocessing_fe_B.jA < 4000; data_preprocessing_fe_B.jA++)
      {
        data_preprocessing_fe_B.empty_non_axis_sizes = rtIsNaN
          (data_preprocessing_fe_B.sensorData[data_preprocessing_fe_B.jA]);
        data_preprocessing_fe_B.nz[data_preprocessing_fe_B.jA] = static_cast<int8_T>
          (data_preprocessing_fe_B.empty_non_axis_sizes);
        data_preprocessing_fe_B.b_nz[data_preprocessing_fe_B.jA] = static_cast<int8_T>(rtIsNaN
          (data_preprocessing_fe_B.sensorData_data[data_preprocessing_fe_B.jA]));
        if (!data_preprocessing_fe_B.empty_non_axis_sizes) {
          data_preprocessing_fe_B.vstride++;
        }
      }

      data_preprocessing_fe_B.kAcol = 0;
      for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i < 4000; data_preprocessing_fe_B.i++) {
        if (data_preprocessing_fe_B.nz[data_preprocessing_fe_B.i] == 0) {
          data_preprocessing_fe_B.tmp_data[data_preprocessing_fe_B.kAcol] = data_preprocessing_fe_B.i;
          data_preprocessing_fe_B.kAcol++;
        }
      }

      data_preprocessing_fe_B.loop_ub = data_preprocessing_fe_B.vstride;
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
           data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.rtb_clusters_ClusterList[data_preprocessing_fe_B.numAssignments]
          .x[data_preprocessing_fe_B.vstride] =
          data_preprocessing_fe_B.sensorData[data_preprocessing_fe_B.tmp_data[data_preprocessing_fe_B.vstride]];
      }

      data_preprocessing_fe_B.vstride = 0;
      for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i < 4000; data_preprocessing_fe_B.i++) {
        if (data_preprocessing_fe_B.b_nz[data_preprocessing_fe_B.i] == 0) {
          data_preprocessing_fe_B.vstride++;
        }
      }

      data_preprocessing_fe_B.kAcol = 0;
      for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i < 4000; data_preprocessing_fe_B.i++) {
        if (data_preprocessing_fe_B.b_nz[data_preprocessing_fe_B.i] == 0) {
          data_preprocessing_fe_B.tmp_data_m[data_preprocessing_fe_B.kAcol] = data_preprocessing_fe_B.i;
          data_preprocessing_fe_B.kAcol++;
        }
      }

      data_preprocessing_fe_B.loop_ub = data_preprocessing_fe_B.vstride;
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
           data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.rtb_clusters_ClusterList[data_preprocessing_fe_B.numAssignments]
          .y[data_preprocessing_fe_B.vstride] =
          data_preprocessing_fe_B.sensorData_data[data_preprocessing_fe_B.tmp_data_m[data_preprocessing_fe_B.vstride]];
      }

      data_preprocessing_fe_B.vstride = 0;
      for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i < 4000; data_preprocessing_fe_B.i++) {
        if (data_preprocessing_fe_B.nz[data_preprocessing_fe_B.i] == 0) {
          data_preprocessing_fe_B.vstride++;
        }
      }

      data_preprocessing_fe_B.rtb_clusters_ClusterList[data_preprocessing_fe_B.numAssignments].
        numPoints = data_preprocessing_fe_B.vstride;
    }

    // MATLAB Function: '<S13>/2D Cluster Processing' incorporates:
    //   MATLAB Function: '<S9>/LiDAR Clustering'

    for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i < 20; data_preprocessing_fe_B.i++) {
      data_preprocessing_fe_B.rtb_clusterMeasurement_ClusterB[data_preprocessing_fe_B.i] = tmp_2;
    }

    for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i <= data_preprocessing_fe_B.numClusters;
         data_preprocessing_fe_B.i++) {
      data_preprocessing_fe_B.numCorePoints =
        data_preprocessing_fe_B.rtb_clusters_ClusterList[data_preprocessing_fe_B.i].numPoints;
      if (data_preprocessing_fe_B.numCorePoints < 1.0) {
        data_preprocessing_fe_B.vstride = 0;
      } else {
        data_preprocessing_fe_B.vstride = static_cast<int32_T>
          (data_preprocessing_fe_B.numCorePoints);
      }

      if (data_preprocessing_fe_B.vstride == 0) {
        data_preprocessing_fe_B.numNonCorePoints = 0.0;
      } else {
        data_preprocessing_fe_B.numNonCorePoints =
          data_preprocessing_fe_B.rtb_clusters_ClusterList[data_preprocessing_fe_B.i].y[0];
        for (data_preprocessing_fe_B.jA = 2; data_preprocessing_fe_B.jA <= data_preprocessing_fe_B.vstride;
             data_preprocessing_fe_B.jA++) {
          data_preprocessing_fe_B.numNonCorePoints +=
            data_preprocessing_fe_B.rtb_clusters_ClusterList[data_preprocessing_fe_B.i]
            .y[data_preprocessing_fe_B.jA - 1];
        }
      }

      data_preprocessing_fe_B.rtb_clusterMeasurement_ClusterB[data_preprocessing_fe_B.i].y =
        data_preprocessing_fe_B.numNonCorePoints / static_cast<real_T>
        (data_preprocessing_fe_B.vstride);
      if (data_preprocessing_fe_B.numCorePoints < 1.0) {
        data_preprocessing_fe_B.vstride = 0;
      } else {
        data_preprocessing_fe_B.vstride = static_cast<int32_T>
          (data_preprocessing_fe_B.numCorePoints);
      }

      if (data_preprocessing_fe_B.vstride == 0) {
        data_preprocessing_fe_B.numNonCorePoints = 0.0;
      } else {
        data_preprocessing_fe_B.numNonCorePoints =
          data_preprocessing_fe_B.rtb_clusters_ClusterList[data_preprocessing_fe_B.i].x[0];
        for (data_preprocessing_fe_B.jj = 2; data_preprocessing_fe_B.jj <= data_preprocessing_fe_B.vstride;
             data_preprocessing_fe_B.jj++) {
          data_preprocessing_fe_B.numNonCorePoints +=
            data_preprocessing_fe_B.rtb_clusters_ClusterList[data_preprocessing_fe_B.i]
            .x[data_preprocessing_fe_B.jj - 1];
        }
      }

      data_preprocessing_fe_B.rtb_clusterMeasurement_ClusterB[data_preprocessing_fe_B.i].x =
        data_preprocessing_fe_B.numNonCorePoints / static_cast<real_T>
        (data_preprocessing_fe_B.vstride);
      if (data_preprocessing_fe_B.numCorePoints < 1.0) {
        data_preprocessing_fe_B.loop_ub = -1;
      } else {
        data_preprocessing_fe_B.loop_ub = static_cast<int32_T>
          (data_preprocessing_fe_B.numCorePoints) - 1;
      }

      data_preprocessing_fe_B.rtb_clusters_ClusterList_size[0] = 1;
      data_preprocessing_fe_B.rtb_clusters_ClusterList_size[1] = data_preprocessing_fe_B.loop_ub +
        1;
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <=
           data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.rtb_clusters_ClusterList_data[data_preprocessing_fe_B.vstride] =
          data_preprocessing_fe_B.rtb_clusters_ClusterList[data_preprocessing_fe_B.i]
          .y[data_preprocessing_fe_B.vstride];
      }

      if (data_preprocessing_fe_B.numCorePoints < 1.0) {
        data_preprocessing_fe_B.loop_ub = -1;
      } else {
        data_preprocessing_fe_B.loop_ub = static_cast<int32_T>
          (data_preprocessing_fe_B.numCorePoints) - 1;
      }

      data_preprocessing_fe_B.rtb_clusters_ClusterList_size_d[0] = 1;
      data_preprocessing_fe_B.rtb_clusters_ClusterList_size_d[1] = data_preprocessing_fe_B.loop_ub
        + 1;
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <=
           data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.rtb_clusters_ClusterList_data_c[data_preprocessing_fe_B.vstride] =
          data_preprocessing_fe_B.rtb_clusters_ClusterList[data_preprocessing_fe_B.i]
          .y[data_preprocessing_fe_B.vstride];
      }

      data_preprocessing_fe_B.rtb_clusterMeasurement_ClusterB[data_preprocessing_fe_B.i].width =
        fabs(data_preprocessing_fe_maximum(data_preprocessing_fe_B.rtb_clusters_ClusterList_data,
              data_preprocessing_fe_B.rtb_clusters_ClusterList_size) -
             data_preprocessing_fe_minimum(data_preprocessing_fe_B.rtb_clusters_ClusterList_data_c,
              data_preprocessing_fe_B.rtb_clusters_ClusterList_size_d));
      if (data_preprocessing_fe_B.numCorePoints < 1.0) {
        data_preprocessing_fe_B.loop_ub = -1;
      } else {
        data_preprocessing_fe_B.loop_ub = static_cast<int32_T>
          (data_preprocessing_fe_B.numCorePoints) - 1;
      }

      data_preprocessing_fe_B.rtb_clusters_ClusterList_size[0] = 1;
      data_preprocessing_fe_B.rtb_clusters_ClusterList_size[1] = data_preprocessing_fe_B.loop_ub +
        1;
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <=
           data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.rtb_clusters_ClusterList_data[data_preprocessing_fe_B.vstride] =
          data_preprocessing_fe_B.rtb_clusters_ClusterList[data_preprocessing_fe_B.i]
          .x[data_preprocessing_fe_B.vstride];
      }

      if (data_preprocessing_fe_B.numCorePoints < 1.0) {
        data_preprocessing_fe_B.loop_ub = -1;
      } else {
        data_preprocessing_fe_B.loop_ub = static_cast<int32_T>
          (data_preprocessing_fe_B.numCorePoints) - 1;
      }

      data_preprocessing_fe_B.rtb_clusters_ClusterList_size_d[0] = 1;
      data_preprocessing_fe_B.rtb_clusters_ClusterList_size_d[1] = data_preprocessing_fe_B.loop_ub
        + 1;
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <=
           data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.rtb_clusters_ClusterList_data_c[data_preprocessing_fe_B.vstride] =
          data_preprocessing_fe_B.rtb_clusters_ClusterList[data_preprocessing_fe_B.i]
          .x[data_preprocessing_fe_B.vstride];
      }

      data_preprocessing_fe_B.rtb_clusterMeasurement_ClusterB[data_preprocessing_fe_B.i].length =
        fabs(data_preprocessing_fe_maximum(data_preprocessing_fe_B.rtb_clusters_ClusterList_data,
              data_preprocessing_fe_B.rtb_clusters_ClusterList_size) -
             data_preprocessing_fe_minimum(data_preprocessing_fe_B.rtb_clusters_ClusterList_data_c,
              data_preprocessing_fe_B.rtb_clusters_ClusterList_size_d));
    }

    // End of MATLAB Function: '<S13>/2D Cluster Processing'
    data_preprocessing_fe_emxInit_real_T(&detections, 2);
    data_preprocessing_fe_B.i_l = detections->size[0] * detections->size[1];

    // MATLAB Function: '<S13>/2D Measurement to Track Assignment' incorporates:
    //   MATLAB Function: '<S9>/LiDAR Clustering'

    detections->size[0] = data_preprocessing_fe_B.numClusters + 1;
    detections->size[1] = 4;
    hokuyo_emxEnsureCapacity_real_T(detections, data_preprocessing_fe_B.i_l);

    // MATLAB Function: '<S13>/2D Measurement to Track Assignment' incorporates:
    //   UnitDelay: '<S13>/Unit Delay'

    data_preprocessing_fe_B.jj = static_cast<int32_T>
      (data_preprocessing_fe_DW.UnitDelay_DSTATE.numTracks);
    data_preprocessing_fe_emxInit_real_T(&tracksData, 2);
    data_preprocessing_fe_B.i_l = tracksData->size[0] * tracksData->size[1];

    // MATLAB Function: '<S13>/2D Measurement to Track Assignment' incorporates:
    //   UnitDelay: '<S13>/Unit Delay'

    tracksData->size[0] = static_cast<int32_T>
      (data_preprocessing_fe_DW.UnitDelay_DSTATE.numTracks);
    tracksData->size[1] = 4;
    hokuyo_emxEnsureCapacity_real_T(tracksData, data_preprocessing_fe_B.i_l);
    data_preprocessing_fe_emxInit_real_T(&costMatrix, 2);
    data_preprocessing_fe_B.i_l = costMatrix->size[0] * costMatrix->size[1];

    // MATLAB Function: '<S13>/2D Measurement to Track Assignment' incorporates:
    //   MATLAB Function: '<S9>/LiDAR Clustering'
    //   UnitDelay: '<S13>/Unit Delay'

    costMatrix->size[0] = static_cast<int32_T>
      (data_preprocessing_fe_DW.UnitDelay_DSTATE.numTracks);
    costMatrix->size[1] = data_preprocessing_fe_B.numClusters + 1;
    hokuyo_emxEnsureCapacity_real_T(costMatrix, data_preprocessing_fe_B.i_l);

    // MATLAB Function: '<S13>/2D Measurement to Track Assignment' incorporates:
    //   MATLAB Function: '<S9>/LiDAR Clustering'
    //   UnitDelay: '<S13>/Unit Delay'

    for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i < 20; data_preprocessing_fe_B.i++) {
      data_preprocessing_fe_B.rtb_matchedClusters_ClusterBoun[data_preprocessing_fe_B.i] = tmp_2;
    }

    memset(&data_preprocessing_fe_B.track.stateVector[0], 0, sizeof(real_T) << 3U);
    memset(&data_preprocessing_fe_B.track.stateCovariance[0], 0, sizeof(real_T) << 6U);
    for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 5;
         data_preprocessing_fe_B.vstride++) {
      data_preprocessing_fe_B.track.count[data_preprocessing_fe_B.vstride] = 0.0;
    }

    data_preprocessing_fe_B.track.confirmedTrack = false;
    for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i < 20; data_preprocessing_fe_B.i++) {
      data_preprocessing_fe_B.rtb_tracks_TrackList[data_preprocessing_fe_B.i] =
        data_preprocessing_fe_B.track;
    }

    for (data_preprocessing_fe_B.numAssignments = 0; data_preprocessing_fe_B.numAssignments <=
         data_preprocessing_fe_B.numClusters; data_preprocessing_fe_B.numAssignments++) {
      detections->data[data_preprocessing_fe_B.numAssignments] =
        data_preprocessing_fe_B.rtb_clusterMeasurement_ClusterB[data_preprocessing_fe_B.numAssignments]
        .y;
      detections->data[data_preprocessing_fe_B.numAssignments + detections->size[0]] =
        data_preprocessing_fe_B.rtb_clusterMeasurement_ClusterB[data_preprocessing_fe_B.numAssignments]
        .x;
      detections->data[data_preprocessing_fe_B.numAssignments + (detections->size[0] << 1)]
        =
        data_preprocessing_fe_B.rtb_clusterMeasurement_ClusterB[data_preprocessing_fe_B.numAssignments]
        .width;
      detections->data[data_preprocessing_fe_B.numAssignments + detections->size[0] * 3] =
        data_preprocessing_fe_B.rtb_clusterMeasurement_ClusterB[data_preprocessing_fe_B.numAssignments]
        .length;
    }

    for (data_preprocessing_fe_B.jA = 0; data_preprocessing_fe_B.jA < data_preprocessing_fe_B.jj;
         data_preprocessing_fe_B.jA++) {
      tracksData->data[data_preprocessing_fe_B.jA] =
        data_preprocessing_fe_DW.UnitDelay_DSTATE.TrackList[data_preprocessing_fe_B.jA].
        stateVector[0];
      tracksData->data[data_preprocessing_fe_B.jA + tracksData->size[0]] =
        data_preprocessing_fe_DW.UnitDelay_DSTATE.TrackList[data_preprocessing_fe_B.jA].
        stateVector[2];
      tracksData->data[data_preprocessing_fe_B.jA + (tracksData->size[0] << 1)] =
        data_preprocessing_fe_DW.UnitDelay_DSTATE.TrackList[data_preprocessing_fe_B.jA].
        stateVector[4];
      tracksData->data[data_preprocessing_fe_B.jA + tracksData->size[0] * 3] =
        data_preprocessing_fe_DW.UnitDelay_DSTATE.TrackList[data_preprocessing_fe_B.jA].
        stateVector[6];
    }

    data_preprocessing_fe_B.numAssignments = static_cast<int32_T>(-((-1.0 -
      data_preprocessing_fe_DW.UnitDelay_DSTATE.numTracks) + 1.0));
    data_preprocessing_fe_emxInit_real_T(&b_y, 1);
    data_preprocessing_fe_emxInit_real_T(&b_x, 2);
    data_preprocessing_fe_emxInit_real_T(&detections_0, 2);

    // MATLAB Function: '<S13>/2D Measurement to Track Assignment' incorporates:
    //   UnitDelay: '<S13>/Unit Delay'

    for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i < data_preprocessing_fe_B.numAssignments;
         data_preprocessing_fe_B.i++) {
      data_preprocessing_fe_B.numNonCorePoints =
        data_preprocessing_fe_DW.UnitDelay_DSTATE.numTracks - static_cast<real_T>
        (data_preprocessing_fe_B.i);
      data_preprocessing_fe_B.numClusters = detections->size[0];
      data_preprocessing_fe_B.i_l = detections_0->size[0] * detections_0->size[1];
      detections_0->size[0] = detections->size[0];
      detections_0->size[1] = 4;
      hokuyo_emxEnsureCapacity_real_T(detections_0, data_preprocessing_fe_B.i_l);
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 4;
           data_preprocessing_fe_B.vstride++) {
        for (data_preprocessing_fe_B.jj = 0; data_preprocessing_fe_B.jj <
             data_preprocessing_fe_B.numClusters; data_preprocessing_fe_B.jj++) {
          detections_0->data[data_preprocessing_fe_B.jj + detections_0->size[0] *
            data_preprocessing_fe_B.vstride] = detections->data[detections->size[0] *
            data_preprocessing_fe_B.vstride + data_preprocessing_fe_B.jj] - tracksData->data
            [(tracksData->size[0] * data_preprocessing_fe_B.vstride + static_cast<int32_T>
              (data_preprocessing_fe_B.numNonCorePoints)) - 1];
        }
      }

      data_preprocessing_fe_B.i_l = b_x->size[0] * b_x->size[1];
      b_x->size[0] = detections_0->size[0];
      b_x->size[1] = 4;
      hokuyo_emxEnsureCapacity_real_T(b_x, data_preprocessing_fe_B.i_l);
      data_preprocessing_fe_B.loop_ub = detections_0->size[0] << 2;
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
           data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.numCorePoints = detections_0->data[data_preprocessing_fe_B.vstride];
        b_x->data[data_preprocessing_fe_B.vstride] = data_preprocessing_fe_B.numCorePoints *
          data_preprocessing_fe_B.numCorePoints;
      }

      if (b_x->size[0] == 0) {
        b_y->size[0] = 0;
      } else {
        data_preprocessing_fe_B.vstride = b_x->size[0];
        data_preprocessing_fe_B.i_l = b_y->size[0];
        b_y->size[0] = b_x->size[0];
        hokuyo_emxEnsureCapacity_real_T(b_y, data_preprocessing_fe_B.i_l);
        memcpy(&b_y->data[0], &b_x->data[0], static_cast<uint32_T>
               (data_preprocessing_fe_B.vstride) * sizeof(real_T));
        for (data_preprocessing_fe_B.jj = 0; data_preprocessing_fe_B.jj < 3; data_preprocessing_fe_B.jj++)
        {
          data_preprocessing_fe_B.numClusters = (data_preprocessing_fe_B.jj + 1) *
            data_preprocessing_fe_B.vstride;
          for (data_preprocessing_fe_B.loop_ub = 0; data_preprocessing_fe_B.loop_ub <
               data_preprocessing_fe_B.vstride; data_preprocessing_fe_B.loop_ub++) {
            b_y->data[data_preprocessing_fe_B.loop_ub] += b_x->
              data[data_preprocessing_fe_B.numClusters + data_preprocessing_fe_B.loop_ub];
          }
        }
      }

      data_preprocessing_fe_B.vstride = b_y->size[0];
      for (data_preprocessing_fe_B.jj = 0; data_preprocessing_fe_B.jj < data_preprocessing_fe_B.vstride;
           data_preprocessing_fe_B.jj++) {
        b_y->data[data_preprocessing_fe_B.jj] = sqrt(b_y->data[data_preprocessing_fe_B.jj]);
      }

      data_preprocessing_fe_B.loop_ub = costMatrix->size[1];
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
           data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
        costMatrix->data[(static_cast<int32_T>(data_preprocessing_fe_B.numNonCorePoints)
                          + costMatrix->size[0] * data_preprocessing_fe_B.vstride) - 1] =
          b_y->data[data_preprocessing_fe_B.vstride];
      }
    }

    data_preprocessing_fe_emxFree_real_T(&detections_0);
    data_preprocessing_fe_emxFree_real_T(&b_x);
    data_preprocessing_fe_emxFree_real_T(&tracksData);
    data_preprocessing_fe_emxFree_real_T(&detections);
    data_preprocessing_fe_emxInit_uint32_T(&unassignedTracks, 1);
    data_preprocessing_fe_emxInit_uint32_T(&unassignedDetections, 1);
    data_preprocessing_fe_emxInit_uint32_T(&assignments, 2);
    data_preprocessing_fe_emxInit_uint32_T(&y, 2);
    data_preprocessing_fe_emxInit_real_T(&paddedCost, 2);
    data_preprocessing_fe_emxInit_int32_T(&ii, 1);
    data_preprocessing_fe_emxInit_int32_T(&jj, 1);
    data_preprocessing_fe_emxInit_boolean_T(&r, 1);
    data_preprocessing_fe_emxInit_boolean_T(&s, 1);
    data_preprocessing_fe_emxInit_boolean_T(&tmp, 1);
    data_preprocessing_fe_emxInit_boolean_T(&tmp_0, 1);
    data_preprocessing_fe_emxInit_int32_T(&tmp_1, 1);
    data_preprocessing_fe_emxInit_uint32_T(&b_y_0, 2);
    data_preprocessing_fe_emxInit_boolean_T(&tmp_3, 2);

    // MATLAB Function: '<S13>/2D Measurement to Track Assignment'
    if ((costMatrix->size[0] == 0) || (costMatrix->size[1] == 0)) {
      assignments->size[0] = 0;
      assignments->size[1] = 2;
      if (costMatrix->size[0] < 1) {
        y->size[0] = 1;
        y->size[1] = 0;
      } else {
        data_preprocessing_fe_B.i_l = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = costMatrix->size[0];
        hoku_emxEnsureCapacity_uint32_T(y, data_preprocessing_fe_B.i_l);
        data_preprocessing_fe_B.loop_ub = costMatrix->size[0] - 1;
        for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <=
             data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
          y->data[data_preprocessing_fe_B.vstride] = static_cast<uint32_T>
            (data_preprocessing_fe_B.vstride) + 1U;
        }
      }

      data_preprocessing_fe_B.i_l = unassignedTracks->size[0];
      unassignedTracks->size[0] = y->size[1];
      hoku_emxEnsureCapacity_uint32_T(unassignedTracks, data_preprocessing_fe_B.i_l);
      data_preprocessing_fe_B.loop_ub = y->size[1];
      if (data_preprocessing_fe_B.loop_ub - 1 >= 0) {
        memcpy(&unassignedTracks->data[0], &y->data[0], static_cast<uint32_T>
               (data_preprocessing_fe_B.loop_ub) * sizeof(uint32_T));
      }

      if (costMatrix->size[1] < 1) {
        y->size[0] = 1;
        y->size[1] = 0;
      } else {
        data_preprocessing_fe_B.i_l = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = costMatrix->size[1];
        hoku_emxEnsureCapacity_uint32_T(y, data_preprocessing_fe_B.i_l);
        data_preprocessing_fe_B.loop_ub = costMatrix->size[1] - 1;
        for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <=
             data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
          y->data[data_preprocessing_fe_B.vstride] = static_cast<uint32_T>
            (data_preprocessing_fe_B.vstride) + 1U;
        }
      }

      data_preprocessing_fe_B.i_l = unassignedDetections->size[0];
      unassignedDetections->size[0] = y->size[1];
      hoku_emxEnsureCapacity_uint32_T(unassignedDetections, data_preprocessing_fe_B.i_l);
      data_preprocessing_fe_B.loop_ub = y->size[1];
      if (data_preprocessing_fe_B.loop_ub - 1 >= 0) {
        memcpy(&unassignedDetections->data[0], &y->data[0], static_cast<uint32_T>
               (data_preprocessing_fe_B.loop_ub) * sizeof(uint32_T));
      }
    } else {
      data_preprocessing_fe_B.jBcol = costMatrix->size[0] * costMatrix->size[1] - 1;
      for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i <= data_preprocessing_fe_B.jBcol;
           data_preprocessing_fe_B.i++) {
        if (rtIsInf(costMatrix->data[data_preprocessing_fe_B.i])) {
          costMatrix->data[data_preprocessing_fe_B.i] = 1.7976931348623157E+308;
        }
      }

      data_preprocessing_fe_B.jA = costMatrix->size[0] + costMatrix->size[1];
      data_preprocessing_fe_B.i_l = paddedCost->size[0] * paddedCost->size[1];
      paddedCost->size[0] = data_preprocessing_fe_B.jA;
      paddedCost->size[1] = data_preprocessing_fe_B.jA;
      hokuyo_emxEnsureCapacity_real_T(paddedCost, data_preprocessing_fe_B.i_l);
      data_preprocessing_fe_B.loop_ub = data_preprocessing_fe_B.jA * data_preprocessing_fe_B.jA;
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
           data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
        paddedCost->data[data_preprocessing_fe_B.vstride] = 1.7976931348623157E+308;
      }

      data_preprocessing_fe_B.loop_ub = costMatrix->size[1];
      data_preprocessing_fe_B.numAssignments = costMatrix->size[0];
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
           data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
        for (data_preprocessing_fe_B.jj = 0; data_preprocessing_fe_B.jj <
             data_preprocessing_fe_B.numAssignments; data_preprocessing_fe_B.jj++) {
          paddedCost->data[data_preprocessing_fe_B.jj + paddedCost->size[0] *
            data_preprocessing_fe_B.vstride] = costMatrix->data[costMatrix->size[0] *
            data_preprocessing_fe_B.vstride + data_preprocessing_fe_B.jj];
        }
      }

      data_preprocessing_fe_B.loop_ub = costMatrix->size[0];
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
           data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
        paddedCost->data[data_preprocessing_fe_B.vstride + paddedCost->size[0] *
          (costMatrix->size[1] + data_preprocessing_fe_B.vstride)] = 0.6;
      }

      data_preprocessing_fe_B.jA = costMatrix->size[1];
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
           data_preprocessing_fe_B.jA; data_preprocessing_fe_B.vstride++) {
        paddedCost->data[(costMatrix->size[0] + data_preprocessing_fe_B.vstride) +
          paddedCost->size[0] * data_preprocessing_fe_B.vstride] = 0.6;
      }

      if (static_cast<uint32_T>(costMatrix->size[0]) + 1U > static_cast<uint32_T>
          (paddedCost->size[0])) {
        data_preprocessing_fe_B.jA = 0;
        data_preprocessing_fe_B.i = 0;
      } else {
        data_preprocessing_fe_B.jA = costMatrix->size[0];
        data_preprocessing_fe_B.i = paddedCost->size[0];
      }

      if (static_cast<uint32_T>(costMatrix->size[1]) + 1U > static_cast<uint32_T>
          (paddedCost->size[1])) {
        data_preprocessing_fe_B.jBcol = 0;
        data_preprocessing_fe_B.vstride = 0;
      } else {
        data_preprocessing_fe_B.jBcol = costMatrix->size[1];
        data_preprocessing_fe_B.vstride = paddedCost->size[1];
      }

      data_preprocessing_fe_B.numAssignments = data_preprocessing_fe_B.i - data_preprocessing_fe_B.jA;
      data_preprocessing_fe_B.numClusters = data_preprocessing_fe_B.vstride - data_preprocessing_fe_B.jBcol;
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
           data_preprocessing_fe_B.numClusters; data_preprocessing_fe_B.vstride++) {
        for (data_preprocessing_fe_B.jj = 0; data_preprocessing_fe_B.jj <
             data_preprocessing_fe_B.numAssignments; data_preprocessing_fe_B.jj++) {
          paddedCost->data[(data_preprocessing_fe_B.jA + data_preprocessing_fe_B.jj) +
            paddedCost->size[0] * (data_preprocessing_fe_B.jBcol + data_preprocessing_fe_B.vstride)]
            = 0.0;
        }
      }

      hokuyoTrack_hungarianAssignment(paddedCost, tmp_3);
      data_preprocessing_fe_eml_find_d(tmp_3, ii, jj);
      data_preprocessing_fe_B.i_l = b_y->size[0];
      b_y->size[0] = ii->size[0];
      hokuyo_emxEnsureCapacity_real_T(b_y, data_preprocessing_fe_B.i_l);
      data_preprocessing_fe_B.loop_ub = ii->size[0];
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
           data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
        b_y->data[data_preprocessing_fe_B.vstride] = ii->data[data_preprocessing_fe_B.vstride];
      }

      data_preprocessing_fe_B.i_l = ii->size[0];
      ii->size[0] = b_y->size[0];
      hokuy_emxEnsureCapacity_int32_T(ii, data_preprocessing_fe_B.i_l);
      data_preprocessing_fe_B.loop_ub = b_y->size[0];
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
           data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
        ii->data[data_preprocessing_fe_B.vstride] = static_cast<int32_T>(b_y->
          data[data_preprocessing_fe_B.vstride]);
      }

      data_preprocessing_fe_B.numAssignments = costMatrix->size[0];
      data_preprocessing_fe_B.i_l = r->size[0];
      r->size[0] = ii->size[0];
      hok_emxEnsureCapacity_boolean_T(r, data_preprocessing_fe_B.i_l);
      data_preprocessing_fe_B.loop_ub = ii->size[0];
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
           data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
        r->data[data_preprocessing_fe_B.vstride] = (ii->data[data_preprocessing_fe_B.vstride] <=
          data_preprocessing_fe_B.numAssignments);
      }

      if (r->size[0] == jj->size[0]) {
        data_preprocessing_fe_B.numAssignments = costMatrix->size[1];
        data_preprocessing_fe_B.i_l = s->size[0];
        s->size[0] = r->size[0];
        hok_emxEnsureCapacity_boolean_T(s, data_preprocessing_fe_B.i_l);
        data_preprocessing_fe_B.loop_ub = r->size[0];
        for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
             data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
          s->data[data_preprocessing_fe_B.vstride] = (r->data[data_preprocessing_fe_B.vstride] &&
            (jj->data[data_preprocessing_fe_B.vstride] > data_preprocessing_fe_B.numAssignments));
        }
      } else {
        hokuyoTra_binary_expand_op_dezv(s, r, jj, costMatrix);
      }

      data_preprocessing_fe_B.jBcol = s->size[0] - 1;
      data_preprocessing_fe_B.vstride = 0;
      for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i <= data_preprocessing_fe_B.jBcol;
           data_preprocessing_fe_B.i++) {
        if (s->data[data_preprocessing_fe_B.i]) {
          data_preprocessing_fe_B.vstride++;
        }
      }

      data_preprocessing_fe_B.i_l = unassignedTracks->size[0];
      unassignedTracks->size[0] = data_preprocessing_fe_B.vstride;
      hoku_emxEnsureCapacity_uint32_T(unassignedTracks, data_preprocessing_fe_B.i_l);
      data_preprocessing_fe_B.kAcol = 0;
      for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i <= data_preprocessing_fe_B.jBcol;
           data_preprocessing_fe_B.i++) {
        if (s->data[data_preprocessing_fe_B.i]) {
          data_preprocessing_fe_B.vstride = static_cast<int32_T>(b_y->
            data[data_preprocessing_fe_B.i]);
          if (data_preprocessing_fe_B.vstride >= 0) {
            unassignedTracks->data[data_preprocessing_fe_B.kAcol] = static_cast<uint32_T>
              (data_preprocessing_fe_B.vstride);
          } else {
            unassignedTracks->data[data_preprocessing_fe_B.kAcol] = 0U;
          }

          data_preprocessing_fe_B.kAcol++;
        }
      }

      data_preprocessing_fe_B.numAssignments = costMatrix->size[1];
      data_preprocessing_fe_B.i_l = s->size[0];
      s->size[0] = jj->size[0];
      hok_emxEnsureCapacity_boolean_T(s, data_preprocessing_fe_B.i_l);
      data_preprocessing_fe_B.loop_ub = jj->size[0];
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
           data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
        s->data[data_preprocessing_fe_B.vstride] = (jj->data[data_preprocessing_fe_B.vstride] <=
          data_preprocessing_fe_B.numAssignments);
      }

      if (s->size[0] == ii->size[0]) {
        data_preprocessing_fe_B.numAssignments = costMatrix->size[0];
        data_preprocessing_fe_B.i_l = tmp->size[0];
        tmp->size[0] = s->size[0];
        hok_emxEnsureCapacity_boolean_T(tmp, data_preprocessing_fe_B.i_l);
        data_preprocessing_fe_B.loop_ub = s->size[0];
        for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
             data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
          tmp->data[data_preprocessing_fe_B.vstride] = (s->data[data_preprocessing_fe_B.vstride] &&
            (ii->data[data_preprocessing_fe_B.vstride] > data_preprocessing_fe_B.numAssignments));
        }
      } else {
        hokuyoTrac_binary_expand_op_dez(tmp, s, ii, costMatrix);
      }

      data_preprocessing_fe_B.jBcol = tmp->size[0] - 1;
      data_preprocessing_fe_B.vstride = 0;
      for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i <= data_preprocessing_fe_B.jBcol;
           data_preprocessing_fe_B.i++) {
        if (tmp->data[data_preprocessing_fe_B.i]) {
          data_preprocessing_fe_B.vstride++;
        }
      }

      data_preprocessing_fe_B.i_l = unassignedDetections->size[0];
      unassignedDetections->size[0] = data_preprocessing_fe_B.vstride;
      hoku_emxEnsureCapacity_uint32_T(unassignedDetections, data_preprocessing_fe_B.i_l);
      data_preprocessing_fe_B.kAcol = 0;
      for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i <= data_preprocessing_fe_B.jBcol;
           data_preprocessing_fe_B.i++) {
        if (tmp->data[data_preprocessing_fe_B.i]) {
          data_preprocessing_fe_B.vstride = jj->data[data_preprocessing_fe_B.i];
          if (data_preprocessing_fe_B.vstride < 0) {
            data_preprocessing_fe_B.vstride = 0;
          }

          unassignedDetections->data[data_preprocessing_fe_B.kAcol] =
            static_cast<uint32_T>(data_preprocessing_fe_B.vstride);
          data_preprocessing_fe_B.kAcol++;
        }
      }

      if (r->size[0] == s->size[0]) {
        data_preprocessing_fe_B.i_l = tmp_0->size[0];
        tmp_0->size[0] = r->size[0];
        hok_emxEnsureCapacity_boolean_T(tmp_0, data_preprocessing_fe_B.i_l);
        data_preprocessing_fe_B.loop_ub = r->size[0];
        for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
             data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
          tmp_0->data[data_preprocessing_fe_B.vstride] = (r->data[data_preprocessing_fe_B.vstride]
            && s->data[data_preprocessing_fe_B.vstride]);
        }
      } else {
        data_preprocessing_fe_and(tmp_0, r, s);
      }

      data_preprocessing_fe_B.jBcol = tmp_0->size[0] - 1;
      data_preprocessing_fe_B.vstride = 0;
      for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i <= data_preprocessing_fe_B.jBcol;
           data_preprocessing_fe_B.i++) {
        if (tmp_0->data[data_preprocessing_fe_B.i]) {
          data_preprocessing_fe_B.vstride++;
        }
      }

      data_preprocessing_fe_B.i_l = tmp_1->size[0];
      tmp_1->size[0] = data_preprocessing_fe_B.vstride;
      hokuy_emxEnsureCapacity_int32_T(tmp_1, data_preprocessing_fe_B.i_l);
      data_preprocessing_fe_B.kAcol = 0;
      for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i <= data_preprocessing_fe_B.jBcol;
           data_preprocessing_fe_B.i++) {
        if (tmp_0->data[data_preprocessing_fe_B.i]) {
          tmp_1->data[data_preprocessing_fe_B.kAcol] = data_preprocessing_fe_B.i;
          data_preprocessing_fe_B.kAcol++;
        }
      }

      data_preprocessing_fe_B.i_l = b_y_0->size[0] * b_y_0->size[1];
      b_y_0->size[0] = b_y->size[0];
      b_y_0->size[1] = 2;
      hoku_emxEnsureCapacity_uint32_T(b_y_0, data_preprocessing_fe_B.i_l);
      data_preprocessing_fe_B.loop_ub = b_y->size[0];
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
           data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.jj = static_cast<int32_T>(b_y->
          data[data_preprocessing_fe_B.vstride]);
        if (data_preprocessing_fe_B.jj >= 0) {
          b_y_0->data[data_preprocessing_fe_B.vstride] = static_cast<uint32_T>
            (data_preprocessing_fe_B.jj);
        } else {
          b_y_0->data[data_preprocessing_fe_B.vstride] = 0U;
        }
      }

      data_preprocessing_fe_B.loop_ub = jj->size[0];
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride <
           data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.jj = jj->data[data_preprocessing_fe_B.vstride];
        if (data_preprocessing_fe_B.jj < 0) {
          data_preprocessing_fe_B.jj = 0;
        }

        b_y_0->data[data_preprocessing_fe_B.vstride + b_y->size[0]] =
          static_cast<uint32_T>(data_preprocessing_fe_B.jj);
      }

      data_preprocessing_fe_B.i_l = assignments->size[0] * assignments->size[1];
      assignments->size[0] = tmp_1->size[0];
      assignments->size[1] = 2;
      hoku_emxEnsureCapacity_uint32_T(assignments, data_preprocessing_fe_B.i_l);
      data_preprocessing_fe_B.loop_ub = tmp_1->size[0];
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 2;
           data_preprocessing_fe_B.vstride++) {
        for (data_preprocessing_fe_B.jj = 0; data_preprocessing_fe_B.jj < data_preprocessing_fe_B.loop_ub;
             data_preprocessing_fe_B.jj++) {
          assignments->data[data_preprocessing_fe_B.jj + assignments->size[0] *
            data_preprocessing_fe_B.vstride] = b_y_0->data[b_y_0->size[0] *
            data_preprocessing_fe_B.vstride + tmp_1->data[data_preprocessing_fe_B.jj]];
        }
      }

      if (assignments->size[0] == 0) {
        assignments->size[0] = 0;
        assignments->size[1] = 2;
      }
    }

    data_preprocessing_fe_emxFree_boolean_T(&tmp_3);
    data_preprocessing_fe_emxFree_uint32_T(&b_y_0);
    data_preprocessing_fe_emxFree_int32_T(&tmp_1);
    data_preprocessing_fe_emxFree_boolean_T(&tmp_0);
    data_preprocessing_fe_emxFree_boolean_T(&tmp);
    data_preprocessing_fe_emxFree_boolean_T(&s);
    data_preprocessing_fe_emxFree_boolean_T(&r);
    data_preprocessing_fe_emxFree_real_T(&b_y);
    data_preprocessing_fe_emxFree_int32_T(&jj);
    data_preprocessing_fe_emxFree_int32_T(&ii);
    data_preprocessing_fe_emxFree_real_T(&paddedCost);
    data_preprocessing_fe_emxFree_uint32_T(&y);
    data_preprocessing_fe_emxFree_real_T(&costMatrix);

    // MATLAB Function: '<S13>/2D Measurement to Track Assignment' incorporates:
    //   UnitDelay: '<S13>/Unit Delay'

    data_preprocessing_fe_B.numAssignments = assignments->size[0];
    data_preprocessing_fe_B.i = assignments->size[0];
    for (data_preprocessing_fe_B.jA = 0; data_preprocessing_fe_B.jA < data_preprocessing_fe_B.i;
         data_preprocessing_fe_B.jA++) {
      data_preprocessing_fe_B.track = data_preprocessing_fe_DW.UnitDelay_DSTATE.TrackList[
        static_cast<int32_T>(assignments->data[data_preprocessing_fe_B.jA]) - 1];
      data_preprocessing_fe_B.rtb_matchedClusters_ClusterBoun[data_preprocessing_fe_B.jA] =
        data_preprocessing_fe_B.rtb_clusterMeasurement_ClusterB[static_cast<int32_T>
        (assignments->data[data_preprocessing_fe_B.jA + assignments->size[0]]) - 1];
      memcpy(&data_preprocessing_fe_B.rtb_tracks_TrackList[data_preprocessing_fe_B.jA]
             .stateVector[0], &data_preprocessing_fe_B.track.stateVector[0], sizeof
             (real_T) << 3U);
      memcpy(&data_preprocessing_fe_B.rtb_tracks_TrackList[data_preprocessing_fe_B.jA].
             stateCovariance[0], &data_preprocessing_fe_B.track.stateCovariance[0],
             sizeof(real_T) << 6U);
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 5;
           data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.numNonCorePoints =
          data_preprocessing_fe_B.track.count[data_preprocessing_fe_B.vstride];
        data_preprocessing_fe_B.rtb_tracks_TrackList[data_preprocessing_fe_B.jA]
          .count[data_preprocessing_fe_B.vstride] = data_preprocessing_fe_B.numNonCorePoints;
        data_preprocessing_fe_B.a[data_preprocessing_fe_B.vstride] =
          data_preprocessing_fe_B.numNonCorePoints;
      }

      data_preprocessing_fe_B.a[4] = data_preprocessing_fe_B.a[3];
      data_preprocessing_fe_B.a[3] = data_preprocessing_fe_B.a[2];
      data_preprocessing_fe_B.a[2] = data_preprocessing_fe_B.a[1];
      data_preprocessing_fe_B.a[1] = data_preprocessing_fe_B.a[0];
      data_preprocessing_fe_B.a[0] =
        data_preprocessing_fe_B.rtb_tracks_TrackList[data_preprocessing_fe_B.jA].count[4];
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 5;
           data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.rtb_tracks_TrackList[data_preprocessing_fe_B.jA]
          .count[data_preprocessing_fe_B.vstride] =
          data_preprocessing_fe_B.a[data_preprocessing_fe_B.vstride];
      }

      data_preprocessing_fe_B.rtb_tracks_TrackList[data_preprocessing_fe_B.jA].count[0] = 1.0;
    }

    data_preprocessing_fe_B.loop_ub = unassignedDetections->size[0];
    for (data_preprocessing_fe_B.jA = 0; data_preprocessing_fe_B.jA < data_preprocessing_fe_B.loop_ub;
         data_preprocessing_fe_B.jA++) {
      data_preprocessing_fe_B.y = static_cast<uint32_T>(data_preprocessing_fe_B.numAssignments) +
        static_cast<uint32_T>(data_preprocessing_fe_B.jA);
      if (data_preprocessing_fe_B.y + 1U < 20U) {
        data_preprocessing_fe_B.unassignedDetections = unassignedDetections->
          data[data_preprocessing_fe_B.jA];
        data_preprocessing_fe_B.rtb_matchedClusters_ClusterBoun[static_cast<int32_T>(
          static_cast<real_T>(data_preprocessing_fe_B.y) + 1.0) - 1] =
          data_preprocessing_fe_B.rtb_clusterMeasurement_ClusterB[static_cast<int32_T>
          (data_preprocessing_fe_B.unassignedDetections) - 1];
        data_preprocessing_fe_B.rtb_tracks_TrackList[static_cast<int32_T>
          (static_cast<real_T>(data_preprocessing_fe_B.y) + 1.0) - 1].stateVector[0] =
          data_preprocessing_fe_B.rtb_clusterMeasurement_ClusterB[static_cast<int32_T>
          (data_preprocessing_fe_B.unassignedDetections) - 1].y;
        data_preprocessing_fe_B.rtb_tracks_TrackList[static_cast<int32_T>
          (static_cast<real_T>(data_preprocessing_fe_B.y) + 1.0) - 1].stateVector[1] =
          0.0;
        data_preprocessing_fe_B.rtb_tracks_TrackList[static_cast<int32_T>
          (static_cast<real_T>(data_preprocessing_fe_B.y) + 1.0) - 1].stateVector[2] =
          data_preprocessing_fe_B.rtb_clusterMeasurement_ClusterB[static_cast<int32_T>
          (data_preprocessing_fe_B.unassignedDetections) - 1].x;
        data_preprocessing_fe_B.rtb_tracks_TrackList[static_cast<int32_T>
          (static_cast<real_T>(data_preprocessing_fe_B.y) + 1.0) - 1].stateVector[3] =
          0.0;
        data_preprocessing_fe_B.rtb_tracks_TrackList[static_cast<int32_T>
          (static_cast<real_T>(data_preprocessing_fe_B.y) + 1.0) - 1].stateVector[4] =
          data_preprocessing_fe_B.rtb_clusterMeasurement_ClusterB[static_cast<int32_T>
          (data_preprocessing_fe_B.unassignedDetections) - 1].width;
        data_preprocessing_fe_B.rtb_tracks_TrackList[static_cast<int32_T>
          (static_cast<real_T>(data_preprocessing_fe_B.y) + 1.0) - 1].stateVector[5] =
          0.0;
        data_preprocessing_fe_B.rtb_tracks_TrackList[static_cast<int32_T>
          (static_cast<real_T>(data_preprocessing_fe_B.y) + 1.0) - 1].stateVector[6] =
          data_preprocessing_fe_B.rtb_clusterMeasurement_ClusterB[static_cast<int32_T>
          (data_preprocessing_fe_B.unassignedDetections) - 1].length;
        data_preprocessing_fe_B.rtb_tracks_TrackList[static_cast<int32_T>
          (static_cast<real_T>(data_preprocessing_fe_B.y) + 1.0) - 1].stateVector[7] =
          0.0;
        for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 64;
             data_preprocessing_fe_B.vstride++) {
          data_preprocessing_fe_B.rtb_tracks_TrackList[static_cast<int32_T>
            (static_cast<real_T>(data_preprocessing_fe_B.y) + 1.0) - 1]
            .stateCovariance[data_preprocessing_fe_B.vstride] = 0.0;
        }

        for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i < 8; data_preprocessing_fe_B.i++) {
          data_preprocessing_fe_B.rtb_tracks_TrackList[static_cast<int32_T>(static_cast<
            real_T>(data_preprocessing_fe_B.y) + 1.0) - 1]
            .stateCovariance[data_preprocessing_fe_B.i + (data_preprocessing_fe_B.i << 3)] = 100.0;
        }
      }
    }

    data_preprocessing_fe_B.y = static_cast<uint32_T>(assignments->size[0]) +
      static_cast<uint32_T>(unassignedDetections->size[0]);
    data_preprocessing_fe_emxFree_uint32_T(&assignments);
    data_preprocessing_fe_emxFree_uint32_T(&unassignedDetections);

    // MATLAB Function: '<S13>/2D Measurement to Track Assignment' incorporates:
    //   UnitDelay: '<S13>/Unit Delay'

    data_preprocessing_fe_B.numCorePoints = 0.0;
    data_preprocessing_fe_B.jA = unassignedTracks->size[0];
    for (data_preprocessing_fe_B.numAssignments = 0; data_preprocessing_fe_B.numAssignments <
         data_preprocessing_fe_B.jA; data_preprocessing_fe_B.numAssignments++) {
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 5;
           data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.c_x[data_preprocessing_fe_B.vstride] =
          (data_preprocessing_fe_DW.UnitDelay_DSTATE.TrackList[static_cast<int32_T>
           (unassignedTracks->data[data_preprocessing_fe_B.numAssignments]) - 1]
           .count[data_preprocessing_fe_B.vstride] == 0.0);
      }

      data_preprocessing_fe_B.empty_non_axis_sizes = true;
      data_preprocessing_fe_B.vstride = 0;
      exitg1 = false;
      while ((!exitg1) && (data_preprocessing_fe_B.vstride < 5)) {
        if (!data_preprocessing_fe_B.c_x[data_preprocessing_fe_B.vstride]) {
          data_preprocessing_fe_B.empty_non_axis_sizes = false;
          exitg1 = true;
        } else {
          data_preprocessing_fe_B.vstride++;
        }
      }

      if ((!data_preprocessing_fe_B.empty_non_axis_sizes) && (static_cast<real_T>
           (data_preprocessing_fe_B.y) + data_preprocessing_fe_B.numCorePoints < 20.0)) {
        data_preprocessing_fe_B.numNonCorePoints = (static_cast<real_T>
          (data_preprocessing_fe_B.numAssignments) + 1.0) + static_cast<real_T>
          (data_preprocessing_fe_B.y);
        data_preprocessing_fe_B.numCorePoints++;
        for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 8;
             data_preprocessing_fe_B.vstride++) {
          data_preprocessing_fe_B.rtb_tracks_TrackList[static_cast<int32_T>
            (data_preprocessing_fe_B.numNonCorePoints) - 1]
            .stateVector[data_preprocessing_fe_B.vstride] =
            data_preprocessing_fe_DW.UnitDelay_DSTATE.TrackList[static_cast<int32_T>
            (unassignedTracks->data[data_preprocessing_fe_B.numAssignments]) - 1].
            stateVector[data_preprocessing_fe_B.vstride];
        }

        for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 64;
             data_preprocessing_fe_B.vstride++) {
          data_preprocessing_fe_B.rtb_tracks_TrackList[static_cast<int32_T>
            (data_preprocessing_fe_B.numNonCorePoints) - 1]
            .stateCovariance[data_preprocessing_fe_B.vstride] =
            data_preprocessing_fe_DW.UnitDelay_DSTATE.TrackList[static_cast<int32_T>
            (unassignedTracks->data[data_preprocessing_fe_B.numAssignments]) - 1].
            stateCovariance[data_preprocessing_fe_B.vstride];
        }

        for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 5;
             data_preprocessing_fe_B.vstride++) {
          data_preprocessing_fe_B.rtb_tracks_TrackList[static_cast<int32_T>
            (data_preprocessing_fe_B.numNonCorePoints) - 1].count[data_preprocessing_fe_B.vstride]
            = data_preprocessing_fe_DW.UnitDelay_DSTATE.TrackList[static_cast<int32_T>
            (unassignedTracks->data[data_preprocessing_fe_B.numAssignments]) - 1]
            .count[data_preprocessing_fe_B.vstride];
        }

        for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 5;
             data_preprocessing_fe_B.vstride++) {
          data_preprocessing_fe_B.a[data_preprocessing_fe_B.vstride] =
            data_preprocessing_fe_B.rtb_tracks_TrackList[static_cast<int32_T>
            (data_preprocessing_fe_B.numNonCorePoints) - 1].count[data_preprocessing_fe_B.vstride];
        }

        data_preprocessing_fe_B.a[4] = data_preprocessing_fe_B.a[3];
        data_preprocessing_fe_B.a[3] = data_preprocessing_fe_B.a[2];
        data_preprocessing_fe_B.a[2] = data_preprocessing_fe_B.a[1];
        data_preprocessing_fe_B.a[1] = data_preprocessing_fe_B.a[0];
        data_preprocessing_fe_B.a[0] = data_preprocessing_fe_B.rtb_tracks_TrackList
          [static_cast<int32_T>(data_preprocessing_fe_B.numNonCorePoints) - 1].count[4];
        for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 5;
             data_preprocessing_fe_B.vstride++) {
          data_preprocessing_fe_B.rtb_tracks_TrackList[static_cast<int32_T>
            (data_preprocessing_fe_B.numNonCorePoints) - 1].count[data_preprocessing_fe_B.vstride]
            = data_preprocessing_fe_B.a[data_preprocessing_fe_B.vstride];
        }

        data_preprocessing_fe_B.rtb_tracks_TrackList[static_cast<int32_T>
          (data_preprocessing_fe_B.numNonCorePoints) - 1].count[0] = 0.0;
      }
    }

    data_preprocessing_fe_emxFree_uint32_T(&unassignedTracks);

    // MATLAB Function: '<S13>/2D Measurement to Track Assignment' incorporates:
    //   Constant: '<S12>/minDetections'

    data_preprocessing_fe_B.numCorePoints += static_cast<real_T>(data_preprocessing_fe_B.y);
    data_preprocessing_fe_B.vstride = static_cast<int32_T>(data_preprocessing_fe_B.numCorePoints);
    for (data_preprocessing_fe_B.numAssignments = 0; data_preprocessing_fe_B.numAssignments <
         data_preprocessing_fe_B.vstride; data_preprocessing_fe_B.numAssignments++) {
      if ((((data_preprocessing_fe_B.rtb_tracks_TrackList[data_preprocessing_fe_B.numAssignments].
             count[0] +
             data_preprocessing_fe_B.rtb_tracks_TrackList[data_preprocessing_fe_B.numAssignments].
             count[1]) +
            data_preprocessing_fe_B.rtb_tracks_TrackList[data_preprocessing_fe_B.numAssignments].
            count[2]) +
           data_preprocessing_fe_B.rtb_tracks_TrackList[data_preprocessing_fe_B.numAssignments].
           count[3]) +
          data_preprocessing_fe_B.rtb_tracks_TrackList[data_preprocessing_fe_B.numAssignments].
          count[4] >= data_preprocessing_fe_P.minDetections_Value) {
        data_preprocessing_fe_B.rtb_tracks_TrackList[data_preprocessing_fe_B.numAssignments].
          confirmedTrack = true;
      }
    }

    // MATLAB Function: '<S16>/Kalman Filter' incorporates:
    //   Constant: '<S12>/Q'
    //   Constant: '<S12>/R'

    data_preprocessing_fe_B.F[0] = 1.0;
    data_preprocessing_fe_B.F[8] = data_preprocessing_fe_B.q;
    data_preprocessing_fe_B.F[16] = 0.0;
    data_preprocessing_fe_B.F[24] = 0.0;
    data_preprocessing_fe_B.F[32] = 0.0;
    data_preprocessing_fe_B.F[40] = 0.0;
    data_preprocessing_fe_B.F[48] = 0.0;
    data_preprocessing_fe_B.F[56] = 0.0;
    data_preprocessing_fe_B.F[2] = 0.0;
    data_preprocessing_fe_B.F[10] = 0.0;
    data_preprocessing_fe_B.F[18] = 1.0;
    data_preprocessing_fe_B.F[26] = data_preprocessing_fe_B.q;
    data_preprocessing_fe_B.F[34] = 0.0;
    data_preprocessing_fe_B.F[42] = 0.0;
    data_preprocessing_fe_B.F[50] = 0.0;
    data_preprocessing_fe_B.F[58] = 0.0;
    data_preprocessing_fe_B.F[4] = 0.0;
    data_preprocessing_fe_B.F[12] = 0.0;
    data_preprocessing_fe_B.F[20] = 0.0;
    data_preprocessing_fe_B.F[28] = 0.0;
    data_preprocessing_fe_B.F[36] = 1.0;
    data_preprocessing_fe_B.F[44] = data_preprocessing_fe_B.q;
    data_preprocessing_fe_B.F[52] = 0.0;
    data_preprocessing_fe_B.F[60] = 0.0;
    data_preprocessing_fe_B.F[6] = 0.0;
    data_preprocessing_fe_B.F[14] = 0.0;
    data_preprocessing_fe_B.F[22] = 0.0;
    data_preprocessing_fe_B.F[30] = 0.0;
    data_preprocessing_fe_B.F[38] = 0.0;
    data_preprocessing_fe_B.F[46] = 0.0;
    data_preprocessing_fe_B.F[54] = 1.0;
    data_preprocessing_fe_B.F[62] = data_preprocessing_fe_B.q;
    for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 8;
         data_preprocessing_fe_B.vstride++) {
      data_preprocessing_fe_B.numAssignments = data_preprocessing_fe_B.vstride << 3;
      data_preprocessing_fe_B.F[data_preprocessing_fe_B.numAssignments + 1] =
        o[data_preprocessing_fe_B.vstride];
      data_preprocessing_fe_B.F[data_preprocessing_fe_B.numAssignments + 3] =
        m[data_preprocessing_fe_B.vstride];
      data_preprocessing_fe_B.F[data_preprocessing_fe_B.numAssignments + 5] =
        l[data_preprocessing_fe_B.vstride];
      data_preprocessing_fe_B.F[data_preprocessing_fe_B.numAssignments + 7] =
        h[data_preprocessing_fe_B.vstride];
    }

    data_preprocessing_fe_B.numClusters = static_cast<int32_T>(data_preprocessing_fe_B.y);
    if (static_cast<int32_T>(data_preprocessing_fe_B.y) - 1 >= 0) {
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 32;
           data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.A_tmp_j[data_preprocessing_fe_B.vstride] =
          g[data_preprocessing_fe_B.vstride];
        data_preprocessing_fe_B.A_tmp_d[data_preprocessing_fe_B.vstride] =
          c_b[data_preprocessing_fe_B.vstride];
      }
    }

    for (data_preprocessing_fe_B.numAssignments = 0; data_preprocessing_fe_B.numAssignments <
         data_preprocessing_fe_B.numClusters; data_preprocessing_fe_B.numAssignments++) {
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 8;
           data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.stateTimeEstimate[data_preprocessing_fe_B.vstride] = 0.0;
        for (data_preprocessing_fe_B.jj = 0; data_preprocessing_fe_B.jj < 8; data_preprocessing_fe_B.jj++)
        {
          data_preprocessing_fe_B.loop_ub = data_preprocessing_fe_B.jj << 3;
          data_preprocessing_fe_B.jA = data_preprocessing_fe_B.loop_ub + data_preprocessing_fe_B.vstride;
          data_preprocessing_fe_B.stateTimeEstimate[data_preprocessing_fe_B.vstride] +=
            data_preprocessing_fe_B.F[data_preprocessing_fe_B.jA] *
            data_preprocessing_fe_B.rtb_tracks_TrackList[data_preprocessing_fe_B.numAssignments].
            stateVector[data_preprocessing_fe_B.jj];
          data_preprocessing_fe_B.q = 0.0;
          for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i < 8; data_preprocessing_fe_B.i++) {
            data_preprocessing_fe_B.q += data_preprocessing_fe_B.F[(data_preprocessing_fe_B.i << 3) +
              data_preprocessing_fe_B.vstride] *
              data_preprocessing_fe_B.rtb_tracks_TrackList[data_preprocessing_fe_B.numAssignments]
              .stateCovariance[data_preprocessing_fe_B.loop_ub + data_preprocessing_fe_B.i];
          }

          data_preprocessing_fe_B.F_p[data_preprocessing_fe_B.jA] = data_preprocessing_fe_B.q;
        }

        for (data_preprocessing_fe_B.jj = 0; data_preprocessing_fe_B.jj < 8; data_preprocessing_fe_B.jj++)
        {
          data_preprocessing_fe_B.q = 0.0;
          for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i < 8; data_preprocessing_fe_B.i++) {
            data_preprocessing_fe_B.jBcol = data_preprocessing_fe_B.i << 3;
            data_preprocessing_fe_B.q += data_preprocessing_fe_B.F_p[data_preprocessing_fe_B.jBcol +
              data_preprocessing_fe_B.vstride] * data_preprocessing_fe_B.F[data_preprocessing_fe_B.jBcol +
              data_preprocessing_fe_B.jj];
          }

          data_preprocessing_fe_B.i = (data_preprocessing_fe_B.jj << 3) + data_preprocessing_fe_B.vstride;
          data_preprocessing_fe_B.covarianceTimeEstimate[data_preprocessing_fe_B.i] =
            data_preprocessing_fe_P.Q_Value[data_preprocessing_fe_B.i] + data_preprocessing_fe_B.q;
        }
      }

      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 4;
           data_preprocessing_fe_B.vstride++) {
        for (data_preprocessing_fe_B.jj = 0; data_preprocessing_fe_B.jj < 8; data_preprocessing_fe_B.jj++)
        {
          data_preprocessing_fe_B.q = 0.0;
          for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i < 8; data_preprocessing_fe_B.i++) {
            data_preprocessing_fe_B.q += static_cast<real_T>(data_preprocessing_fe_B.A_tmp_d
              [(data_preprocessing_fe_B.i << 2) + data_preprocessing_fe_B.vstride]) *
              data_preprocessing_fe_B.covarianceTimeEstimate[(data_preprocessing_fe_B.jj << 3) +
              data_preprocessing_fe_B.i];
          }

          data_preprocessing_fe_B.A_tmp[data_preprocessing_fe_B.vstride + (data_preprocessing_fe_B.jj << 2)]
            = data_preprocessing_fe_B.q;
        }

        for (data_preprocessing_fe_B.jj = 0; data_preprocessing_fe_B.jj < 4; data_preprocessing_fe_B.jj++)
        {
          data_preprocessing_fe_B.q = 0.0;
          for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i < 8; data_preprocessing_fe_B.i++) {
            data_preprocessing_fe_B.q += data_preprocessing_fe_B.A_tmp[(data_preprocessing_fe_B.i << 2) +
              data_preprocessing_fe_B.vstride] * static_cast<real_T>
              (data_preprocessing_fe_B.A_tmp_j[(data_preprocessing_fe_B.jj << 3) +
               data_preprocessing_fe_B.i]);
          }

          data_preprocessing_fe_B.i = (data_preprocessing_fe_B.jj << 2) + data_preprocessing_fe_B.vstride;
          data_preprocessing_fe_B.A[data_preprocessing_fe_B.i] =
            data_preprocessing_fe_P.R_Value[data_preprocessing_fe_B.i] + data_preprocessing_fe_B.q;
        }
      }

      memset(&data_preprocessing_fe_B.b_b[0], 0, sizeof(real_T) << 4U);
      data_preprocessing_fe_B.ipiv[0] = 1;
      data_preprocessing_fe_B.ipiv[1] = 2;
      data_preprocessing_fe_B.ipiv[2] = 3;
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 3;
           data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.jj = data_preprocessing_fe_B.vstride * 5;
        data_preprocessing_fe_B.i = 4 - data_preprocessing_fe_B.vstride;
        data_preprocessing_fe_B.loop_ub = 0;
        data_preprocessing_fe_B.q = fabs(data_preprocessing_fe_B.A[data_preprocessing_fe_B.jj]);
        for (data_preprocessing_fe_B.jA = 2; data_preprocessing_fe_B.jA <= data_preprocessing_fe_B.i;
             data_preprocessing_fe_B.jA++) {
          data_preprocessing_fe_B.numNonCorePoints = fabs(data_preprocessing_fe_B.A
            [(data_preprocessing_fe_B.jj + data_preprocessing_fe_B.jA) - 1]);
          if (data_preprocessing_fe_B.numNonCorePoints > data_preprocessing_fe_B.q) {
            data_preprocessing_fe_B.loop_ub = data_preprocessing_fe_B.jA - 1;
            data_preprocessing_fe_B.q = data_preprocessing_fe_B.numNonCorePoints;
          }
        }

        if (data_preprocessing_fe_B.A[data_preprocessing_fe_B.jj + data_preprocessing_fe_B.loop_ub] != 0.0)
        {
          if (data_preprocessing_fe_B.loop_ub != 0) {
            data_preprocessing_fe_B.i = data_preprocessing_fe_B.vstride + data_preprocessing_fe_B.loop_ub;
            data_preprocessing_fe_B.ipiv[data_preprocessing_fe_B.vstride] = static_cast<int8_T>
              (data_preprocessing_fe_B.i + 1);
            data_preprocessing_fe_B.q = data_preprocessing_fe_B.A[data_preprocessing_fe_B.vstride];
            data_preprocessing_fe_B.A[data_preprocessing_fe_B.vstride] =
              data_preprocessing_fe_B.A[data_preprocessing_fe_B.i];
            data_preprocessing_fe_B.A[data_preprocessing_fe_B.i] = data_preprocessing_fe_B.q;
            data_preprocessing_fe_B.q = data_preprocessing_fe_B.A[data_preprocessing_fe_B.vstride + 4];
            data_preprocessing_fe_B.A[data_preprocessing_fe_B.vstride + 4] =
              data_preprocessing_fe_B.A[data_preprocessing_fe_B.i + 4];
            data_preprocessing_fe_B.A[data_preprocessing_fe_B.i + 4] = data_preprocessing_fe_B.q;
            data_preprocessing_fe_B.q = data_preprocessing_fe_B.A[data_preprocessing_fe_B.vstride + 8];
            data_preprocessing_fe_B.A[data_preprocessing_fe_B.vstride + 8] =
              data_preprocessing_fe_B.A[data_preprocessing_fe_B.i + 8];
            data_preprocessing_fe_B.A[data_preprocessing_fe_B.i + 8] = data_preprocessing_fe_B.q;
            data_preprocessing_fe_B.q = data_preprocessing_fe_B.A[data_preprocessing_fe_B.vstride + 12];
            data_preprocessing_fe_B.A[data_preprocessing_fe_B.vstride + 12] =
              data_preprocessing_fe_B.A[data_preprocessing_fe_B.i + 12];
            data_preprocessing_fe_B.A[data_preprocessing_fe_B.i + 12] = data_preprocessing_fe_B.q;
          }

          data_preprocessing_fe_B.i = (data_preprocessing_fe_B.jj - data_preprocessing_fe_B.vstride) + 4;
          for (data_preprocessing_fe_B.jA = data_preprocessing_fe_B.jj + 2; data_preprocessing_fe_B.jA <=
               data_preprocessing_fe_B.i; data_preprocessing_fe_B.jA++) {
            data_preprocessing_fe_B.A[data_preprocessing_fe_B.jA - 1] /=
              data_preprocessing_fe_B.A[data_preprocessing_fe_B.jj];
          }
        }

        data_preprocessing_fe_B.i = 2 - data_preprocessing_fe_B.vstride;
        data_preprocessing_fe_B.jA = data_preprocessing_fe_B.jj + 6;
        for (data_preprocessing_fe_B.jBcol = 0; data_preprocessing_fe_B.jBcol <= data_preprocessing_fe_B.i;
             data_preprocessing_fe_B.jBcol++) {
          data_preprocessing_fe_B.q = data_preprocessing_fe_B.A[((data_preprocessing_fe_B.jBcol << 2) +
            data_preprocessing_fe_B.jj) + 4];
          if (data_preprocessing_fe_B.q != 0.0) {
            data_preprocessing_fe_B.loop_ub = (data_preprocessing_fe_B.jA - data_preprocessing_fe_B.vstride)
              + 2;
            for (data_preprocessing_fe_B.kAcol = data_preprocessing_fe_B.jA; data_preprocessing_fe_B.kAcol <=
                 data_preprocessing_fe_B.loop_ub; data_preprocessing_fe_B.kAcol++) {
              data_preprocessing_fe_B.A[data_preprocessing_fe_B.kAcol - 1] += data_preprocessing_fe_B.A
                [((data_preprocessing_fe_B.jj + data_preprocessing_fe_B.kAcol) - data_preprocessing_fe_B.jA)
                + 1] * -data_preprocessing_fe_B.q;
            }
          }

          data_preprocessing_fe_B.jA += 4;
        }
      }

      data_preprocessing_fe_B.p[0] = 1;
      data_preprocessing_fe_B.p[1] = 2;
      data_preprocessing_fe_B.p[2] = 3;
      data_preprocessing_fe_B.p[3] = 4;
      if (data_preprocessing_fe_B.ipiv[0] > 1) {
        data_preprocessing_fe_B.vstride = data_preprocessing_fe_B.p[data_preprocessing_fe_B.ipiv[0] - 1];
        data_preprocessing_fe_B.p[data_preprocessing_fe_B.ipiv[0] - 1] = 1;
        data_preprocessing_fe_B.p[0] = static_cast<int8_T>(data_preprocessing_fe_B.vstride);
      }

      if (data_preprocessing_fe_B.ipiv[1] > 2) {
        data_preprocessing_fe_B.vstride = data_preprocessing_fe_B.p[data_preprocessing_fe_B.ipiv[1] - 1];
        data_preprocessing_fe_B.p[data_preprocessing_fe_B.ipiv[1] - 1] = data_preprocessing_fe_B.p[1];
        data_preprocessing_fe_B.p[1] = static_cast<int8_T>(data_preprocessing_fe_B.vstride);
      }

      if (data_preprocessing_fe_B.ipiv[2] > 3) {
        data_preprocessing_fe_B.vstride = data_preprocessing_fe_B.p[data_preprocessing_fe_B.ipiv[2] - 1];
        data_preprocessing_fe_B.p[data_preprocessing_fe_B.ipiv[2] - 1] = data_preprocessing_fe_B.p[2];
        data_preprocessing_fe_B.p[2] = static_cast<int8_T>(data_preprocessing_fe_B.vstride);
      }

      for (data_preprocessing_fe_B.jA = 0; data_preprocessing_fe_B.jA < 4; data_preprocessing_fe_B.jA++) {
        data_preprocessing_fe_B.loop_ub = (data_preprocessing_fe_B.p[data_preprocessing_fe_B.jA] - 1) << 2;
        data_preprocessing_fe_B.b_b[data_preprocessing_fe_B.jA + data_preprocessing_fe_B.loop_ub] = 1.0;
        for (data_preprocessing_fe_B.jBcol = data_preprocessing_fe_B.jA + 1; data_preprocessing_fe_B.jBcol <
             5; data_preprocessing_fe_B.jBcol++) {
          data_preprocessing_fe_B.vstride = (data_preprocessing_fe_B.loop_ub +
            data_preprocessing_fe_B.jBcol) - 1;
          if (data_preprocessing_fe_B.b_b[data_preprocessing_fe_B.vstride] != 0.0) {
            for (data_preprocessing_fe_B.i = data_preprocessing_fe_B.jBcol + 1; data_preprocessing_fe_B.i <
                 5; data_preprocessing_fe_B.i++) {
              data_preprocessing_fe_B.jj = (data_preprocessing_fe_B.loop_ub + data_preprocessing_fe_B.i) -
                1;
              data_preprocessing_fe_B.b_b[data_preprocessing_fe_B.jj] -= data_preprocessing_fe_B.A
                [(((data_preprocessing_fe_B.jBcol - 1) << 2) + data_preprocessing_fe_B.i) - 1] *
                data_preprocessing_fe_B.b_b[data_preprocessing_fe_B.vstride];
            }
          }
        }
      }

      for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i < 4; data_preprocessing_fe_B.i++) {
        data_preprocessing_fe_B.jBcol = data_preprocessing_fe_B.i << 2;
        for (data_preprocessing_fe_B.jj = 3; data_preprocessing_fe_B.jj >= 0; data_preprocessing_fe_B.jj--)
        {
          data_preprocessing_fe_B.kAcol = data_preprocessing_fe_B.jj << 2;
          data_preprocessing_fe_B.vstride = data_preprocessing_fe_B.jj + data_preprocessing_fe_B.jBcol;
          data_preprocessing_fe_B.q = data_preprocessing_fe_B.b_b[data_preprocessing_fe_B.vstride];
          if (data_preprocessing_fe_B.q != 0.0) {
            data_preprocessing_fe_B.b_b[data_preprocessing_fe_B.vstride] = data_preprocessing_fe_B.q /
              data_preprocessing_fe_B.A[data_preprocessing_fe_B.jj + data_preprocessing_fe_B.kAcol];
            for (data_preprocessing_fe_B.jA = 0; data_preprocessing_fe_B.jA < data_preprocessing_fe_B.jj;
                 data_preprocessing_fe_B.jA++) {
              data_preprocessing_fe_B.loop_ub = data_preprocessing_fe_B.jA + data_preprocessing_fe_B.jBcol;
              data_preprocessing_fe_B.b_b[data_preprocessing_fe_B.loop_ub] -=
                data_preprocessing_fe_B.A[data_preprocessing_fe_B.jA + data_preprocessing_fe_B.kAcol] *
                data_preprocessing_fe_B.b_b[data_preprocessing_fe_B.vstride];
            }
          }
        }
      }

      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 8;
           data_preprocessing_fe_B.vstride++) {
        for (data_preprocessing_fe_B.jj = 0; data_preprocessing_fe_B.jj < 4; data_preprocessing_fe_B.jj++)
        {
          data_preprocessing_fe_B.q = 0.0;
          for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i < 8; data_preprocessing_fe_B.i++) {
            data_preprocessing_fe_B.q += data_preprocessing_fe_B.covarianceTimeEstimate
              [(data_preprocessing_fe_B.i << 3) + data_preprocessing_fe_B.vstride] *
              static_cast<real_T>(data_preprocessing_fe_B.A_tmp_j[(data_preprocessing_fe_B.jj << 3)
                                  + data_preprocessing_fe_B.i]);
          }

          data_preprocessing_fe_B.A_tmp[data_preprocessing_fe_B.vstride + (data_preprocessing_fe_B.jj << 3)]
            = data_preprocessing_fe_B.q;
        }

        data_preprocessing_fe_B.q = data_preprocessing_fe_B.A_tmp[data_preprocessing_fe_B.vstride + 8];
        data_preprocessing_fe_B.numNonCorePoints =
          data_preprocessing_fe_B.A_tmp[data_preprocessing_fe_B.vstride];
        data_preprocessing_fe_B.corePointsProcessed =
          data_preprocessing_fe_B.A_tmp[data_preprocessing_fe_B.vstride + 16];
        data_preprocessing_fe_B.newCorePointsTot =
          data_preprocessing_fe_B.A_tmp[data_preprocessing_fe_B.vstride + 24];
        for (data_preprocessing_fe_B.jj = 0; data_preprocessing_fe_B.jj < 4; data_preprocessing_fe_B.jj++)
        {
          data_preprocessing_fe_B.i = data_preprocessing_fe_B.jj << 2;
          data_preprocessing_fe_B.K[data_preprocessing_fe_B.vstride + (data_preprocessing_fe_B.jj << 3)] =
            ((data_preprocessing_fe_B.b_b[data_preprocessing_fe_B.i + 1] * data_preprocessing_fe_B.q +
              data_preprocessing_fe_B.b_b[data_preprocessing_fe_B.i] *
              data_preprocessing_fe_B.numNonCorePoints) +
             data_preprocessing_fe_B.b_b[data_preprocessing_fe_B.i + 2] *
             data_preprocessing_fe_B.corePointsProcessed) +
            data_preprocessing_fe_B.b_b[data_preprocessing_fe_B.i + 3] *
            data_preprocessing_fe_B.newCorePointsTot;
        }
      }

      memset(&data_preprocessing_fe_B.b_I[0], 0, sizeof(int8_T) << 6U);
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 8;
           data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.b_I[data_preprocessing_fe_B.vstride + (data_preprocessing_fe_B.vstride << 3)]
          = 1;
      }

      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 8;
           data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.q = data_preprocessing_fe_B.K[data_preprocessing_fe_B.vstride + 8];
        data_preprocessing_fe_B.numNonCorePoints =
          data_preprocessing_fe_B.K[data_preprocessing_fe_B.vstride];
        data_preprocessing_fe_B.corePointsProcessed =
          data_preprocessing_fe_B.K[data_preprocessing_fe_B.vstride + 16];
        data_preprocessing_fe_B.newCorePointsTot =
          data_preprocessing_fe_B.K[data_preprocessing_fe_B.vstride + 24];
        for (data_preprocessing_fe_B.jj = 0; data_preprocessing_fe_B.jj < 8; data_preprocessing_fe_B.jj++)
        {
          data_preprocessing_fe_B.i = data_preprocessing_fe_B.jj << 2;
          data_preprocessing_fe_B.loop_ub = (data_preprocessing_fe_B.jj << 3) +
            data_preprocessing_fe_B.vstride;
          data_preprocessing_fe_B.F_p[data_preprocessing_fe_B.loop_ub] = static_cast<real_T>
            (data_preprocessing_fe_B.b_I[data_preprocessing_fe_B.loop_ub]) - (((static_cast<real_T>
            (data_preprocessing_fe_B.A_tmp_d[data_preprocessing_fe_B.i + 1]) * data_preprocessing_fe_B.q +
            static_cast<real_T>(data_preprocessing_fe_B.A_tmp_d[data_preprocessing_fe_B.i]) *
            data_preprocessing_fe_B.numNonCorePoints) + static_cast<real_T>
            (data_preprocessing_fe_B.A_tmp_d[data_preprocessing_fe_B.i + 2]) *
            data_preprocessing_fe_B.corePointsProcessed) + static_cast<real_T>
            (data_preprocessing_fe_B.A_tmp_d[data_preprocessing_fe_B.i + 3]) *
            data_preprocessing_fe_B.newCorePointsTot);
        }

        for (data_preprocessing_fe_B.jj = 0; data_preprocessing_fe_B.jj < 8; data_preprocessing_fe_B.jj++)
        {
          data_preprocessing_fe_B.numNonCorePoints = 0.0;
          for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i < 8; data_preprocessing_fe_B.i++) {
            data_preprocessing_fe_B.numNonCorePoints += data_preprocessing_fe_B.F_p
              [(data_preprocessing_fe_B.i << 3) + data_preprocessing_fe_B.vstride] *
              data_preprocessing_fe_B.covarianceTimeEstimate[(data_preprocessing_fe_B.jj << 3) +
              data_preprocessing_fe_B.i];
          }

          data_preprocessing_fe_B.rtb_tracks_TrackList[data_preprocessing_fe_B.numAssignments].
            stateCovariance[data_preprocessing_fe_B.vstride + (data_preprocessing_fe_B.jj << 3)] =
            data_preprocessing_fe_B.numNonCorePoints;
        }
      }

      data_preprocessing_fe_B.rtb_matchedClusters_ClusterBo_g[0] =
        data_preprocessing_fe_B.rtb_matchedClusters_ClusterBoun[data_preprocessing_fe_B.numAssignments]
        .y;
      data_preprocessing_fe_B.rtb_matchedClusters_ClusterBo_g[1] =
        data_preprocessing_fe_B.rtb_matchedClusters_ClusterBoun[data_preprocessing_fe_B.numAssignments]
        .x;
      data_preprocessing_fe_B.rtb_matchedClusters_ClusterBo_g[2] =
        data_preprocessing_fe_B.rtb_matchedClusters_ClusterBoun[data_preprocessing_fe_B.numAssignments]
        .width;
      data_preprocessing_fe_B.rtb_matchedClusters_ClusterBo_g[3] =
        data_preprocessing_fe_B.rtb_matchedClusters_ClusterBoun[data_preprocessing_fe_B.numAssignments]
        .length;
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 4;
           data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.q = 0.0;
        for (data_preprocessing_fe_B.jj = 0; data_preprocessing_fe_B.jj < 8; data_preprocessing_fe_B.jj++)
        {
          data_preprocessing_fe_B.q += static_cast<real_T>(data_preprocessing_fe_B.A_tmp_d
            [(data_preprocessing_fe_B.jj << 2) + data_preprocessing_fe_B.vstride]) *
            data_preprocessing_fe_B.stateTimeEstimate[data_preprocessing_fe_B.jj];
        }

        data_preprocessing_fe_B.rtb_matchedClusters_ClusterBo_l[data_preprocessing_fe_B.vstride] =
          data_preprocessing_fe_B.rtb_matchedClusters_ClusterBo_g[data_preprocessing_fe_B.vstride]
          - data_preprocessing_fe_B.q;
      }

      data_preprocessing_fe_B.q = data_preprocessing_fe_B.rtb_matchedClusters_ClusterBo_l[1];
      data_preprocessing_fe_B.numNonCorePoints =
        data_preprocessing_fe_B.rtb_matchedClusters_ClusterBo_l[0];
      data_preprocessing_fe_B.corePointsProcessed =
        data_preprocessing_fe_B.rtb_matchedClusters_ClusterBo_l[2];
      data_preprocessing_fe_B.newCorePointsTot =
        data_preprocessing_fe_B.rtb_matchedClusters_ClusterBo_l[3];
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 8;
           data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.rtb_tracks_TrackList[data_preprocessing_fe_B.numAssignments].
          stateVector[data_preprocessing_fe_B.vstride] =
          (((data_preprocessing_fe_B.K[data_preprocessing_fe_B.vstride + 8] * data_preprocessing_fe_B.q +
             data_preprocessing_fe_B.K[data_preprocessing_fe_B.vstride] *
             data_preprocessing_fe_B.numNonCorePoints) +
            data_preprocessing_fe_B.K[data_preprocessing_fe_B.vstride + 16] *
            data_preprocessing_fe_B.corePointsProcessed) +
           data_preprocessing_fe_B.K[data_preprocessing_fe_B.vstride + 24] *
           data_preprocessing_fe_B.newCorePointsTot) +
          data_preprocessing_fe_B.stateTimeEstimate[data_preprocessing_fe_B.vstride];
      }
    }

    data_preprocessing_fe_B.loop_ub = static_cast<int32_T>((1.0 - (static_cast<real_T>
      (data_preprocessing_fe_B.y) + 1.0)) + data_preprocessing_fe_B.numCorePoints);
    for (data_preprocessing_fe_B.jA = 0; data_preprocessing_fe_B.jA < data_preprocessing_fe_B.loop_ub;
         data_preprocessing_fe_B.jA++) {
      data_preprocessing_fe_B.numNonCorePoints = (static_cast<real_T>(data_preprocessing_fe_B.y) +
        1.0) + static_cast<real_T>(data_preprocessing_fe_B.jA);
      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 8;
           data_preprocessing_fe_B.vstride++) {
        for (data_preprocessing_fe_B.jj = 0; data_preprocessing_fe_B.jj < 8; data_preprocessing_fe_B.jj++)
        {
          data_preprocessing_fe_B.q = 0.0;
          for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i < 8; data_preprocessing_fe_B.i++) {
            data_preprocessing_fe_B.q += data_preprocessing_fe_B.F[(data_preprocessing_fe_B.i << 3) +
              data_preprocessing_fe_B.vstride] * data_preprocessing_fe_B.rtb_tracks_TrackList[
              static_cast<int32_T>(data_preprocessing_fe_B.numNonCorePoints) - 1].
              stateCovariance[(data_preprocessing_fe_B.jj << 3) + data_preprocessing_fe_B.i];
          }

          data_preprocessing_fe_B.F_p[data_preprocessing_fe_B.vstride + (data_preprocessing_fe_B.jj << 3)] =
            data_preprocessing_fe_B.q;
        }
      }

      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 8;
           data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.stateTimeEstimate[data_preprocessing_fe_B.vstride] = 0.0;
        for (data_preprocessing_fe_B.jj = 0; data_preprocessing_fe_B.jj < 8; data_preprocessing_fe_B.jj++)
        {
          data_preprocessing_fe_B.q = 0.0;
          for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i < 8; data_preprocessing_fe_B.i++) {
            data_preprocessing_fe_B.jBcol = data_preprocessing_fe_B.i << 3;
            data_preprocessing_fe_B.q += data_preprocessing_fe_B.F_p[data_preprocessing_fe_B.jBcol +
              data_preprocessing_fe_B.vstride] * data_preprocessing_fe_B.F[data_preprocessing_fe_B.jBcol +
              data_preprocessing_fe_B.jj];
          }

          data_preprocessing_fe_B.i = (data_preprocessing_fe_B.jj << 3) + data_preprocessing_fe_B.vstride;
          data_preprocessing_fe_B.rtb_tracks_TrackList[static_cast<int32_T>
            (data_preprocessing_fe_B.numNonCorePoints) - 1]
            .stateCovariance[data_preprocessing_fe_B.i] =
            data_preprocessing_fe_P.Q_Value[data_preprocessing_fe_B.i] + data_preprocessing_fe_B.q;
          data_preprocessing_fe_B.stateTimeEstimate[data_preprocessing_fe_B.vstride] +=
            data_preprocessing_fe_B.rtb_tracks_TrackList[static_cast<int32_T>
            (data_preprocessing_fe_B.numNonCorePoints) - 1].stateVector[data_preprocessing_fe_B.jj]
            * data_preprocessing_fe_B.F[data_preprocessing_fe_B.i];
        }
      }

      for (data_preprocessing_fe_B.vstride = 0; data_preprocessing_fe_B.vstride < 8;
           data_preprocessing_fe_B.vstride++) {
        data_preprocessing_fe_B.rtb_tracks_TrackList[static_cast<int32_T>
          (data_preprocessing_fe_B.numNonCorePoints) - 1]
          .stateVector[data_preprocessing_fe_B.vstride] =
          data_preprocessing_fe_B.stateTimeEstimate[data_preprocessing_fe_B.vstride];
      }
    }

    // MATLAB Function: '<S1>/Create Ros Message' incorporates:
    //   MATLAB Function: '<S16>/Kalman Filter'

    data_preprocessing_fe_B.a_l.stamp = data_preprocessing_fe_B.In1.header.stamp;
    data_preprocessing_fe_B.a_l.position_y = 0.0F;
    data_preprocessing_fe_B.a_l.position_x = 0.0F;
    data_preprocessing_fe_B.a_l.velocity_y = 0.0F;
    data_preprocessing_fe_B.a_l.velocity_x = 0.0F;
    data_preprocessing_fe_B.a_l.width = 0.0F;
    data_preprocessing_fe_B.a_l.length = 0.0F;
    data_preprocessing_fe_B.a_l.height = 0.0F;
    for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i < 20; data_preprocessing_fe_B.i++) {
      data_preprocessing_fe_B.trackList[data_preprocessing_fe_B.i] = data_preprocessing_fe_B.a_l;
    }

    data_preprocessing_fe_B.y = 0U;
    if (data_preprocessing_fe_B.numCorePoints < 4.294967296E+9) {
      data_preprocessing_fe_B.numClusters = static_cast<int32_T>(static_cast<uint32_T>
        (data_preprocessing_fe_B.numCorePoints));
    } else {
      data_preprocessing_fe_B.numClusters = -1;
    }

    for (data_preprocessing_fe_B.i = 0; data_preprocessing_fe_B.i < data_preprocessing_fe_B.numClusters;
         data_preprocessing_fe_B.i++) {
      if (data_preprocessing_fe_B.rtb_tracks_TrackList[data_preprocessing_fe_B.i].confirmedTrack)
      {
        data_preprocessing_fe_B.y++;
        data_preprocessing_fe_B.trackList[static_cast<int32_T>(data_preprocessing_fe_B.y) - 1].
          position_y = static_cast<real32_T>
          (data_preprocessing_fe_B.rtb_tracks_TrackList[static_cast<int32_T>
           (data_preprocessing_fe_B.y) - 1].stateVector[0]);
        data_preprocessing_fe_B.trackList[static_cast<int32_T>(data_preprocessing_fe_B.y) - 1].
          position_x = static_cast<real32_T>
          (data_preprocessing_fe_B.rtb_tracks_TrackList[static_cast<int32_T>
           (data_preprocessing_fe_B.y) - 1].stateVector[2]);
        data_preprocessing_fe_B.trackList[static_cast<int32_T>(data_preprocessing_fe_B.y) - 1].
          velocity_y = static_cast<real32_T>
          (data_preprocessing_fe_B.rtb_tracks_TrackList[static_cast<int32_T>
           (data_preprocessing_fe_B.y) - 1].stateVector[1]);
        data_preprocessing_fe_B.trackList[static_cast<int32_T>(data_preprocessing_fe_B.y) - 1].
          velocity_x = static_cast<real32_T>
          (data_preprocessing_fe_B.rtb_tracks_TrackList[static_cast<int32_T>
           (data_preprocessing_fe_B.y) - 1].stateVector[3]);
        data_preprocessing_fe_B.trackList[static_cast<int32_T>(data_preprocessing_fe_B.y) - 1].
          width = static_cast<real32_T>(data_preprocessing_fe_B.rtb_tracks_TrackList[
          static_cast<int32_T>(data_preprocessing_fe_B.y) - 1].stateVector[4]);
        data_preprocessing_fe_B.trackList[static_cast<int32_T>(data_preprocessing_fe_B.y) - 1].
          length = static_cast<real32_T>(data_preprocessing_fe_B.rtb_tracks_TrackList[
          static_cast<int32_T>(data_preprocessing_fe_B.y) - 1].stateVector[6]);
        data_preprocessing_fe_B.trackList[static_cast<int32_T>(data_preprocessing_fe_B.y) - 1].
          height = 0.0F;
      }
    }

    // BusAssignment: '<S1>/Bus Assignment' incorporates:
    //   Constant: '<S3>/Constant'
    //   MATLAB Function: '<S1>/Create Ros Message'

    data_preprocessing_fe_B.BusAssignment = data_preprocessing_fe_P.Constant_Value_n;
    data_preprocessing_fe_B.BusAssignment.num_tracks = data_preprocessing_fe_B.y;
    data_preprocessing_fe_B.BusAssignment.tracks_SL_Info.CurrentLength = data_preprocessing_fe_B.y;
    memcpy(&data_preprocessing_fe_B.BusAssignment.tracks[0], &data_preprocessing_fe_B.trackList[0],
           20U * sizeof(SL_Bus_custom_interfaces_Track));

    // MATLABSystem: '<S7>/SinkBlock'
    Pub_data_preprocessing_fe_80.publish(&data_preprocessing_fe_B.BusAssignment);

    // Update for UnitDelay: '<S13>/Unit Delay' incorporates:
    //   MATLAB Function: '<S16>/Kalman Filter'

    data_preprocessing_fe_DW.UnitDelay_DSTATE.numTracks = data_preprocessing_fe_B.numCorePoints;
    memcpy(&data_preprocessing_fe_DW.UnitDelay_DSTATE.TrackList[0],
           &data_preprocessing_fe_B.rtb_tracks_TrackList[0], 20U * sizeof(Track));
  }

  // End of Outputs for SubSystem: '<Root>/Create Hokuyo Tracks'

  // Update for Memory: '<Root>/Memory'
  data_preprocessing_fe_DW.Memory_PreviousInput = data_preprocessing_fe_B.Add;
}

// Model initialize function
void data_preprocessing_fe_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // InitializeConditions for Memory: '<Root>/Memory'
  data_preprocessing_fe_DW.Memory_PreviousInput = data_preprocessing_fe_P.Memory_InitialCondition;

  // SystemInitialize for Enabled SubSystem: '<S2>/Enabled Subsystem'
  // SystemInitialize for SignalConversion generated from: '<S18>/In1' incorporates:
  //   Outport: '<S18>/Out1'

  data_preprocessing_fe_B.In1 = data_preprocessing_fe_P.Out1_Y0;

  // End of SystemInitialize for SubSystem: '<S2>/Enabled Subsystem'

  // SystemInitialize for Enabled SubSystem: '<Root>/Create Hokuyo Tracks'
  // InitializeConditions for UnitDelay: '<S13>/Unit Delay'
  data_preprocessing_fe_DW.UnitDelay_DSTATE = data_preprocessing_fe_P.UnitDelay_InitialCondition;

  // Start for MATLABSystem: '<S7>/SinkBlock'
  data_preprocessing_fe_SystemCore_setup(&data_preprocessing_fe_DW.obj);

  // End of SystemInitialize for SubSystem: '<Root>/Create Hokuyo Tracks'

  // Start for MATLABSystem: '<S2>/SourceBlock'
  data_preprocessing_fe_SystemCore_setup_d(&data_preprocessing_fe_DW.obj_a);
}

// Model terminate function
void data_preprocessing_fe_terminate(void)
{
  // Terminate for MATLABSystem: '<S2>/SourceBlock'
  if (!data_preprocessing_fe_DW.obj_a.matlabCodegenIsDeleted) {
    data_preprocessing_fe_DW.obj_a.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/SourceBlock'

  // Terminate for Enabled SubSystem: '<Root>/Create Hokuyo Tracks'
  // Terminate for MATLABSystem: '<S7>/SinkBlock'
  if (!data_preprocessing_fe_DW.obj.matlabCodegenIsDeleted) {
    data_preprocessing_fe_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S7>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Create Hokuyo Tracks'
}

//
// File trailer for generated code.
//
// [EOF]
//
