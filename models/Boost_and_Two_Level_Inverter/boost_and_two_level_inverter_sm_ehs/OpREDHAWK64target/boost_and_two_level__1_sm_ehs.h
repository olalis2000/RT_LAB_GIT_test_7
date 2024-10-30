/*
 * boost_and_two_level__1_sm_ehs.h
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

#ifndef RTW_HEADER_boost_and_two_level__1_sm_ehs_h_
#define RTW_HEADER_boost_and_two_level__1_sm_ehs_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#ifndef boost_and_two_level__1_sm_ehs_COMMON_INCLUDES_
#define boost_and_two_level__1_sm_ehs_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#endif                      /* boost_and_two_level__1_sm_ehs_COMMON_INCLUDES_ */

#include "boost_and_two_level__1_sm_ehs_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
#define rtmGetBlockIO(rtm)             ((rtm)->ModelData.blockIO)
#endif

#ifndef rtmSetBlockIO
#define rtmSetBlockIO(rtm, val)        ((rtm)->ModelData.blockIO = (val))
#endif

#ifndef rtmGetChecksums
#define rtmGetChecksums(rtm)           ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
#define rtmSetChecksums(rtm, val)      ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
#define rtmGetConstBlockIO(rtm)        ((rtm)->ModelData.constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
#define rtmSetConstBlockIO(rtm, val)   ((rtm)->ModelData.constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->ModelData.contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->ModelData.contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->ModelData.contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->ModelData.contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->ModelData.CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->ModelData.CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetCtrlRateMdlRefTiming
#define rtmGetCtrlRateMdlRefTiming(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTiming
#define rtmSetCtrlRateMdlRefTiming(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateMdlRefTimingPtr
#define rtmGetCtrlRateMdlRefTimingPtr(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTimingPtr
#define rtmSetCtrlRateMdlRefTimingPtr(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateNumTicksToNextHit
#define rtmGetCtrlRateNumTicksToNextHit(rtm) ()
#endif

#ifndef rtmSetCtrlRateNumTicksToNextHit
#define rtmSetCtrlRateNumTicksToNextHit(rtm, val) ()
#endif

#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         ()
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)    ()
#endif

#ifndef rtmGetDefaultParam
#define rtmGetDefaultParam(rtm)        ((rtm)->ModelData.defaultParam)
#endif

#ifndef rtmSetDefaultParam
#define rtmSetDefaultParam(rtm, val)   ((rtm)->ModelData.defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->ModelData.derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->ModelData.derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
#define rtmGetDirectFeedThrough(rtm)   ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
#define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
#define rtmGetErrorStatusFlag(rtm)     ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
#define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
#define rtmSetFinalTime(rtm, val)      ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
#define rtmGetFirstInitCondFlag(rtm)   ()
#endif

#ifndef rtmSetFirstInitCondFlag
#define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ()
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ()
#endif

#ifndef rtmGetMdlRefGlobalRuntimeEventIndices
#define rtmGetMdlRefGlobalRuntimeEventIndices(rtm) ()
#endif

#ifndef rtmSetMdlRefGlobalRuntimeEventIndices
#define rtmSetMdlRefGlobalRuntimeEventIndices(rtm, val) ()
#endif

#ifndef rtmGetMdlRefGlobalTID
#define rtmGetMdlRefGlobalTID(rtm)     ()
#endif

#ifndef rtmSetMdlRefGlobalTID
#define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
#define rtmGetMdlRefTriggerTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefTriggerTID
#define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
#define rtmGetModelMappingInfo(rtm)    ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
#define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
#define rtmGetModelName(rtm)           ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
#define rtmSetModelName(rtm, val)      ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
#define rtmGetNonInlinedSFcns(rtm)     ((rtm)->NonInlinedSFcns)
#endif

#ifndef rtmSetNonInlinedSFcns
#define rtmSetNonInlinedSFcns(rtm, val) ((rtm)->NonInlinedSFcns = (val))
#endif

#ifndef rtmGetNumBlockIO
#define rtmGetNumBlockIO(rtm)          ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
#define rtmSetNumBlockIO(rtm, val)     ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
#define rtmGetNumBlockParams(rtm)      ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
#define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
#define rtmGetNumBlocks(rtm)           ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
#define rtmSetNumBlocks(rtm, val)      ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
#define rtmGetNumContStates(rtm)       ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
#define rtmSetNumContStates(rtm, val)  ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
#define rtmGetNumDWork(rtm)            ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
#define rtmSetNumDWork(rtm, val)       ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
#define rtmGetNumInputPorts(rtm)       ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
#define rtmSetNumInputPorts(rtm, val)  ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
#define rtmGetNumNonSampledZCs(rtm)    ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
#define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
#define rtmGetNumOutputPorts(rtm)      ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
#define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
#define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
#define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
#define rtmGetNumSFcnParams(rtm)       ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
#define rtmSetNumSFcnParams(rtm, val)  ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
#define rtmGetNumSFunctions(rtm)       ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
#define rtmSetNumSFunctions(rtm, val)  ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
#define rtmGetNumSampleTimes(rtm)      ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
#define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
#define rtmGetNumU(rtm)                ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
#define rtmSetNumU(rtm, val)           ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
#define rtmGetNumY(rtm)                ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
#define rtmSetNumY(rtm, val)           ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ()
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ()
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ()
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ()
#endif

#ifndef rtmGetOffsetTimeArray
#define rtmGetOffsetTimeArray(rtm)     ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
#define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
#define rtmGetOffsetTimePtr(rtm)       ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
#define rtmSetOffsetTimePtr(rtm, val)  ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
#define rtmGetOptions(rtm)             ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
#define rtmSetOptions(rtm, val)        ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
#define rtmGetParamIsMalloced(rtm)     ()
#endif

#ifndef rtmSetParamIsMalloced
#define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
#define rtmGetPath(rtm)                ((rtm)->path)
#endif

#ifndef rtmSetPath
#define rtmSetPath(rtm, val)           ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
#define rtmGetPerTaskSampleHits(rtm)   ()
#endif

#ifndef rtmSetPerTaskSampleHits
#define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
#define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
#define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
#define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
#define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->ModelData.periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->ModelData.periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->ModelData.periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->ModelData.periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
#define rtmGetPrevZCSigState(rtm)      ((rtm)->ModelData.prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
#define rtmSetPrevZCSigState(rtm, val) ((rtm)->ModelData.prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
#define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
#define rtmGetRTWGeneratedSFcn(rtm)    ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
#define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
#define rtmSetRTWLogInfo(rtm, val)     ((rtm)->rtwLogInfo = (val))
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
#define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
#define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
#define rtmGetRTWSfcnInfo(rtm)         ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
#define rtmSetRTWSfcnInfo(rtm, val)    ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
#define rtmGetRTWSolverInfo(rtm)       ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
#define rtmSetRTWSolverInfo(rtm, val)  ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
#define rtmGetRTWSolverInfoPtr(rtm)    ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
#define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
#define rtmGetReservedForXPC(rtm)      ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
#define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
#define rtmGetRootDWork(rtm)           ((rtm)->ModelData.dwork)
#endif

#ifndef rtmSetRootDWork
#define rtmSetRootDWork(rtm, val)      ((rtm)->ModelData.dwork = (val))
#endif

#ifndef rtmGetSFunctions
#define rtmGetSFunctions(rtm)          ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
#define rtmSetSFunctions(rtm, val)     ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
#define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
#define rtmGetSampleHitPtr(rtm)        ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
#define rtmSetSampleHitPtr(rtm, val)   ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
#define rtmGetSampleTimeArray(rtm)     ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
#define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
#define rtmGetSampleTimePtr(rtm)       ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
#define rtmSetSampleTimePtr(rtm, val)  ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
#define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
#define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
#define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
#define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
#define rtmGetSelf(rtm)                ()
#endif

#ifndef rtmSetSelf
#define rtmSetSelf(rtm, val)           ()
#endif

#ifndef rtmGetSimMode
#define rtmGetSimMode(rtm)             ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
#define rtmSetSimMode(rtm, val)        ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
#define rtmGetSimTimeStep(rtm)         ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
#define rtmSetSimTimeStep(rtm, val)    ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
#define rtmGetStartTime(rtm)           ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
#define rtmSetStartTime(rtm, val)      ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
#define rtmSetStepSize(rtm, val)       ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
#define rtmGetStopRequestedFlag(rtm)   ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
#define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
#define rtmGetTaskCounters(rtm)        ()
#endif

#ifndef rtmSetTaskCounters
#define rtmSetTaskCounters(rtm, val)   ()
#endif

#ifndef rtmGetTaskTimeArray
#define rtmGetTaskTimeArray(rtm)       ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
#define rtmSetTaskTimeArray(rtm, val)  ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
#define rtmGetTimePtr(rtm)             ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
#define rtmSetTimePtr(rtm, val)        ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
#define rtmGetTimingData(rtm)          ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
#define rtmSetTimingData(rtm, val)     ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
#define rtmGetU(rtm)                   ((rtm)->ModelData.inputs)
#endif

#ifndef rtmSetU
#define rtmSetU(rtm, val)              ((rtm)->ModelData.inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
#define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
#define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
#define rtmGetY(rtm)                   ((rtm)->ModelData.outputs)
#endif

#ifndef rtmSetY
#define rtmSetY(rtm, val)              ((rtm)->ModelData.outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->ModelData.zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->ModelData.zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
#define rtmGetZCSignalValues(rtm)      ((rtm)->ModelData.zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
#define rtmSetZCSignalValues(rtm, val) ((rtm)->ModelData.zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
#define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->ModelData.derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->ModelData.derivs = (val))
#endif

#ifndef rtmGettimingBridge
#define rtmGettimingBridge(rtm)        ()
#endif

#ifndef rtmSettimingBridge
#define rtmSettimingBridge(rtm, val)   ()
#endif

#ifndef rtmGetChecksumVal
#define rtmGetChecksumVal(rtm, idx)    ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
#define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
#define rtmGetDWork(rtm, idx)          ((rtm)->ModelData.dwork[idx])
#endif

#ifndef rtmSetDWork
#define rtmSetDWork(rtm, idx, val)     ((rtm)->ModelData.dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
#define rtmGetOffsetTime(rtm, idx)     ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
#define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
#define rtmGetSFunction(rtm, idx)      ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
#define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
#define rtmGetSampleTime(rtm, idx)     ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
#define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
#define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
#define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
#define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
#define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
#define rtmIsContinuousTask(rtm, tid)  0
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsSampleHit
#define rtmIsSampleHit(rtm, sti, tid)  ((rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
#define rtmSetT(rtm, val)                                        /* Do Nothing */
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
#define rtmSetTStart(rtm, val)         ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
#define rtmGetTaskTime(rtm, sti)       (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
#define rtmSetTaskTime(rtm, sti, val)  (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define boost_and_two_level__1_sm_ehs_rtModel RT_MODEL_boost_and_two_level__1_sm_ehs_T

/* user code (top of header file) */
/* System '<Root>' */
/* Opal-RT Technologies */
extern int opalSizeDwork;
extern unsigned int opalSizeBlockIO;
extern unsigned int opalSizeRTP;
extern void * pRtModel;                //pointer on the RTmodel struc
int_T Opal_rtmGetNumBlockParams(void *ptr);
int_T Opal_rtmGetNumBlockIO(void *ptr);

/* Block signals for system '<S13>/OpOutput' */
typedef struct {
  real_T DataTypeConversion[2];   /* '<S17>/Data Type Conversion' (Output 1)  */
} B_OpOutput_boost_and_two_leve_T;

/* Block signals for system '<S33>/OpOutput' */
typedef struct {
  real_T DataTypeConversion;      /* '<S49>/Data Type Conversion' (Output 1)  */
} B_OpOutput_boost_and_two_le_c_T;

/* Block signals (default storage) */
typedef struct {
  real_T SFunction;                    /* '<S1>/S-Function' (Output 1)  */
  real_T Sum;                          /* '<S1>/Sum' (Output 1)  */
  real_T OpInput;                      /* '<S25>/OpInput' (Output 1)  */
  real_T OpInput_e;                    /* '<S26>/OpInput' (Output 1)  */
  real_T OpInput_m;                    /* '<S27>/OpInput' (Output 1)  */
  real_T OpInput_h;                    /* '<S28>/OpInput' (Output 1)  */
  real_T OpInput_g;                    /* '<S29>/OpInput' (Output 1)  */
  real_T OpInput_gb;                   /* '<S30>/OpInput' (Output 1)  */
  real_T OpInput_k;                    /* '<S31>/OpInput' (Output 1)  */
  real_T OpInput_ep;                   /* '<S32>/OpInput' (Output 1)  */
  real_T SFunction_p[9];               /* '<S21>/S-Function' (Output 1)  */
  real_T Saturation;                   /* '<S12>/Saturation' (Output 1)  */
  real_T Adder_Gain;                   /* '<S11>/Adder_Gain' (Output 1)  */
  real_T Memory;                       /* '<S11>/Memory' (Output 1)  */
  real_T Adder;                        /* '<S11>/Adder' (Output 1)  */
  real_T Adder_Pred;                   /* '<S11>/Adder_Pred' (Output 1)  */
  real_T Switch;                       /* '<S11>/Switch' (Output 1)  */
  real_T Sum_l;                        /* '<S5>/Sum' (Output 1)  */
  real_T ThreephaseSineWave[3];  /* '<S12>/Three-phase Sine Wave' (Output 1)  */
  real_T Product[3];                   /* '<S12>/Product' (Output 1)  */
  real_T Gain[3];                      /* '<S12>/Gain' (Output 1)  */
  real_T Sum_k[3];                     /* '<S12>/Sum' (Output 1)  */
  real_T DataTypeConversion[3];    /* '<S7>/Data Type Conversion' (Output 1)  */
  real_T TmpSignalConversionAtOpOutputIn[2];
                             /* '<S14>/TmpSignal ConversionAtOpOutputInport1' */
  real_T TmpSignalConversionAtOpOutput_m[2];
                             /* '<S15>/TmpSignal ConversionAtOpOutputInport1' */
  real_T TmpSignalConversionAtOpOutput_d[2];
                             /* '<S16>/TmpSignal ConversionAtOpOutputInport1' */
  real_T ThreephaseSineWave_i[3]; /* '<S6>/Three-phase Sine Wave' (Output 1)  */
  real_T Amplitude_Gain[3];            /* '<S6>/Amplitude_Gain' (Output 1)  */
  real_T Constant;                     /* '<S4>/Constant' (Output 1)  */
  real_T Step;                         /* '<S4>/Step' (Output 1)  */
  real_T OpTrigger;                    /* '<S4>/OpTrigger' (Output 1)  */
  B_OpOutput_boost_and_two_le_c_T OpOutput_ex;/* '<S48>/OpOutput' */
  B_OpOutput_boost_and_two_le_c_T OpOutput_a;/* '<S47>/OpOutput' */
  B_OpOutput_boost_and_two_le_c_T OpOutput_jn;/* '<S46>/OpOutput' */
  B_OpOutput_boost_and_two_le_c_T OpOutput_d;/* '<S45>/OpOutput' */
  B_OpOutput_boost_and_two_le_c_T OpOutput_g;/* '<S44>/OpOutput' */
  B_OpOutput_boost_and_two_le_c_T OpOutput_j;/* '<S43>/OpOutput' */
  B_OpOutput_boost_and_two_le_c_T OpOutput_ci;/* '<S42>/OpOutput' */
  B_OpOutput_boost_and_two_le_c_T OpOutput_o;/* '<S41>/OpOutput' */
  B_OpOutput_boost_and_two_le_c_T OpOutput_e;/* '<S40>/OpOutput' */
  B_OpOutput_boost_and_two_le_c_T OpOutput_h;/* '<S39>/OpOutput' */
  B_OpOutput_boost_and_two_le_c_T OpOutput_n;/* '<S38>/OpOutput' */
  B_OpOutput_boost_and_two_le_c_T OpOutput_cp;/* '<S37>/OpOutput' */
  B_OpOutput_boost_and_two_le_c_T OpOutput_l;/* '<S36>/OpOutput' */
  B_OpOutput_boost_and_two_le_c_T OpOutput_cv;/* '<S35>/OpOutput' */
  B_OpOutput_boost_and_two_le_c_T OpOutput_mf;/* '<S34>/OpOutput' */
  B_OpOutput_boost_and_two_le_c_T OpOutput_k;/* '<S33>/OpOutput' */
  B_OpOutput_boost_and_two_leve_T OpOutput_cr;/* '<S16>/OpOutput' */
  B_OpOutput_boost_and_two_leve_T OpOutput_c;/* '<S15>/OpOutput' */
  B_OpOutput_boost_and_two_leve_T OpOutput_m;/* '<S14>/OpOutput' */
  B_OpOutput_boost_and_two_leve_T OpOutput;/* '<S13>/OpOutput' */
} B_boost_and_two_level__1_sm_ehs_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T SFunction_PreviousInput;      /* '<S1>/S-Function' (DWork 1)  */
  real_T Memory_PreviousInput;         /* '<S11>/Memory' (DWork 1)  */
  int_T SFunction_IWORK[5];            /* '<S66>/S-Function' (DWork 1)  */
  int_T OpTrigger_IWORK[5];            /* '<S4>/OpTrigger' (DWork 1)  */
} DW_boost_and_two_level__1_sm_ehs_T;

/* Backward compatible GRT Identifiers */
#define rtB                            boost_and_two_level__1_sm_ehs_B
#define BlockIO                        B_boost_and_two_level__1_sm_ehs_T
#define rtP                            boost_and_two_level__1_sm_ehs_P
#define Parameters                     P_boost_and_two_level__1_sm_ehs_T
#define rtDWork                        boost_and_two_level__1_sm_ehs_DW
#define D_Work                         DW_boost_and_two_level__1_sm_ehs_T

/* Parameters (default storage) */
struct P_boost_and_two_level__1_sm_ehs_T_ {
  real_T Inv_PWM_Phases[3];            /* Variable: Inv_PWM_Phases
                                        * Referenced by:
                                        *   '<S6>/Three-phase Sine Wave' (Parameter: Phase)
                                        *   '<S12>/Three-phase Sine Wave' (Parameter: Phase)
                                        */
  real_T Ts;                           /* Variable: Ts
                                        * Referenced by: '<S11>/Adder_Gain' (Parameter: Gain)
                                        */
  real_T SFunction1_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/S-Function1' (Parameter: Value)
                                        */
  real_T SFunction_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S1>/S-Function' (Parameter: InitialCondition)
                                        */
  real_T In1_Value;                    /* Expression: 0
                                        * Referenced by: '<S25>/In1' (Parameter: Value)
                                        */
  real_T In1_Value_k;                  /* Expression: 0
                                        * Referenced by: '<S26>/In1' (Parameter: Value)
                                        */
  real_T In1_Value_p;                  /* Expression: 0
                                        * Referenced by: '<S27>/In1' (Parameter: Value)
                                        */
  real_T In1_Value_e;                  /* Expression: 0
                                        * Referenced by: '<S28>/In1' (Parameter: Value)
                                        */
  real_T In1_Value_g;                  /* Expression: 0
                                        * Referenced by: '<S29>/In1' (Parameter: Value)
                                        */
  real_T In1_Value_l;                  /* Expression: 0
                                        * Referenced by: '<S30>/In1' (Parameter: Value)
                                        */
  real_T In1_Value_m;                  /* Expression: 0
                                        * Referenced by: '<S31>/In1' (Parameter: Value)
                                        */
  real_T In1_Value_a;                  /* Expression: 0
                                        * Referenced by: '<S32>/In1' (Parameter: Value)
                                        */
  real_T SFunction_P1_Size[2];         /* Computed Parameter: SFunction_P1_Size
                                        * Referenced by: '<S66>/S-Function' (Parameter: P1Size)
                                        */
  real_T SFunction_P1;                 /* Expression: Acqu_group
                                        * Referenced by: '<S66>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P1_Size_j[2];      /* Computed Parameter: SFunction_P1_Size_j
                                       * Referenced by: '<S21>/S-Function' (Parameter: P1Size)
                                       */
  real_T SFunction_P1_a;               /* Expression: Data_width
                                        * Referenced by: '<S21>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size[2];         /* Computed Parameter: SFunction_P2_Size
                                        * Referenced by: '<S21>/S-Function' (Parameter: P2Size)
                                        */
  real_T SFunction_P2[9];              /* Expression: InitialConditions
                                        * Referenced by: '<S21>/S-Function' (Parameter: P2)
                                        */
  real_T Saturation_UpperSat;          /* Expression: 0.95
                                        * Referenced by: '<S12>/Saturation' (Parameter: UpperLimit)
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0.05
                                        * Referenced by: '<S12>/Saturation' (Parameter: LowerLimit)
                                        */
  real_T Constant3_Value;              /* Expression: 2*pi
                                        * Referenced by: '<S11>/Constant3' (Parameter: Value)
                                        */
  real_T Memory_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S11>/Memory' (Parameter: InitialCondition)
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S11>/Switch' (Parameter: Threshold)
                                        */
  real_T ThreephaseSineWave_Amp;       /* Expression: 1
                                        * Referenced by: '<S12>/Three-phase Sine Wave' (Parameter: Amplitude)
                                        */
  real_T ThreephaseSineWave_Bias;      /* Expression: 0
                                        * Referenced by: '<S12>/Three-phase Sine Wave' (Parameter: Bias)
                                        */
  real_T ThreephaseSineWave_Freq;      /* Expression: 1
                                        * Referenced by: '<S12>/Three-phase Sine Wave' (Parameter: Frequency)
                                        */
  real_T Gain_Gain;                    /* Expression: 0.5
                                        * Referenced by: '<S12>/Gain' (Parameter: Gain)
                                        */
  real_T Constant_Value;               /* Expression: 0.5
                                        * Referenced by: '<S12>/Constant' (Parameter: Value)
                                        */
  real_T ThreephaseSineWave_Amp_c;     /* Expression: 1
                                        * Referenced by: '<S6>/Three-phase Sine Wave' (Parameter: Amplitude)
                                        */
  real_T ThreephaseSineWave_Bias_n;    /* Expression: 0
                                        * Referenced by: '<S6>/Three-phase Sine Wave' (Parameter: Bias)
                                        */
  real_T ThreephaseSineWave_Freq_e;    /* Expression: 1
                                        * Referenced by: '<S6>/Three-phase Sine Wave' (Parameter: Frequency)
                                        */
  real_T g1_Value;                     /* Expression: 0
                                        * Referenced by: '<S2>/g1' (Parameter: Value)
                                        */
  real_T Constant_Value_e;             /* Expression: .5
                                        * Referenced by: '<S4>/Constant' (Parameter: Value)
                                        */
  real_T Step_Time;                    /* Expression: 0.50362
                                        * Referenced by: '<S4>/Step' (Parameter: Time)
                                        */
  real_T Step_Y0;                      /* Expression: 0
                                        * Referenced by: '<S4>/Step' (Parameter: Before)
                                        */
  real_T Step_YFinal;                  /* Expression: 1
                                        * Referenced by: '<S4>/Step' (Parameter: After)
                                        */
  real_T OpTrigger_P1_Size[2];         /* Computed Parameter: OpTrigger_P1_Size
                                        * Referenced by: '<S4>/OpTrigger' (Parameter: P1Size)
                                        */
  real_T OpTrigger_P1;                 /* Expression: Acq_Group
                                        * Referenced by: '<S4>/OpTrigger' (Parameter: P1)
                                        */
  real_T OpTrigger_P2_Size[2];         /* Computed Parameter: OpTrigger_P2_Size
                                        * Referenced by: '<S4>/OpTrigger' (Parameter: P2Size)
                                        */
  real_T OpTrigger_P2;                 /* Expression: Trig_Type
                                        * Referenced by: '<S4>/OpTrigger' (Parameter: P2)
                                        */
  real_T OpTrigger_P3_Size[2];         /* Computed Parameter: OpTrigger_P3_Size
                                        * Referenced by: '<S4>/OpTrigger' (Parameter: P3Size)
                                        */
  real_T OpTrigger_P3;                 /* Expression: Trig_Offset
                                        * Referenced by: '<S4>/OpTrigger' (Parameter: P3)
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_boost_and_two_level__1_sm_ehs_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[1];
    SimStruct childSFunctions[3];
    SimStruct *childSFunctionPtrs[3];
    struct _ssBlkInfo2 blkInfo2[3];
    struct _ssSFcnModelMethods2 methods2[3];
    struct _ssSFcnModelMethods3 methods3[3];
    struct _ssSFcnModelMethods4 methods4[3];
    struct _ssStatesInfo2 statesInfo2[3];
    ssPeriodicStatesInfo periodicStatesInfo[3];
    struct _ssPortInfo2 inputOutputPortInfo2[3];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[8];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn2;
  } NonInlinedSFcns;

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    void *blockIO;
    const void *constBlockIO;
    void *defaultParam;
    ZCSigState *prevZCSigState;
    real_T *contStates;
    int_T *periodicContStateIndices;
    real_T *periodicContStateRanges;
    real_T *derivs;
    void *zcSignalValues;
    void *inputs;
    void *outputs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T CTOutputIncnstWithState;
    void *dwork;
  } ModelData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[1];
    time_T offsetTimesArray[1];
    int_T sampleTimeTaskIDArray[1];
    int_T sampleHitArray[1];
    int_T perTaskSampleHitsArray[1];
    time_T tArray[1];
  } Timing;
};

/* Block parameters (default storage) */
extern P_boost_and_two_level__1_sm_ehs_T boost_and_two_level__1_sm_ehs_P;

/* Block signals (default storage) */
extern B_boost_and_two_level__1_sm_ehs_T boost_and_two_level__1_sm_ehs_B;

/* Block states (default storage) */
extern DW_boost_and_two_level__1_sm_ehs_T boost_and_two_level__1_sm_ehs_DW;

/*====================*
 * External functions *
 *====================*/
extern boost_and_two_level__1_sm_ehs_rtModel *boost_and_two_level__1_sm_ehs(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_boost_and_two_level__1_sm_ehs_T *const
  boost_and_two_level__1_sm_ehs_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'boost_and_two_level__1_sm_ehs'
 * '<S1>'   : 'boost_and_two_level__1_sm_ehs/OpCCode_do_not_touch'
 * '<S2>'   : 'boost_and_two_level__1_sm_ehs/SM_eHS'
 * '<S3>'   : 'boost_and_two_level__1_sm_ehs/SM_eHS/3ph_Sinewave_Angle_Generator'
 * '<S4>'   : 'boost_and_two_level__1_sm_ehs/SM_eHS/Acquisition Trigger'
 * '<S5>'   : 'boost_and_two_level__1_sm_ehs/SM_eHS/Circuit_Control'
 * '<S6>'   : 'boost_and_two_level__1_sm_ehs/SM_eHS/Circuit_Input'
 * '<S7>'   : 'boost_and_two_level__1_sm_ehs/SM_eHS/Digital_Out'
 * '<S8>'   : 'boost_and_two_level__1_sm_ehs/SM_eHS/OpComm'
 * '<S9>'   : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1'
 * '<S10>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/rtlab_send_subsystem'
 * '<S11>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/3ph_Sinewave_Angle_Generator/3ph Angle Generator'
 * '<S12>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/Circuit_Control/Control'
 * '<S13>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/Digital_Out/PWMOut_Ch00'
 * '<S14>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/Digital_Out/PWMOut_Ch01'
 * '<S15>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/Digital_Out/PWMOut_Ch02'
 * '<S16>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/Digital_Out/PWMOut_Ch03'
 * '<S17>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/Digital_Out/PWMOut_Ch00/OpOutput'
 * '<S18>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/Digital_Out/PWMOut_Ch01/OpOutput'
 * '<S19>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/Digital_Out/PWMOut_Ch02/OpOutput'
 * '<S20>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/Digital_Out/PWMOut_Ch03/OpOutput'
 * '<S21>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/OpComm/Receive'
 * '<S22>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/OpComm/busStruct'
 * '<S23>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/OpComm/busStruct/Sub1'
 * '<S24>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers'
 * '<S25>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpInput_2Lvl_Ia'
 * '<S26>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpInput_2Lvl_Ib'
 * '<S27>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpInput_2Lvl_Ic'
 * '<S28>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpInput_2Lvl_Va'
 * '<S29>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpInput_2Lvl_Vb'
 * '<S30>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpInput_2Lvl_Vc'
 * '<S31>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpInput_boost_I'
 * '<S32>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpInput_boost_V'
 * '<S33>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_2Lvl_Ia'
 * '<S34>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_2Lvl_Ib'
 * '<S35>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_2Lvl_Ic'
 * '<S36>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_2Lvl_Va'
 * '<S37>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_2Lvl_Vb'
 * '<S38>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_2Lvl_Vc'
 * '<S39>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_arm1_g1'
 * '<S40>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_boost_I'
 * '<S41>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_boost_V'
 * '<S42>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_fault_sw'
 * '<S43>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_parameter_set_id'
 * '<S44>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_user_reset_cmd'
 * '<S45>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_vin'
 * '<S46>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_vsrc1'
 * '<S47>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_vsrc2'
 * '<S48>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_vsrc3'
 * '<S49>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_2Lvl_Ia/OpOutput'
 * '<S50>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_2Lvl_Ib/OpOutput'
 * '<S51>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_2Lvl_Ic/OpOutput'
 * '<S52>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_2Lvl_Va/OpOutput'
 * '<S53>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_2Lvl_Vb/OpOutput'
 * '<S54>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_2Lvl_Vc/OpOutput'
 * '<S55>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_arm1_g1/OpOutput'
 * '<S56>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_boost_I/OpOutput'
 * '<S57>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_boost_V/OpOutput'
 * '<S58>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_fault_sw/OpOutput'
 * '<S59>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_parameter_set_id/OpOutput'
 * '<S60>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_user_reset_cmd/OpOutput'
 * '<S61>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_vin/OpOutput'
 * '<S62>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_vsrc1/OpOutput'
 * '<S63>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_vsrc2/OpOutput'
 * '<S64>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/eHS1/eHSDrivers/OpOutput_vsrc3/OpOutput'
 * '<S65>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/rtlab_send_subsystem/Subsystem1'
 * '<S66>'  : 'boost_and_two_level__1_sm_ehs/SM_eHS/rtlab_send_subsystem/Subsystem1/Send1'
 */
#endif                         /* RTW_HEADER_boost_and_two_level__1_sm_ehs_h_ */
