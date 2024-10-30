#include "boost_and_two_level__1_sm_ehs.h"
#include <stdlib.h>
#include <stdint.h>

// Declared in OpalSimCore
extern uint32_t opalNumParameters;
extern uint32_t opalNumSignals;
extern void** opalParametersAdressMapping;
extern uint32_t* opalParametersSizeMapping;
extern uint32_t* opalParametersNumElementsMapping;
extern void** opalSignalsAdressMapping;
extern uint32_t* opalSignalsSizeMapping;
extern uint32_t* opalSignalsNumElementsMapping;
void OpalUnInitAdress(void)
{
  opalNumParameters = 0;
  opalNumSignals = 0;
  if (opalParametersAdressMapping)
    free(opalParametersAdressMapping);
  if (opalParametersSizeMapping)
    free(opalParametersSizeMapping);
  if (opalParametersNumElementsMapping)
    free(opalParametersNumElementsMapping);
  if (opalSignalsAdressMapping)
    free(opalSignalsAdressMapping);
  if (opalSignalsSizeMapping)
    free(opalSignalsSizeMapping);
  if (opalSignalsNumElementsMapping)
    free(opalSignalsNumElementsMapping);
}

void OpalInitAdress(void)
{
  OpalUnInitAdress();
  opalParametersAdressMapping = (void**)malloc(sizeof(void*) * 42);
  opalParametersSizeMapping = (uint32_t*)malloc(sizeof(uint32_t) * 42);
  opalParametersNumElementsMapping = (uint32_t*)malloc(sizeof(uint32_t) * 42);
  opalSignalsAdressMapping = (void**)malloc(sizeof(void*) * 51);
  opalSignalsSizeMapping = (uint32_t*)malloc(sizeof(uint32_t) * 51);
  opalSignalsNumElementsMapping = (uint32_t*)malloc(sizeof(uint32_t) * 51);
  opalParametersAdressMapping[0] = (void*)&rtP.Inv_PWM_Phases;
  opalParametersSizeMapping[0] = sizeof(rtP.Inv_PWM_Phases[0]);
  opalParametersNumElementsMapping[0] = 3;
  opalParametersAdressMapping[1] = (void*)&rtP.Ts;
  opalParametersSizeMapping[1] = sizeof(rtP.Ts);
  opalParametersNumElementsMapping[1] = 1;
  opalParametersAdressMapping[2] = (void*)&rtP.SFunction1_Value;
  opalParametersSizeMapping[2] = sizeof(rtP.SFunction1_Value);
  opalParametersNumElementsMapping[2] = 1;
  opalParametersAdressMapping[3] = (void*)&rtP.SFunction_InitialCondition;
  opalParametersSizeMapping[3] = sizeof(rtP.SFunction_InitialCondition);
  opalParametersNumElementsMapping[3] = 1;
  opalParametersAdressMapping[4] = (void*)&rtP.In1_Value;
  opalParametersSizeMapping[4] = sizeof(rtP.In1_Value);
  opalParametersNumElementsMapping[4] = 1;
  opalParametersAdressMapping[5] = (void*)&rtP.In1_Value_k;
  opalParametersSizeMapping[5] = sizeof(rtP.In1_Value_k);
  opalParametersNumElementsMapping[5] = 1;
  opalParametersAdressMapping[6] = (void*)&rtP.In1_Value_p;
  opalParametersSizeMapping[6] = sizeof(rtP.In1_Value_p);
  opalParametersNumElementsMapping[6] = 1;
  opalParametersAdressMapping[7] = (void*)&rtP.In1_Value_e;
  opalParametersSizeMapping[7] = sizeof(rtP.In1_Value_e);
  opalParametersNumElementsMapping[7] = 1;
  opalParametersAdressMapping[8] = (void*)&rtP.In1_Value_g;
  opalParametersSizeMapping[8] = sizeof(rtP.In1_Value_g);
  opalParametersNumElementsMapping[8] = 1;
  opalParametersAdressMapping[9] = (void*)&rtP.In1_Value_l;
  opalParametersSizeMapping[9] = sizeof(rtP.In1_Value_l);
  opalParametersNumElementsMapping[9] = 1;
  opalParametersAdressMapping[10] = (void*)&rtP.In1_Value_m;
  opalParametersSizeMapping[10] = sizeof(rtP.In1_Value_m);
  opalParametersNumElementsMapping[10] = 1;
  opalParametersAdressMapping[11] = (void*)&rtP.In1_Value_a;
  opalParametersSizeMapping[11] = sizeof(rtP.In1_Value_a);
  opalParametersNumElementsMapping[11] = 1;
  opalParametersAdressMapping[12] = (void*)&rtP.SFunction_P1_Size;
  opalParametersSizeMapping[12] = sizeof(rtP.SFunction_P1_Size[0]);
  opalParametersNumElementsMapping[12] = 2;
  opalParametersAdressMapping[13] = (void*)&rtP.SFunction_P1;
  opalParametersSizeMapping[13] = sizeof(rtP.SFunction_P1);
  opalParametersNumElementsMapping[13] = 1;
  opalParametersAdressMapping[14] = (void*)&rtP.SFunction_P1_Size_j;
  opalParametersSizeMapping[14] = sizeof(rtP.SFunction_P1_Size_j[0]);
  opalParametersNumElementsMapping[14] = 2;
  opalParametersAdressMapping[15] = (void*)&rtP.SFunction_P1_a;
  opalParametersSizeMapping[15] = sizeof(rtP.SFunction_P1_a);
  opalParametersNumElementsMapping[15] = 1;
  opalParametersAdressMapping[16] = (void*)&rtP.SFunction_P2_Size;
  opalParametersSizeMapping[16] = sizeof(rtP.SFunction_P2_Size[0]);
  opalParametersNumElementsMapping[16] = 2;
  opalParametersAdressMapping[17] = (void*)&rtP.SFunction_P2;
  opalParametersSizeMapping[17] = sizeof(rtP.SFunction_P2[0]);
  opalParametersNumElementsMapping[17] = 9;
  opalParametersAdressMapping[18] = (void*)&rtP.Saturation_UpperSat;
  opalParametersSizeMapping[18] = sizeof(rtP.Saturation_UpperSat);
  opalParametersNumElementsMapping[18] = 1;
  opalParametersAdressMapping[19] = (void*)&rtP.Saturation_LowerSat;
  opalParametersSizeMapping[19] = sizeof(rtP.Saturation_LowerSat);
  opalParametersNumElementsMapping[19] = 1;
  opalParametersAdressMapping[20] = (void*)&rtP.Constant3_Value;
  opalParametersSizeMapping[20] = sizeof(rtP.Constant3_Value);
  opalParametersNumElementsMapping[20] = 1;
  opalParametersAdressMapping[21] = (void*)&rtP.Memory_InitialCondition;
  opalParametersSizeMapping[21] = sizeof(rtP.Memory_InitialCondition);
  opalParametersNumElementsMapping[21] = 1;
  opalParametersAdressMapping[22] = (void*)&rtP.Switch_Threshold;
  opalParametersSizeMapping[22] = sizeof(rtP.Switch_Threshold);
  opalParametersNumElementsMapping[22] = 1;
  opalParametersAdressMapping[23] = (void*)&rtP.ThreephaseSineWave_Amp;
  opalParametersSizeMapping[23] = sizeof(rtP.ThreephaseSineWave_Amp);
  opalParametersNumElementsMapping[23] = 1;
  opalParametersAdressMapping[24] = (void*)&rtP.ThreephaseSineWave_Bias;
  opalParametersSizeMapping[24] = sizeof(rtP.ThreephaseSineWave_Bias);
  opalParametersNumElementsMapping[24] = 1;
  opalParametersAdressMapping[25] = (void*)&rtP.ThreephaseSineWave_Freq;
  opalParametersSizeMapping[25] = sizeof(rtP.ThreephaseSineWave_Freq);
  opalParametersNumElementsMapping[25] = 1;
  opalParametersAdressMapping[26] = (void*)&rtP.Gain_Gain;
  opalParametersSizeMapping[26] = sizeof(rtP.Gain_Gain);
  opalParametersNumElementsMapping[26] = 1;
  opalParametersAdressMapping[27] = (void*)&rtP.Constant_Value;
  opalParametersSizeMapping[27] = sizeof(rtP.Constant_Value);
  opalParametersNumElementsMapping[27] = 1;
  opalParametersAdressMapping[28] = (void*)&rtP.ThreephaseSineWave_Amp_c;
  opalParametersSizeMapping[28] = sizeof(rtP.ThreephaseSineWave_Amp_c);
  opalParametersNumElementsMapping[28] = 1;
  opalParametersAdressMapping[29] = (void*)&rtP.ThreephaseSineWave_Bias_n;
  opalParametersSizeMapping[29] = sizeof(rtP.ThreephaseSineWave_Bias_n);
  opalParametersNumElementsMapping[29] = 1;
  opalParametersAdressMapping[30] = (void*)&rtP.ThreephaseSineWave_Freq_e;
  opalParametersSizeMapping[30] = sizeof(rtP.ThreephaseSineWave_Freq_e);
  opalParametersNumElementsMapping[30] = 1;
  opalParametersAdressMapping[31] = (void*)&rtP.g1_Value;
  opalParametersSizeMapping[31] = sizeof(rtP.g1_Value);
  opalParametersNumElementsMapping[31] = 1;
  opalParametersAdressMapping[32] = (void*)&rtP.Constant_Value_e;
  opalParametersSizeMapping[32] = sizeof(rtP.Constant_Value_e);
  opalParametersNumElementsMapping[32] = 1;
  opalParametersAdressMapping[33] = (void*)&rtP.Step_Time;
  opalParametersSizeMapping[33] = sizeof(rtP.Step_Time);
  opalParametersNumElementsMapping[33] = 1;
  opalParametersAdressMapping[34] = (void*)&rtP.Step_Y0;
  opalParametersSizeMapping[34] = sizeof(rtP.Step_Y0);
  opalParametersNumElementsMapping[34] = 1;
  opalParametersAdressMapping[35] = (void*)&rtP.Step_YFinal;
  opalParametersSizeMapping[35] = sizeof(rtP.Step_YFinal);
  opalParametersNumElementsMapping[35] = 1;
  opalParametersAdressMapping[36] = (void*)&rtP.OpTrigger_P1_Size;
  opalParametersSizeMapping[36] = sizeof(rtP.OpTrigger_P1_Size[0]);
  opalParametersNumElementsMapping[36] = 2;
  opalParametersAdressMapping[37] = (void*)&rtP.OpTrigger_P1;
  opalParametersSizeMapping[37] = sizeof(rtP.OpTrigger_P1);
  opalParametersNumElementsMapping[37] = 1;
  opalParametersAdressMapping[38] = (void*)&rtP.OpTrigger_P2_Size;
  opalParametersSizeMapping[38] = sizeof(rtP.OpTrigger_P2_Size[0]);
  opalParametersNumElementsMapping[38] = 2;
  opalParametersAdressMapping[39] = (void*)&rtP.OpTrigger_P2;
  opalParametersSizeMapping[39] = sizeof(rtP.OpTrigger_P2);
  opalParametersNumElementsMapping[39] = 1;
  opalParametersAdressMapping[40] = (void*)&rtP.OpTrigger_P3_Size;
  opalParametersSizeMapping[40] = sizeof(rtP.OpTrigger_P3_Size[0]);
  opalParametersNumElementsMapping[40] = 2;
  opalParametersAdressMapping[41] = (void*)&rtP.OpTrigger_P3;
  opalParametersSizeMapping[41] = sizeof(rtP.OpTrigger_P3);
  opalParametersNumElementsMapping[41] = 1;
  opalSignalsAdressMapping[0] = (void*)&rtB.SFunction;
  opalSignalsSizeMapping[0] = sizeof(rtB.SFunction);
  opalSignalsNumElementsMapping[0] = 1;
  opalSignalsAdressMapping[1] = (void*)&rtB.Sum;
  opalSignalsSizeMapping[1] = sizeof(rtB.Sum);
  opalSignalsNumElementsMapping[1] = 1;
  opalSignalsAdressMapping[2] = (void*)&rtB.OpInput;
  opalSignalsSizeMapping[2] = sizeof(rtB.OpInput);
  opalSignalsNumElementsMapping[2] = 1;
  opalSignalsAdressMapping[3] = (void*)&rtB.OpInput_e;
  opalSignalsSizeMapping[3] = sizeof(rtB.OpInput_e);
  opalSignalsNumElementsMapping[3] = 1;
  opalSignalsAdressMapping[4] = (void*)&rtB.OpInput_m;
  opalSignalsSizeMapping[4] = sizeof(rtB.OpInput_m);
  opalSignalsNumElementsMapping[4] = 1;
  opalSignalsAdressMapping[5] = (void*)&rtB.OpInput_h;
  opalSignalsSizeMapping[5] = sizeof(rtB.OpInput_h);
  opalSignalsNumElementsMapping[5] = 1;
  opalSignalsAdressMapping[6] = (void*)&rtB.OpInput_g;
  opalSignalsSizeMapping[6] = sizeof(rtB.OpInput_g);
  opalSignalsNumElementsMapping[6] = 1;
  opalSignalsAdressMapping[7] = (void*)&rtB.OpInput_gb;
  opalSignalsSizeMapping[7] = sizeof(rtB.OpInput_gb);
  opalSignalsNumElementsMapping[7] = 1;
  opalSignalsAdressMapping[8] = (void*)&rtB.OpInput_k;
  opalSignalsSizeMapping[8] = sizeof(rtB.OpInput_k);
  opalSignalsNumElementsMapping[8] = 1;
  opalSignalsAdressMapping[9] = (void*)&rtB.OpInput_ep;
  opalSignalsSizeMapping[9] = sizeof(rtB.OpInput_ep);
  opalSignalsNumElementsMapping[9] = 1;
  opalSignalsAdressMapping[10] = (void*)&rtB.SFunction_p;
  opalSignalsSizeMapping[10] = sizeof(rtB.SFunction_p[0]);
  opalSignalsNumElementsMapping[10] = 9;
  opalSignalsAdressMapping[11] = (void*)&rtB.Saturation;
  opalSignalsSizeMapping[11] = sizeof(rtB.Saturation);
  opalSignalsNumElementsMapping[11] = 1;
  opalSignalsAdressMapping[12] = (void*)&rtB.Adder_Gain;
  opalSignalsSizeMapping[12] = sizeof(rtB.Adder_Gain);
  opalSignalsNumElementsMapping[12] = 1;
  opalSignalsAdressMapping[13] = (void*)&rtB.Memory;
  opalSignalsSizeMapping[13] = sizeof(rtB.Memory);
  opalSignalsNumElementsMapping[13] = 1;
  opalSignalsAdressMapping[14] = (void*)&rtB.Adder;
  opalSignalsSizeMapping[14] = sizeof(rtB.Adder);
  opalSignalsNumElementsMapping[14] = 1;
  opalSignalsAdressMapping[15] = (void*)&rtB.Adder_Pred;
  opalSignalsSizeMapping[15] = sizeof(rtB.Adder_Pred);
  opalSignalsNumElementsMapping[15] = 1;
  opalSignalsAdressMapping[16] = (void*)&rtB.Switch;
  opalSignalsSizeMapping[16] = sizeof(rtB.Switch);
  opalSignalsNumElementsMapping[16] = 1;
  opalSignalsAdressMapping[17] = (void*)&rtB.Sum_l;
  opalSignalsSizeMapping[17] = sizeof(rtB.Sum_l);
  opalSignalsNumElementsMapping[17] = 1;
  opalSignalsAdressMapping[18] = (void*)&rtB.ThreephaseSineWave;
  opalSignalsSizeMapping[18] = sizeof(rtB.ThreephaseSineWave[0]);
  opalSignalsNumElementsMapping[18] = 3;
  opalSignalsAdressMapping[19] = (void*)&rtB.Product;
  opalSignalsSizeMapping[19] = sizeof(rtB.Product[0]);
  opalSignalsNumElementsMapping[19] = 3;
  opalSignalsAdressMapping[20] = (void*)&rtB.Gain;
  opalSignalsSizeMapping[20] = sizeof(rtB.Gain[0]);
  opalSignalsNumElementsMapping[20] = 3;
  opalSignalsAdressMapping[21] = (void*)&rtB.Sum_k;
  opalSignalsSizeMapping[21] = sizeof(rtB.Sum_k[0]);
  opalSignalsNumElementsMapping[21] = 3;
  opalSignalsAdressMapping[22] = (void*)&rtB.DataTypeConversion;
  opalSignalsSizeMapping[22] = sizeof(rtB.DataTypeConversion[0]);
  opalSignalsNumElementsMapping[22] = 3;
  opalSignalsAdressMapping[23] = (void*)&rtB.TmpSignalConversionAtOpOutputIn;
  opalSignalsSizeMapping[23] = sizeof(rtB.TmpSignalConversionAtOpOutputIn[0]);
  opalSignalsNumElementsMapping[23] = 2;
  opalSignalsAdressMapping[24] = (void*)&rtB.TmpSignalConversionAtOpOutput_m;
  opalSignalsSizeMapping[24] = sizeof(rtB.TmpSignalConversionAtOpOutput_m[0]);
  opalSignalsNumElementsMapping[24] = 2;
  opalSignalsAdressMapping[25] = (void*)&rtB.TmpSignalConversionAtOpOutput_d;
  opalSignalsSizeMapping[25] = sizeof(rtB.TmpSignalConversionAtOpOutput_d[0]);
  opalSignalsNumElementsMapping[25] = 2;
  opalSignalsAdressMapping[26] = (void*)&rtB.ThreephaseSineWave_i;
  opalSignalsSizeMapping[26] = sizeof(rtB.ThreephaseSineWave_i[0]);
  opalSignalsNumElementsMapping[26] = 3;
  opalSignalsAdressMapping[27] = (void*)&rtB.Amplitude_Gain;
  opalSignalsSizeMapping[27] = sizeof(rtB.Amplitude_Gain[0]);
  opalSignalsNumElementsMapping[27] = 3;
  opalSignalsAdressMapping[28] = (void*)&rtB.Constant;
  opalSignalsSizeMapping[28] = sizeof(rtB.Constant);
  opalSignalsNumElementsMapping[28] = 1;
  opalSignalsAdressMapping[29] = (void*)&rtB.Step;
  opalSignalsSizeMapping[29] = sizeof(rtB.Step);
  opalSignalsNumElementsMapping[29] = 1;
  opalSignalsAdressMapping[30] = (void*)&rtB.OpTrigger;
  opalSignalsSizeMapping[30] = sizeof(rtB.OpTrigger);
  opalSignalsNumElementsMapping[30] = 1;
  opalSignalsAdressMapping[31] = (void*)&rtB.OpOutput_ex.DataTypeConversion;
  opalSignalsSizeMapping[31] = sizeof(rtB.OpOutput_ex.DataTypeConversion);
  opalSignalsNumElementsMapping[31] = 1;
  opalSignalsAdressMapping[32] = (void*)&rtB.OpOutput_a.DataTypeConversion;
  opalSignalsSizeMapping[32] = sizeof(rtB.OpOutput_a.DataTypeConversion);
  opalSignalsNumElementsMapping[32] = 1;
  opalSignalsAdressMapping[33] = (void*)&rtB.OpOutput_jn.DataTypeConversion;
  opalSignalsSizeMapping[33] = sizeof(rtB.OpOutput_jn.DataTypeConversion);
  opalSignalsNumElementsMapping[33] = 1;
  opalSignalsAdressMapping[34] = (void*)&rtB.OpOutput_d.DataTypeConversion;
  opalSignalsSizeMapping[34] = sizeof(rtB.OpOutput_d.DataTypeConversion);
  opalSignalsNumElementsMapping[34] = 1;
  opalSignalsAdressMapping[35] = (void*)&rtB.OpOutput_g.DataTypeConversion;
  opalSignalsSizeMapping[35] = sizeof(rtB.OpOutput_g.DataTypeConversion);
  opalSignalsNumElementsMapping[35] = 1;
  opalSignalsAdressMapping[36] = (void*)&rtB.OpOutput_j.DataTypeConversion;
  opalSignalsSizeMapping[36] = sizeof(rtB.OpOutput_j.DataTypeConversion);
  opalSignalsNumElementsMapping[36] = 1;
  opalSignalsAdressMapping[37] = (void*)&rtB.OpOutput_ci.DataTypeConversion;
  opalSignalsSizeMapping[37] = sizeof(rtB.OpOutput_ci.DataTypeConversion);
  opalSignalsNumElementsMapping[37] = 1;
  opalSignalsAdressMapping[38] = (void*)&rtB.OpOutput_o.DataTypeConversion;
  opalSignalsSizeMapping[38] = sizeof(rtB.OpOutput_o.DataTypeConversion);
  opalSignalsNumElementsMapping[38] = 1;
  opalSignalsAdressMapping[39] = (void*)&rtB.OpOutput_e.DataTypeConversion;
  opalSignalsSizeMapping[39] = sizeof(rtB.OpOutput_e.DataTypeConversion);
  opalSignalsNumElementsMapping[39] = 1;
  opalSignalsAdressMapping[40] = (void*)&rtB.OpOutput_h.DataTypeConversion;
  opalSignalsSizeMapping[40] = sizeof(rtB.OpOutput_h.DataTypeConversion);
  opalSignalsNumElementsMapping[40] = 1;
  opalSignalsAdressMapping[41] = (void*)&rtB.OpOutput_n.DataTypeConversion;
  opalSignalsSizeMapping[41] = sizeof(rtB.OpOutput_n.DataTypeConversion);
  opalSignalsNumElementsMapping[41] = 1;
  opalSignalsAdressMapping[42] = (void*)&rtB.OpOutput_cp.DataTypeConversion;
  opalSignalsSizeMapping[42] = sizeof(rtB.OpOutput_cp.DataTypeConversion);
  opalSignalsNumElementsMapping[42] = 1;
  opalSignalsAdressMapping[43] = (void*)&rtB.OpOutput_l.DataTypeConversion;
  opalSignalsSizeMapping[43] = sizeof(rtB.OpOutput_l.DataTypeConversion);
  opalSignalsNumElementsMapping[43] = 1;
  opalSignalsAdressMapping[44] = (void*)&rtB.OpOutput_cv.DataTypeConversion;
  opalSignalsSizeMapping[44] = sizeof(rtB.OpOutput_cv.DataTypeConversion);
  opalSignalsNumElementsMapping[44] = 1;
  opalSignalsAdressMapping[45] = (void*)&rtB.OpOutput_mf.DataTypeConversion;
  opalSignalsSizeMapping[45] = sizeof(rtB.OpOutput_mf.DataTypeConversion);
  opalSignalsNumElementsMapping[45] = 1;
  opalSignalsAdressMapping[46] = (void*)&rtB.OpOutput_k.DataTypeConversion;
  opalSignalsSizeMapping[46] = sizeof(rtB.OpOutput_k.DataTypeConversion);
  opalSignalsNumElementsMapping[46] = 1;
  opalSignalsAdressMapping[47] = (void*)&rtB.OpOutput_cr.DataTypeConversion;
  opalSignalsSizeMapping[47] = sizeof(rtB.OpOutput_cr.DataTypeConversion[0]);
  opalSignalsNumElementsMapping[47] = 2;
  opalSignalsAdressMapping[48] = (void*)&rtB.OpOutput_c.DataTypeConversion;
  opalSignalsSizeMapping[48] = sizeof(rtB.OpOutput_c.DataTypeConversion[0]);
  opalSignalsNumElementsMapping[48] = 2;
  opalSignalsAdressMapping[49] = (void*)&rtB.OpOutput_m.DataTypeConversion;
  opalSignalsSizeMapping[49] = sizeof(rtB.OpOutput_m.DataTypeConversion[0]);
  opalSignalsNumElementsMapping[49] = 2;
  opalSignalsAdressMapping[50] = (void*)&rtB.OpOutput.DataTypeConversion;
  opalSignalsSizeMapping[50] = sizeof(rtB.OpOutput.DataTypeConversion[0]);
  opalSignalsNumElementsMapping[50] = 2;
  opalNumParameters = 42;
  opalNumSignals = 51;
}
