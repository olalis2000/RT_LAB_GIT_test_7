/*
 * boost_and_two_level__1_sm_ehs_private.h
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

#ifndef RTW_HEADER_boost_and_two_level__1_sm_ehs_private_h_
#define RTW_HEADER_boost_and_two_level__1_sm_ehs_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "boost_and_two_level__1_sm_ehs.h"

extern void OP_SEND(SimStruct *rts);
extern void RECV_Param(SimStruct *rts);
extern void optrigger(SimStruct *rts);
extern void boost_and_two_level__1_OpOutput(const real_T rtu_In1[2],
  B_OpOutput_boost_and_two_leve_T *localB);
extern void boost_and_two_level__OpOutput_k(real_T rtu_In1,
  B_OpOutput_boost_and_two_le_c_T *localB);

#endif                 /* RTW_HEADER_boost_and_two_level__1_sm_ehs_private_h_ */
