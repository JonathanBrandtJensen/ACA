#ifndef __Pr0udGEreIxS2B1GsCZRRC_h__
#define __Pr0udGEreIxS2B1GsCZRRC_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"
#include "slexec_vm_zc_functions.h"
#include "slexec_vm_simstruct_bridge.h"

/* Type Definitions */
#ifndef typedef_codertarget_ev3_internal_ev3_Infrared
#define typedef_codertarget_ev3_internal_ev3_Infrared

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
} codertarget_ev3_internal_ev3_Infrared;

#endif                                 /*typedef_codertarget_ev3_internal_ev3_Infrared*/

#ifndef typedef_InstanceStruct_Pr0udGEreIxS2B1GsCZRRC
#define typedef_InstanceStruct_Pr0udGEreIxS2B1GsCZRRC

typedef struct {
  SimStruct *S;
  codertarget_ev3_internal_ev3_Infrared sysobj;
  boolean_T sysobj_not_empty;
  void *emlrtRootTLSGlobal;
  int8_T *b_y0;
} InstanceStruct_Pr0udGEreIxS2B1GsCZRRC;

#endif                                 /*typedef_InstanceStruct_Pr0udGEreIxS2B1GsCZRRC*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_Pr0udGEreIxS2B1GsCZRRC(SimStruct *S, int_T method,
  void* data);

#endif
