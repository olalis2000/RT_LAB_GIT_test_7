/*
 * boost_and_two_level__1_sm_ehs.c
 *
 * Third Party Support License -- for use only to support products
 * interfaced to MathWorks software under terms specified in your
 * company's restricted use license agreement.
 *
 * Code generation for model "boost_and_two_level__1_sm_ehs".
 *
 * Model version              : 7.1
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Wed Oct 30 12:17:55 2024
 *
 * Target selection: rtlab_rtmodel.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "boost_and_two_level__1_sm_ehs.h"
#include "boost_and_two_level__1_sm_ehs_private.h"

/* Block signals (default storage) */
B_boost_and_two_level__1_sm_ehs_T boost_and_two_level__1_sm_ehs_B;

/* Block states (default storage) */
DW_boost_and_two_level__1_sm_ehs_T boost_and_two_level__1_sm_ehs_DW;

/* Real-time model */
static RT_MODEL_boost_and_two_level__1_sm_ehs_T boost_and_two_level__1_sm_ehs_M_;
RT_MODEL_boost_and_two_level__1_sm_ehs_T *const boost_and_two_level__1_sm_ehs_M =
  &boost_and_two_level__1_sm_ehs_M_;

/*
 * Output and update for atomic system:
 *    '<S13>/OpOutput'
 *    '<S14>/OpOutput'
 *    '<S15>/OpOutput'
 *    '<S16>/OpOutput'
 */
void boost_and_two_level__1_OpOutput(const real_T rtu_In1[2],
  B_OpOutput_boost_and_two_leve_T *localB)
{
  /* DataTypeConversion: '<S17>/Data Type Conversion' */
  localB->DataTypeConversion[0] = rtu_In1[0];
  localB->DataTypeConversion[1] = rtu_In1[1];
}

/*
 * Output and update for atomic system:
 *    '<S33>/OpOutput'
 *    '<S34>/OpOutput'
 *    '<S35>/OpOutput'
 *    '<S36>/OpOutput'
 *    '<S37>/OpOutput'
 *    '<S38>/OpOutput'
 *    '<S39>/OpOutput'
 *    '<S40>/OpOutput'
 *    '<S41>/OpOutput'
 *    '<S42>/OpOutput'
 *    ...
 */
void boost_and_two_level__OpOutput_k(real_T rtu_In1,
  B_OpOutput_boost_and_two_le_c_T *localB)
{
  /* DataTypeConversion: '<S49>/Data Type Conversion' */
  localB->DataTypeConversion = rtu_In1;
}

/* Model output function */
static void boost_and_two_level__1_sm_ehs_output(void)
{
  real_T currentTime;
  real_T u0;
  real_T u1;
  real_T u2;

  /* Memory: '<S1>/S-Function' */
  boost_and_two_level__1_sm_ehs_B.SFunction =
    boost_and_two_level__1_sm_ehs_DW.SFunction_PreviousInput;

  /* Sum: '<S1>/Sum' incorporates:
   *  Constant: '<S1>/S-Function1'
   */
  boost_and_two_level__1_sm_ehs_B.Sum =
    boost_and_two_level__1_sm_ehs_P.SFunction1_Value +
    boost_and_two_level__1_sm_ehs_B.SFunction;

  /* Stop: '<S1>/Stop Simulation' */
  if (boost_and_two_level__1_sm_ehs_B.Sum != 0.0) {
    rtmSetStopRequested(boost_and_two_level__1_sm_ehs_M, 1);
  }

  /* End of Stop: '<S1>/Stop Simulation' */

  /* DataTypeConversion: '<S25>/OpInput' incorporates:
   *  Constant: '<S25>/In1'
   */
  boost_and_two_level__1_sm_ehs_B.OpInput =
    boost_and_two_level__1_sm_ehs_P.In1_Value;

  /* DataTypeConversion: '<S26>/OpInput' incorporates:
   *  Constant: '<S26>/In1'
   */
  boost_and_two_level__1_sm_ehs_B.OpInput_e =
    boost_and_two_level__1_sm_ehs_P.In1_Value_k;

  /* DataTypeConversion: '<S27>/OpInput' incorporates:
   *  Constant: '<S27>/In1'
   */
  boost_and_two_level__1_sm_ehs_B.OpInput_m =
    boost_and_two_level__1_sm_ehs_P.In1_Value_p;

  /* DataTypeConversion: '<S28>/OpInput' incorporates:
   *  Constant: '<S28>/In1'
   */
  boost_and_two_level__1_sm_ehs_B.OpInput_h =
    boost_and_two_level__1_sm_ehs_P.In1_Value_e;

  /* DataTypeConversion: '<S29>/OpInput' incorporates:
   *  Constant: '<S29>/In1'
   */
  boost_and_two_level__1_sm_ehs_B.OpInput_g =
    boost_and_two_level__1_sm_ehs_P.In1_Value_g;

  /* DataTypeConversion: '<S30>/OpInput' incorporates:
   *  Constant: '<S30>/In1'
   */
  boost_and_two_level__1_sm_ehs_B.OpInput_gb =
    boost_and_two_level__1_sm_ehs_P.In1_Value_l;

  /* DataTypeConversion: '<S31>/OpInput' incorporates:
   *  Constant: '<S31>/In1'
   */
  boost_and_two_level__1_sm_ehs_B.OpInput_k =
    boost_and_two_level__1_sm_ehs_P.In1_Value_m;

  /* DataTypeConversion: '<S32>/OpInput' incorporates:
   *  Constant: '<S32>/In1'
   */
  boost_and_two_level__1_sm_ehs_B.OpInput_ep =
    boost_and_two_level__1_sm_ehs_P.In1_Value_a;

  /* S-Function (OP_SEND): '<S66>/S-Function' */

  /* Level2 S-Function Block: '<S66>/S-Function' (OP_SEND) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_ehs_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* S-Function (RECV_Param): '<S21>/S-Function' */

  /* Level2 S-Function Block: '<S21>/S-Function' (RECV_Param) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_ehs_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  /* Outputs for Atomic SubSystem: '<S13>/OpOutput' */
  /* S-Function (RECV_Param): '<S21>/S-Function' */
  boost_and_two_level__1_OpOutput(&boost_and_two_level__1_sm_ehs_B.SFunction_p[3],
    &boost_and_two_level__1_sm_ehs_B.OpOutput);

  /* End of Outputs for SubSystem: '<S13>/OpOutput' */

  /* Saturate: '<S12>/Saturation' */
  u0 = boost_and_two_level__1_sm_ehs_B.SFunction_p[7];
  u1 = boost_and_two_level__1_sm_ehs_P.Saturation_LowerSat;
  u2 = boost_and_two_level__1_sm_ehs_P.Saturation_UpperSat;
  if (u0 > u2) {
    /* Saturate: '<S12>/Saturation' */
    boost_and_two_level__1_sm_ehs_B.Saturation = u2;
  } else if (u0 < u1) {
    /* Saturate: '<S12>/Saturation' */
    boost_and_two_level__1_sm_ehs_B.Saturation = u1;
  } else {
    /* Saturate: '<S12>/Saturation' */
    boost_and_two_level__1_sm_ehs_B.Saturation = u0;
  }

  /* End of Saturate: '<S12>/Saturation' */

  /* Gain: '<S11>/Adder_Gain' */
  currentTime = 6.2831853071795862 * boost_and_two_level__1_sm_ehs_P.Ts;

  /* Gain: '<S11>/Adder_Gain' */
  boost_and_two_level__1_sm_ehs_B.Adder_Gain = currentTime *
    boost_and_two_level__1_sm_ehs_B.SFunction_p[6];

  /* Memory: '<S11>/Memory' */
  boost_and_two_level__1_sm_ehs_B.Memory =
    boost_and_two_level__1_sm_ehs_DW.Memory_PreviousInput;

  /* Sum: '<S11>/Adder' */
  boost_and_two_level__1_sm_ehs_B.Adder =
    boost_and_two_level__1_sm_ehs_B.Adder_Gain +
    boost_and_two_level__1_sm_ehs_B.Memory;

  /* Sum: '<S11>/Adder_Pred' incorporates:
   *  Constant: '<S11>/Constant3'
   */
  boost_and_two_level__1_sm_ehs_B.Adder_Pred =
    boost_and_two_level__1_sm_ehs_B.Adder -
    boost_and_two_level__1_sm_ehs_P.Constant3_Value;

  /* Switch: '<S11>/Switch' */
  if (boost_and_two_level__1_sm_ehs_B.Adder_Pred >
      boost_and_two_level__1_sm_ehs_P.Switch_Threshold) {
    /* Switch: '<S11>/Switch' */
    boost_and_two_level__1_sm_ehs_B.Switch =
      boost_and_two_level__1_sm_ehs_B.Adder_Pred;
  } else {
    /* Switch: '<S11>/Switch' */
    boost_and_two_level__1_sm_ehs_B.Switch =
      boost_and_two_level__1_sm_ehs_B.Adder;
  }

  /* End of Switch: '<S11>/Switch' */

  /* Sum: '<S5>/Sum' */
  boost_and_two_level__1_sm_ehs_B.Sum_l = boost_and_two_level__1_sm_ehs_B.Switch
    + boost_and_two_level__1_sm_ehs_B.SFunction_p[8];

  /* Sin: '<S12>/Three-phase Sine Wave' */
  boost_and_two_level__1_sm_ehs_B.ThreephaseSineWave[0] = sin
    (boost_and_two_level__1_sm_ehs_P.ThreephaseSineWave_Freq *
     boost_and_two_level__1_sm_ehs_B.Sum_l +
     boost_and_two_level__1_sm_ehs_P.Inv_PWM_Phases[0]) *
    boost_and_two_level__1_sm_ehs_P.ThreephaseSineWave_Amp +
    boost_and_two_level__1_sm_ehs_P.ThreephaseSineWave_Bias;
  boost_and_two_level__1_sm_ehs_B.ThreephaseSineWave[1] = sin
    (boost_and_two_level__1_sm_ehs_P.ThreephaseSineWave_Freq *
     boost_and_two_level__1_sm_ehs_B.Sum_l +
     boost_and_two_level__1_sm_ehs_P.Inv_PWM_Phases[1]) *
    boost_and_two_level__1_sm_ehs_P.ThreephaseSineWave_Amp +
    boost_and_two_level__1_sm_ehs_P.ThreephaseSineWave_Bias;
  boost_and_two_level__1_sm_ehs_B.ThreephaseSineWave[2] = sin
    (boost_and_two_level__1_sm_ehs_P.ThreephaseSineWave_Freq *
     boost_and_two_level__1_sm_ehs_B.Sum_l +
     boost_and_two_level__1_sm_ehs_P.Inv_PWM_Phases[2]) *
    boost_and_two_level__1_sm_ehs_P.ThreephaseSineWave_Amp +
    boost_and_two_level__1_sm_ehs_P.ThreephaseSineWave_Bias;

  /* Product: '<S12>/Product' */
  boost_and_two_level__1_sm_ehs_B.Product[0] =
    boost_and_two_level__1_sm_ehs_B.Saturation *
    boost_and_two_level__1_sm_ehs_B.ThreephaseSineWave[0];
  boost_and_two_level__1_sm_ehs_B.Product[1] =
    boost_and_two_level__1_sm_ehs_B.Saturation *
    boost_and_two_level__1_sm_ehs_B.ThreephaseSineWave[1];
  boost_and_two_level__1_sm_ehs_B.Product[2] =
    boost_and_two_level__1_sm_ehs_B.Saturation *
    boost_and_two_level__1_sm_ehs_B.ThreephaseSineWave[2];

  /* Gain: '<S12>/Gain' */
  boost_and_two_level__1_sm_ehs_B.Gain[0] =
    boost_and_two_level__1_sm_ehs_P.Gain_Gain *
    boost_and_two_level__1_sm_ehs_B.Product[0];
  boost_and_two_level__1_sm_ehs_B.Gain[1] =
    boost_and_two_level__1_sm_ehs_P.Gain_Gain *
    boost_and_two_level__1_sm_ehs_B.Product[1];
  boost_and_two_level__1_sm_ehs_B.Gain[2] =
    boost_and_two_level__1_sm_ehs_P.Gain_Gain *
    boost_and_two_level__1_sm_ehs_B.Product[2];

  /* Sum: '<S12>/Sum' incorporates:
   *  Constant: '<S12>/Constant'
   */
  boost_and_two_level__1_sm_ehs_B.Sum_k[0] =
    boost_and_two_level__1_sm_ehs_B.Gain[0] +
    boost_and_two_level__1_sm_ehs_P.Constant_Value;
  boost_and_two_level__1_sm_ehs_B.Sum_k[1] =
    boost_and_two_level__1_sm_ehs_B.Gain[1] +
    boost_and_two_level__1_sm_ehs_P.Constant_Value;
  boost_and_two_level__1_sm_ehs_B.Sum_k[2] =
    boost_and_two_level__1_sm_ehs_B.Gain[2] +
    boost_and_two_level__1_sm_ehs_P.Constant_Value;

  /* DataTypeConversion: '<S7>/Data Type Conversion' */
  boost_and_two_level__1_sm_ehs_B.DataTypeConversion[0] =
    boost_and_two_level__1_sm_ehs_B.Sum_k[0];
  boost_and_two_level__1_sm_ehs_B.DataTypeConversion[1] =
    boost_and_two_level__1_sm_ehs_B.Sum_k[1];
  boost_and_two_level__1_sm_ehs_B.DataTypeConversion[2] =
    boost_and_two_level__1_sm_ehs_B.Sum_k[2];

  /* SignalConversion generated from: '<S14>/OpOutput' */
  boost_and_two_level__1_sm_ehs_B.TmpSignalConversionAtOpOutputIn[0] =
    boost_and_two_level__1_sm_ehs_B.SFunction_p[5];
  boost_and_two_level__1_sm_ehs_B.TmpSignalConversionAtOpOutputIn[1] =
    boost_and_two_level__1_sm_ehs_B.DataTypeConversion[0];

  /* Outputs for Atomic SubSystem: '<S14>/OpOutput' */
  boost_and_two_level__1_OpOutput
    (boost_and_two_level__1_sm_ehs_B.TmpSignalConversionAtOpOutputIn,
     &boost_and_two_level__1_sm_ehs_B.OpOutput_m);

  /* End of Outputs for SubSystem: '<S14>/OpOutput' */

  /* SignalConversion generated from: '<S15>/OpOutput' */
  boost_and_two_level__1_sm_ehs_B.TmpSignalConversionAtOpOutput_m[0] =
    boost_and_two_level__1_sm_ehs_B.SFunction_p[5];
  boost_and_two_level__1_sm_ehs_B.TmpSignalConversionAtOpOutput_m[1] =
    boost_and_two_level__1_sm_ehs_B.DataTypeConversion[1];

  /* Outputs for Atomic SubSystem: '<S15>/OpOutput' */
  boost_and_two_level__1_OpOutput
    (boost_and_two_level__1_sm_ehs_B.TmpSignalConversionAtOpOutput_m,
     &boost_and_two_level__1_sm_ehs_B.OpOutput_c);

  /* End of Outputs for SubSystem: '<S15>/OpOutput' */

  /* SignalConversion generated from: '<S16>/OpOutput' */
  boost_and_two_level__1_sm_ehs_B.TmpSignalConversionAtOpOutput_d[0] =
    boost_and_two_level__1_sm_ehs_B.SFunction_p[5];
  boost_and_two_level__1_sm_ehs_B.TmpSignalConversionAtOpOutput_d[1] =
    boost_and_two_level__1_sm_ehs_B.DataTypeConversion[2];

  /* Outputs for Atomic SubSystem: '<S16>/OpOutput' */
  boost_and_two_level__1_OpOutput
    (boost_and_two_level__1_sm_ehs_B.TmpSignalConversionAtOpOutput_d,
     &boost_and_two_level__1_sm_ehs_B.OpOutput_cr);

  /* End of Outputs for SubSystem: '<S16>/OpOutput' */

  /* Sin: '<S6>/Three-phase Sine Wave' */
  boost_and_two_level__1_sm_ehs_B.ThreephaseSineWave_i[0] = sin
    (boost_and_two_level__1_sm_ehs_P.ThreephaseSineWave_Freq_e *
     boost_and_two_level__1_sm_ehs_B.Switch +
     boost_and_two_level__1_sm_ehs_P.Inv_PWM_Phases[0]) *
    boost_and_two_level__1_sm_ehs_P.ThreephaseSineWave_Amp_c +
    boost_and_two_level__1_sm_ehs_P.ThreephaseSineWave_Bias_n;
  boost_and_two_level__1_sm_ehs_B.ThreephaseSineWave_i[1] = sin
    (boost_and_two_level__1_sm_ehs_P.ThreephaseSineWave_Freq_e *
     boost_and_two_level__1_sm_ehs_B.Switch +
     boost_and_two_level__1_sm_ehs_P.Inv_PWM_Phases[1]) *
    boost_and_two_level__1_sm_ehs_P.ThreephaseSineWave_Amp_c +
    boost_and_two_level__1_sm_ehs_P.ThreephaseSineWave_Bias_n;
  boost_and_two_level__1_sm_ehs_B.ThreephaseSineWave_i[2] = sin
    (boost_and_two_level__1_sm_ehs_P.ThreephaseSineWave_Freq_e *
     boost_and_two_level__1_sm_ehs_B.Switch +
     boost_and_two_level__1_sm_ehs_P.Inv_PWM_Phases[2]) *
    boost_and_two_level__1_sm_ehs_P.ThreephaseSineWave_Amp_c +
    boost_and_two_level__1_sm_ehs_P.ThreephaseSineWave_Bias_n;

  /* Product: '<S6>/Amplitude_Gain' */
  boost_and_two_level__1_sm_ehs_B.Amplitude_Gain[0] =
    boost_and_two_level__1_sm_ehs_B.SFunction_p[1] *
    boost_and_two_level__1_sm_ehs_B.ThreephaseSineWave_i[0];
  boost_and_two_level__1_sm_ehs_B.Amplitude_Gain[1] =
    boost_and_two_level__1_sm_ehs_B.SFunction_p[1] *
    boost_and_two_level__1_sm_ehs_B.ThreephaseSineWave_i[1];
  boost_and_two_level__1_sm_ehs_B.Amplitude_Gain[2] =
    boost_and_two_level__1_sm_ehs_B.SFunction_p[1] *
    boost_and_two_level__1_sm_ehs_B.ThreephaseSineWave_i[2];

  /* Outputs for Atomic SubSystem: '<S33>/OpOutput' */
  boost_and_two_level__OpOutput_k(boost_and_two_level__1_sm_ehs_B.OpInput,
    &boost_and_two_level__1_sm_ehs_B.OpOutput_k);

  /* End of Outputs for SubSystem: '<S33>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S34>/OpOutput' */
  boost_and_two_level__OpOutput_k(boost_and_two_level__1_sm_ehs_B.OpInput_e,
    &boost_and_two_level__1_sm_ehs_B.OpOutput_mf);

  /* End of Outputs for SubSystem: '<S34>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S35>/OpOutput' */
  boost_and_two_level__OpOutput_k(boost_and_two_level__1_sm_ehs_B.OpInput_m,
    &boost_and_two_level__1_sm_ehs_B.OpOutput_cv);

  /* End of Outputs for SubSystem: '<S35>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S36>/OpOutput' */
  boost_and_two_level__OpOutput_k(boost_and_two_level__1_sm_ehs_B.OpInput_h,
    &boost_and_two_level__1_sm_ehs_B.OpOutput_l);

  /* End of Outputs for SubSystem: '<S36>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S37>/OpOutput' */
  boost_and_two_level__OpOutput_k(boost_and_two_level__1_sm_ehs_B.OpInput_g,
    &boost_and_two_level__1_sm_ehs_B.OpOutput_cp);

  /* End of Outputs for SubSystem: '<S37>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S38>/OpOutput' */
  boost_and_two_level__OpOutput_k(boost_and_two_level__1_sm_ehs_B.OpInput_gb,
    &boost_and_two_level__1_sm_ehs_B.OpOutput_n);

  /* End of Outputs for SubSystem: '<S38>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S40>/OpOutput' */
  boost_and_two_level__OpOutput_k(boost_and_two_level__1_sm_ehs_B.OpInput_k,
    &boost_and_two_level__1_sm_ehs_B.OpOutput_e);

  /* End of Outputs for SubSystem: '<S40>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S41>/OpOutput' */
  boost_and_two_level__OpOutput_k(boost_and_two_level__1_sm_ehs_B.OpInput_ep,
    &boost_and_two_level__1_sm_ehs_B.OpOutput_o);

  /* End of Outputs for SubSystem: '<S41>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S39>/OpOutput' */
  /* Constant: '<S2>/g1' */
  boost_and_two_level__OpOutput_k(boost_and_two_level__1_sm_ehs_P.g1_Value,
    &boost_and_two_level__1_sm_ehs_B.OpOutput_h);

  /* End of Outputs for SubSystem: '<S39>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S42>/OpOutput' */
  boost_and_two_level__OpOutput_k(boost_and_two_level__1_sm_ehs_B.SFunction_p[2],
    &boost_and_two_level__1_sm_ehs_B.OpOutput_ci);

  /* End of Outputs for SubSystem: '<S42>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S45>/OpOutput' */
  boost_and_two_level__OpOutput_k(boost_and_two_level__1_sm_ehs_B.SFunction_p[0],
    &boost_and_two_level__1_sm_ehs_B.OpOutput_d);

  /* End of Outputs for SubSystem: '<S45>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S46>/OpOutput' */
  boost_and_two_level__OpOutput_k
    (boost_and_two_level__1_sm_ehs_B.Amplitude_Gain[0],
     &boost_and_two_level__1_sm_ehs_B.OpOutput_jn);

  /* End of Outputs for SubSystem: '<S46>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S47>/OpOutput' */
  boost_and_two_level__OpOutput_k
    (boost_and_two_level__1_sm_ehs_B.Amplitude_Gain[1],
     &boost_and_two_level__1_sm_ehs_B.OpOutput_a);

  /* End of Outputs for SubSystem: '<S47>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S48>/OpOutput' */
  boost_and_two_level__OpOutput_k
    (boost_and_two_level__1_sm_ehs_B.Amplitude_Gain[2],
     &boost_and_two_level__1_sm_ehs_B.OpOutput_ex);

  /* End of Outputs for SubSystem: '<S48>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S43>/OpOutput' */
  boost_and_two_level__OpOutput_k(0.0,
    &boost_and_two_level__1_sm_ehs_B.OpOutput_j);

  /* End of Outputs for SubSystem: '<S43>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S44>/OpOutput' */
  boost_and_two_level__OpOutput_k(0.0,
    &boost_and_two_level__1_sm_ehs_B.OpOutput_g);

  /* End of Outputs for SubSystem: '<S44>/OpOutput' */

  /* Constant: '<S4>/Constant' */
  boost_and_two_level__1_sm_ehs_B.Constant =
    boost_and_two_level__1_sm_ehs_P.Constant_Value_e;

  /* Step: '<S4>/Step' */
  currentTime = boost_and_two_level__1_sm_ehs_M->Timing.t[0];
  if (currentTime < boost_and_two_level__1_sm_ehs_P.Step_Time) {
    /* Step: '<S4>/Step' */
    boost_and_two_level__1_sm_ehs_B.Step =
      boost_and_two_level__1_sm_ehs_P.Step_Y0;
  } else {
    /* Step: '<S4>/Step' */
    boost_and_two_level__1_sm_ehs_B.Step =
      boost_and_two_level__1_sm_ehs_P.Step_YFinal;
  }

  /* End of Step: '<S4>/Step' */

  /* S-Function (optrigger): '<S4>/OpTrigger' */

  /* Level2 S-Function Block: '<S4>/OpTrigger' (optrigger) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_ehs_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }
}

/* Model update function */
static void boost_and_two_level__1_sm_ehs_update(void)
{
  /* Update for Memory: '<S1>/S-Function' */
  boost_and_two_level__1_sm_ehs_DW.SFunction_PreviousInput =
    boost_and_two_level__1_sm_ehs_B.Sum;

  /* Update for Memory: '<S11>/Memory' */
  boost_and_two_level__1_sm_ehs_DW.Memory_PreviousInput =
    boost_and_two_level__1_sm_ehs_B.Switch;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++boost_and_two_level__1_sm_ehs_M->Timing.clockTick0)) {
    ++boost_and_two_level__1_sm_ehs_M->Timing.clockTickH0;
  }

  boost_and_two_level__1_sm_ehs_M->Timing.t[0] =
    boost_and_two_level__1_sm_ehs_M->Timing.clockTick0 *
    boost_and_two_level__1_sm_ehs_M->Timing.stepSize0 +
    boost_and_two_level__1_sm_ehs_M->Timing.clockTickH0 *
    boost_and_two_level__1_sm_ehs_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void boost_and_two_level__1_sm_ehs_initialize(void)
{
  /* Start for Constant: '<S4>/Constant' */
  boost_and_two_level__1_sm_ehs_B.Constant =
    boost_and_two_level__1_sm_ehs_P.Constant_Value_e;

  /* user code (Initialize function Body) */

  /* System '<Root>' */

  /* Opal-RT Technologies */
  opalSizeDwork = sizeof(rtDWork);
  if (Opal_rtmGetNumBlockIO(pRtModel) != 0)
    opalSizeBlockIO = sizeof(rtB);
  else
    opalSizeBlockIO = 0;
  if (Opal_rtmGetNumBlockParams(pRtModel) != 0)
    opalSizeRTP = sizeof(rtP);
  else
    opalSizeRTP = 0;

  /* InitializeConditions for Memory: '<S1>/S-Function' */
  boost_and_two_level__1_sm_ehs_DW.SFunction_PreviousInput =
    boost_and_two_level__1_sm_ehs_P.SFunction_InitialCondition;

  /* InitializeConditions for S-Function (OP_SEND): '<S66>/S-Function' */
  /* Level2 S-Function Block: '<S66>/S-Function' (OP_SEND) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_ehs_M->childSfunctions[0];
    sfcnInitializeConditions(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for S-Function (RECV_Param): '<S21>/S-Function' */
  /* Level2 S-Function Block: '<S21>/S-Function' (RECV_Param) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_ehs_M->childSfunctions[1];
    sfcnInitializeConditions(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for Memory: '<S11>/Memory' */
  boost_and_two_level__1_sm_ehs_DW.Memory_PreviousInput =
    boost_and_two_level__1_sm_ehs_P.Memory_InitialCondition;

  /* InitializeConditions for S-Function (optrigger): '<S4>/OpTrigger' */
  /* Level2 S-Function Block: '<S4>/OpTrigger' (optrigger) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_ehs_M->childSfunctions[2];
    sfcnInitializeConditions(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

/* Model terminate function */
static void boost_and_two_level__1_sm_ehs_terminate(void)
{
  /* Terminate for S-Function (OP_SEND): '<S66>/S-Function' */
  /* Level2 S-Function Block: '<S66>/S-Function' (OP_SEND) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_ehs_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (RECV_Param): '<S21>/S-Function' */
  /* Level2 S-Function Block: '<S21>/S-Function' (RECV_Param) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_ehs_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (optrigger): '<S4>/OpTrigger' */
  /* Level2 S-Function Block: '<S4>/OpTrigger' (optrigger) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_ehs_M->childSfunctions[2];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  boost_and_two_level__1_sm_ehs_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  boost_and_two_level__1_sm_ehs_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  boost_and_two_level__1_sm_ehs_initialize();
}

void MdlTerminate(void)
{
  boost_and_two_level__1_sm_ehs_terminate();
}

/* Registration function */
RT_MODEL_boost_and_two_level__1_sm_ehs_T *boost_and_two_level__1_sm_ehs(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)boost_and_two_level__1_sm_ehs_M, 0,
                sizeof(RT_MODEL_boost_and_two_level__1_sm_ehs_T));
  rtsiSetSolverName(&boost_and_two_level__1_sm_ehs_M->solverInfo,
                    "FixedStepDiscrete");
  boost_and_two_level__1_sm_ehs_M->solverInfoPtr =
    (&boost_and_two_level__1_sm_ehs_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap =
      boost_and_two_level__1_sm_ehs_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "boost_and_two_level__1_sm_ehs_M points to
       static memory which is guaranteed to be non-NULL" */
    boost_and_two_level__1_sm_ehs_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    boost_and_two_level__1_sm_ehs_M->Timing.sampleTimes =
      (&boost_and_two_level__1_sm_ehs_M->Timing.sampleTimesArray[0]);
    boost_and_two_level__1_sm_ehs_M->Timing.offsetTimes =
      (&boost_and_two_level__1_sm_ehs_M->Timing.offsetTimesArray[0]);

    /* task periods */
    boost_and_two_level__1_sm_ehs_M->Timing.sampleTimes[0] = (2.0E-5);

    /* task offsets */
    boost_and_two_level__1_sm_ehs_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(boost_and_two_level__1_sm_ehs_M,
             &boost_and_two_level__1_sm_ehs_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits =
      boost_and_two_level__1_sm_ehs_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    boost_and_two_level__1_sm_ehs_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(boost_and_two_level__1_sm_ehs_M, -1);
  boost_and_two_level__1_sm_ehs_M->Timing.stepSize0 = 2.0E-5;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    boost_and_two_level__1_sm_ehs_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(boost_and_two_level__1_sm_ehs_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(boost_and_two_level__1_sm_ehs_M->rtwLogInfo, (NULL));
    rtliSetLogT(boost_and_two_level__1_sm_ehs_M->rtwLogInfo, "");
    rtliSetLogX(boost_and_two_level__1_sm_ehs_M->rtwLogInfo, "");
    rtliSetLogXFinal(boost_and_two_level__1_sm_ehs_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(boost_and_two_level__1_sm_ehs_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(boost_and_two_level__1_sm_ehs_M->rtwLogInfo, 0);
    rtliSetLogMaxRows(boost_and_two_level__1_sm_ehs_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(boost_and_two_level__1_sm_ehs_M->rtwLogInfo, 1);
    rtliSetLogY(boost_and_two_level__1_sm_ehs_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(boost_and_two_level__1_sm_ehs_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(boost_and_two_level__1_sm_ehs_M->rtwLogInfo, (NULL));
  }

  boost_and_two_level__1_sm_ehs_M->solverInfoPtr =
    (&boost_and_two_level__1_sm_ehs_M->solverInfo);
  boost_and_two_level__1_sm_ehs_M->Timing.stepSize = (2.0E-5);
  rtsiSetFixedStepSize(&boost_and_two_level__1_sm_ehs_M->solverInfo, 2.0E-5);
  rtsiSetSolverMode(&boost_and_two_level__1_sm_ehs_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  boost_and_two_level__1_sm_ehs_M->ModelData.blockIO = ((void *)
    &boost_and_two_level__1_sm_ehs_B);

  {
    int32_T i;
    for (i = 0; i < 9; i++) {
      boost_and_two_level__1_sm_ehs_B.SFunction_p[i] = 0.0;
    }

    boost_and_two_level__1_sm_ehs_B.SFunction = 0.0;
    boost_and_two_level__1_sm_ehs_B.Sum = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpInput = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpInput_e = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpInput_m = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpInput_h = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpInput_g = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpInput_gb = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpInput_k = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpInput_ep = 0.0;
    boost_and_two_level__1_sm_ehs_B.Saturation = 0.0;
    boost_and_two_level__1_sm_ehs_B.Adder_Gain = 0.0;
    boost_and_two_level__1_sm_ehs_B.Memory = 0.0;
    boost_and_two_level__1_sm_ehs_B.Adder = 0.0;
    boost_and_two_level__1_sm_ehs_B.Adder_Pred = 0.0;
    boost_and_two_level__1_sm_ehs_B.Switch = 0.0;
    boost_and_two_level__1_sm_ehs_B.Sum_l = 0.0;
    boost_and_two_level__1_sm_ehs_B.ThreephaseSineWave[0] = 0.0;
    boost_and_two_level__1_sm_ehs_B.ThreephaseSineWave[1] = 0.0;
    boost_and_two_level__1_sm_ehs_B.ThreephaseSineWave[2] = 0.0;
    boost_and_two_level__1_sm_ehs_B.Product[0] = 0.0;
    boost_and_two_level__1_sm_ehs_B.Product[1] = 0.0;
    boost_and_two_level__1_sm_ehs_B.Product[2] = 0.0;
    boost_and_two_level__1_sm_ehs_B.Gain[0] = 0.0;
    boost_and_two_level__1_sm_ehs_B.Gain[1] = 0.0;
    boost_and_two_level__1_sm_ehs_B.Gain[2] = 0.0;
    boost_and_two_level__1_sm_ehs_B.Sum_k[0] = 0.0;
    boost_and_two_level__1_sm_ehs_B.Sum_k[1] = 0.0;
    boost_and_two_level__1_sm_ehs_B.Sum_k[2] = 0.0;
    boost_and_two_level__1_sm_ehs_B.DataTypeConversion[0] = 0.0;
    boost_and_two_level__1_sm_ehs_B.DataTypeConversion[1] = 0.0;
    boost_and_two_level__1_sm_ehs_B.DataTypeConversion[2] = 0.0;
    boost_and_two_level__1_sm_ehs_B.TmpSignalConversionAtOpOutputIn[0] = 0.0;
    boost_and_two_level__1_sm_ehs_B.TmpSignalConversionAtOpOutputIn[1] = 0.0;
    boost_and_two_level__1_sm_ehs_B.TmpSignalConversionAtOpOutput_m[0] = 0.0;
    boost_and_two_level__1_sm_ehs_B.TmpSignalConversionAtOpOutput_m[1] = 0.0;
    boost_and_two_level__1_sm_ehs_B.TmpSignalConversionAtOpOutput_d[0] = 0.0;
    boost_and_two_level__1_sm_ehs_B.TmpSignalConversionAtOpOutput_d[1] = 0.0;
    boost_and_two_level__1_sm_ehs_B.ThreephaseSineWave_i[0] = 0.0;
    boost_and_two_level__1_sm_ehs_B.ThreephaseSineWave_i[1] = 0.0;
    boost_and_two_level__1_sm_ehs_B.ThreephaseSineWave_i[2] = 0.0;
    boost_and_two_level__1_sm_ehs_B.Amplitude_Gain[0] = 0.0;
    boost_and_two_level__1_sm_ehs_B.Amplitude_Gain[1] = 0.0;
    boost_and_two_level__1_sm_ehs_B.Amplitude_Gain[2] = 0.0;
    boost_and_two_level__1_sm_ehs_B.Constant = 0.0;
    boost_and_two_level__1_sm_ehs_B.Step = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpTrigger = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpOutput_ex.DataTypeConversion = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpOutput_a.DataTypeConversion = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpOutput_jn.DataTypeConversion = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpOutput_d.DataTypeConversion = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpOutput_g.DataTypeConversion = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpOutput_j.DataTypeConversion = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpOutput_ci.DataTypeConversion = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpOutput_o.DataTypeConversion = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpOutput_e.DataTypeConversion = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpOutput_h.DataTypeConversion = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpOutput_n.DataTypeConversion = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpOutput_cp.DataTypeConversion = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpOutput_l.DataTypeConversion = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpOutput_cv.DataTypeConversion = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpOutput_mf.DataTypeConversion = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpOutput_k.DataTypeConversion = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpOutput_cr.DataTypeConversion[0] = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpOutput_cr.DataTypeConversion[1] = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpOutput_c.DataTypeConversion[0] = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpOutput_c.DataTypeConversion[1] = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpOutput_m.DataTypeConversion[0] = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpOutput_m.DataTypeConversion[1] = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpOutput.DataTypeConversion[0] = 0.0;
    boost_and_two_level__1_sm_ehs_B.OpOutput.DataTypeConversion[1] = 0.0;
  }

  /* parameters */
  boost_and_two_level__1_sm_ehs_M->ModelData.defaultParam = ((real_T *)
    &boost_and_two_level__1_sm_ehs_P);

  /* states (dwork) */
  boost_and_two_level__1_sm_ehs_M->ModelData.dwork = ((void *)
    &boost_and_two_level__1_sm_ehs_DW);
  (void) memset((void *)&boost_and_two_level__1_sm_ehs_DW, 0,
                sizeof(DW_boost_and_two_level__1_sm_ehs_T));
  boost_and_two_level__1_sm_ehs_DW.SFunction_PreviousInput = 0.0;
  boost_and_two_level__1_sm_ehs_DW.Memory_PreviousInput = 0.0;

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo =
      &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.sfcnInfo;
    boost_and_two_level__1_sm_ehs_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (boost_and_two_level__1_sm_ehs_M)));
    boost_and_two_level__1_sm_ehs_M->Sizes.numSampTimes = (1);
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &boost_and_two_level__1_sm_ehs_M->Sizes.numSampTimes);
    boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.taskTimePtrs[0] =
      &(rtmGetTPtr(boost_and_two_level__1_sm_ehs_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,
                   boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(boost_and_two_level__1_sm_ehs_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(boost_and_two_level__1_sm_ehs_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (boost_and_two_level__1_sm_ehs_M));
    rtssSetStepSizePtr(sfcnInfo,
                       &boost_and_two_level__1_sm_ehs_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (boost_and_two_level__1_sm_ehs_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &boost_and_two_level__1_sm_ehs_M->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &boost_and_two_level__1_sm_ehs_M->ModelData.zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &boost_and_two_level__1_sm_ehs_M->ModelData.CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo,
                         &boost_and_two_level__1_sm_ehs_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &boost_and_two_level__1_sm_ehs_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &boost_and_two_level__1_sm_ehs_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo,
                         &boost_and_two_level__1_sm_ehs_M->solverInfoPtr);
  }

  boost_and_two_level__1_sm_ehs_M->Sizes.numSFcns = (3);

  /* register each child */
  {
    (void) memset((void *)
                  &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.childSFunctions
                  [0], 0,
                  3*sizeof(SimStruct));
    boost_and_two_level__1_sm_ehs_M->childSfunctions =
      (&boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    boost_and_two_level__1_sm_ehs_M->childSfunctions[0] =
      (&boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.childSFunctions[0]);
    boost_and_two_level__1_sm_ehs_M->childSfunctions[1] =
      (&boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.childSFunctions[1]);
    boost_and_two_level__1_sm_ehs_M->childSfunctions[2] =
      (&boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.childSFunctions[2]);

    /* Level2 S-Function Block: boost_and_two_level__1_sm_ehs/<S66>/S-Function (OP_SEND) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_ehs_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, boost_and_two_level__1_sm_ehs_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.Sfcn0.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &boost_and_two_level__1_sm_ehs_M->
          NonInlinedSFcns.Sfcn0.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.Sfcn0.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = &boost_and_two_level__1_sm_ehs_B.OpInput;
          sfcnUPtrs[1] = &boost_and_two_level__1_sm_ehs_B.OpInput_e;
          sfcnUPtrs[2] = &boost_and_two_level__1_sm_ehs_B.OpInput_m;
          sfcnUPtrs[3] = &boost_and_two_level__1_sm_ehs_B.OpInput_h;
          sfcnUPtrs[4] = &boost_and_two_level__1_sm_ehs_B.OpInput_g;
          sfcnUPtrs[5] = &boost_and_two_level__1_sm_ehs_B.OpInput_gb;
          sfcnUPtrs[6] = &boost_and_two_level__1_sm_ehs_B.OpInput_k;
          sfcnUPtrs[7] = &boost_and_two_level__1_sm_ehs_B.OpInput_ep;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 8);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "boost_and_two_level__1_sm_ehs/SM_eHS/rtlab_send_subsystem/Subsystem1/Send1/S-Function");
      ssSetRTModel(rts,boost_and_two_level__1_sm_ehs_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       boost_and_two_level__1_sm_ehs_P.SFunction_P1_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &boost_and_two_level__1_sm_ehs_DW.SFunction_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 5);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &boost_and_two_level__1_sm_ehs_DW.SFunction_IWORK[0]);
      }

      /* registration */
      OP_SEND(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 2.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 8);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: boost_and_two_level__1_sm_ehs/<S21>/S-Function (RECV_Param) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_ehs_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.blkInfo2
                         [1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, boost_and_two_level__1_sm_ehs_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.methods4
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &boost_and_two_level__1_sm_ehs_M->
          NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.Sfcn1.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 9);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            boost_and_two_level__1_sm_ehs_B.SFunction_p));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "boost_and_two_level__1_sm_ehs/SM_eHS/OpComm/Receive/S-Function");
      ssSetRTModel(rts,boost_and_two_level__1_sm_ehs_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       boost_and_two_level__1_sm_ehs_P.SFunction_P1_Size_j);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       boost_and_two_level__1_sm_ehs_P.SFunction_P2_Size);
      }

      /* registration */
      RECV_Param(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 2.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: boost_and_two_level__1_sm_ehs/<S4>/OpTrigger (optrigger) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_ehs_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.blkInfo2
                         [2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, boost_and_two_level__1_sm_ehs_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.methods2
                           [2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.methods3
                           [2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.methods4
                           [2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.Sfcn2.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &boost_and_two_level__1_sm_ehs_M->
          NonInlinedSFcns.Sfcn2.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.Sfcn2.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.Sfcn2.UPtrs0;
          sfcnUPtrs[0] = &boost_and_two_level__1_sm_ehs_B.Step;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.Sfcn2.UPtrs1;
          sfcnUPtrs[0] = &boost_and_two_level__1_sm_ehs_B.Constant;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &boost_and_two_level__1_sm_ehs_M->
          NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.Sfcn2.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.Sfcn2.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &boost_and_two_level__1_sm_ehs_B.OpTrigger));
        }
      }

      /* path info */
      ssSetModelName(rts, "OpTrigger");
      ssSetPath(rts,
                "boost_and_two_level__1_sm_ehs/SM_eHS/Acquisition Trigger/OpTrigger");
      ssSetRTModel(rts,boost_and_two_level__1_sm_ehs_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       boost_and_two_level__1_sm_ehs_P.OpTrigger_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       boost_and_two_level__1_sm_ehs_P.OpTrigger_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       boost_and_two_level__1_sm_ehs_P.OpTrigger_P3_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &boost_and_two_level__1_sm_ehs_DW.OpTrigger_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &boost_and_two_level__1_sm_ehs_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 5);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &boost_and_two_level__1_sm_ehs_DW.OpTrigger_IWORK[0]);
      }

      /* registration */
      optrigger(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 2.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }
  }

  /* Initialize Sizes */
  boost_and_two_level__1_sm_ehs_M->Sizes.numContStates = (0);/* Number of continuous states */
  boost_and_two_level__1_sm_ehs_M->Sizes.numY = (0);/* Number of model outputs */
  boost_and_two_level__1_sm_ehs_M->Sizes.numU = (0);/* Number of model inputs */
  boost_and_two_level__1_sm_ehs_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  boost_and_two_level__1_sm_ehs_M->Sizes.numSampTimes = (1);/* Number of sample times */
  boost_and_two_level__1_sm_ehs_M->Sizes.numBlocks = (67);/* Number of blocks */
  boost_and_two_level__1_sm_ehs_M->Sizes.numBlockIO = (51);/* Number of block outputs */
  boost_and_two_level__1_sm_ehs_M->Sizes.numBlockPrms = (58);/* Sum of parameter "widths" */
  return boost_and_two_level__1_sm_ehs_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
