/*
 * boost_and_two_level__1_sm_ehs_data.c
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

/* Block parameters (default storage) */
P_boost_and_two_level__1_sm_ehs_T boost_and_two_level__1_sm_ehs_P = {
  /* Variable: Inv_PWM_Phases
   * Referenced by:
   *   '<S6>/Three-phase Sine Wave' (Parameter: Phase)
   *   '<S12>/Three-phase Sine Wave' (Parameter: Phase)
   */
  { 0.0, -2.0943951023931953, 2.0943951023931953 },

  /* Variable: Ts
   * Referenced by: '<S11>/Adder_Gain' (Parameter: Gain)
   */
  2.0E-5,

  /* Expression: 0
   * Referenced by: '<S1>/S-Function1' (Parameter: Value)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/S-Function' (Parameter: InitialCondition)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S25>/In1' (Parameter: Value)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S26>/In1' (Parameter: Value)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S27>/In1' (Parameter: Value)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S28>/In1' (Parameter: Value)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S29>/In1' (Parameter: Value)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S30>/In1' (Parameter: Value)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S31>/In1' (Parameter: Value)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/In1' (Parameter: Value)
   */
  0.0,

  /* Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S66>/S-Function' (Parameter: P1Size)
   */
  { 1.0, 1.0 },

  /* Expression: Acqu_group
   * Referenced by: '<S66>/S-Function' (Parameter: P1)
   */
  1.0,

  /* Computed Parameter: SFunction_P1_Size_j
   * Referenced by: '<S21>/S-Function' (Parameter: P1Size)
   */
  { 1.0, 1.0 },

  /* Expression: Data_width
   * Referenced by: '<S21>/S-Function' (Parameter: P1)
   */
  9.0,

  /* Computed Parameter: SFunction_P2_Size
   * Referenced by: '<S21>/S-Function' (Parameter: P2Size)
   */
  { 9.0, 1.0 },

  /* Expression: InitialConditions
   * Referenced by: '<S21>/S-Function' (Parameter: P2)
   */
  { 100.0, 25.0, 1.0, 10000.0, 0.7, 55000.0, 50.0, 0.8, 0.00349065850398866 },

  /* Expression: 0.95
   * Referenced by: '<S12>/Saturation' (Parameter: UpperLimit)
   */
  0.95,

  /* Expression: 0.05
   * Referenced by: '<S12>/Saturation' (Parameter: LowerLimit)
   */
  0.05,

  /* Expression: 2*pi
   * Referenced by: '<S11>/Constant3' (Parameter: Value)
   */
  6.2831853071795862,

  /* Expression: 0
   * Referenced by: '<S11>/Memory' (Parameter: InitialCondition)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S11>/Switch' (Parameter: Threshold)
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S12>/Three-phase Sine Wave' (Parameter: Amplitude)
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S12>/Three-phase Sine Wave' (Parameter: Bias)
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S12>/Three-phase Sine Wave' (Parameter: Frequency)
   */
  1.0,

  /* Expression: 0.5
   * Referenced by: '<S12>/Gain' (Parameter: Gain)
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S12>/Constant' (Parameter: Value)
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<S6>/Three-phase Sine Wave' (Parameter: Amplitude)
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S6>/Three-phase Sine Wave' (Parameter: Bias)
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S6>/Three-phase Sine Wave' (Parameter: Frequency)
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S2>/g1' (Parameter: Value)
   */
  0.0,

  /* Expression: .5
   * Referenced by: '<S4>/Constant' (Parameter: Value)
   */
  0.5,

  /* Expression: 0.50362
   * Referenced by: '<S4>/Step' (Parameter: Time)
   */
  0.50362,

  /* Expression: 0
   * Referenced by: '<S4>/Step' (Parameter: Before)
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S4>/Step' (Parameter: After)
   */
  1.0,

  /* Computed Parameter: OpTrigger_P1_Size
   * Referenced by: '<S4>/OpTrigger' (Parameter: P1Size)
   */
  { 1.0, 1.0 },

  /* Expression: Acq_Group
   * Referenced by: '<S4>/OpTrigger' (Parameter: P1)
   */
  1.0,

  /* Computed Parameter: OpTrigger_P2_Size
   * Referenced by: '<S4>/OpTrigger' (Parameter: P2Size)
   */
  { 1.0, 1.0 },

  /* Expression: Trig_Type
   * Referenced by: '<S4>/OpTrigger' (Parameter: P2)
   */
  4.0,

  /* Computed Parameter: OpTrigger_P3_Size
   * Referenced by: '<S4>/OpTrigger' (Parameter: P3Size)
   */
  { 1.0, 1.0 },

  /* Expression: Trig_Offset
   * Referenced by: '<S4>/OpTrigger' (Parameter: P3)
   */
  0.0
};
