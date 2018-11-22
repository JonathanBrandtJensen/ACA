/* Include files */

#include "modelInterface.h"
#include "m_Pr0udGEreIxS2B1GsCZRRC.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static const mxArray *eml_mx;
static const mxArray *b_eml_mx;
static emlrtRSInfo emlrtRSI = { 4,     /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "ev3_Infrared",                      /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2018a\\toolbox\\target\\supportpackages\\ev3\\+codertarget\\+ev3\\+internal\\ev3_Infrared.p"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\System.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 1,   /* lineNo */
  "CustomIcon",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\matlab\\system\\+matlab\\+system\\+mixin\\CustomIcon.p"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 1,   /* lineNo */
  "Propagates",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+mixin\\+coder\\Propagates.p"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 1,   /* lineNo */
  "SampleTime",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+mixin\\+coder\\+internal\\SampleTime.p"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 43,  /* lineNo */
  "ExternalDependency",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\shared\\coder\\coder\\+coder\\ExternalDependency.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 10,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 24,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 26,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 31,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 28,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 1,   /* lineNo */
  "matlabCodegenHandle",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\coder\\coder\\+coder\\+internal\\matlabCodegenHandle.p"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_Pr0udGEreIxS2B1GsCZRRC *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_Pr0udGEreIxS2B1GsCZRRC
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_Pr0udGEreIxS2B1GsCZRRC
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_Pr0udGEreIxS2B1GsCZRRC
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_Pr0udGEreIxS2B1GsCZRRC
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_Pr0udGEreIxS2B1GsCZRRC
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_Pr0udGEreIxS2B1GsCZRRC
  *moduleInstance);
static void mw__internal__system__init__fcn
  (InstanceStruct_Pr0udGEreIxS2B1GsCZRRC *moduleInstance);
static void mw__internal__system__terminate__fcn
  (InstanceStruct_Pr0udGEreIxS2B1GsCZRRC *moduleInstance);
static void mw__internal__call__setup(InstanceStruct_Pr0udGEreIxS2B1GsCZRRC
  *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__reset(InstanceStruct_Pr0udGEreIxS2B1GsCZRRC
  *moduleInstance, const emlrtStack *sp);
static int8_T mw__internal__call__step(InstanceStruct_Pr0udGEreIxS2B1GsCZRRC
  *moduleInstance, const emlrtStack *sp);
static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_Pr0udGEreIxS2B1GsCZRRC *moduleInstance);
static codertarget_ev3_internal_ev3_Infrared emlrt_marshallIn(const emlrtStack
  *sp, const mxArray *b_sysobj, const char_T *identifier);
static codertarget_ev3_internal_ev3_Infrared b_emlrt_marshallIn(const emlrtStack
  *sp, const mxArray *u, const emlrtMsgIdentifier *parentId);
static boolean_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static int32_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static boolean_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier);
static void cgxe_mdl_set_sim_state(InstanceStruct_Pr0udGEreIxS2B1GsCZRRC
  *moduleInstance, const mxArray *st);
static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static const mxArray *getString(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static void error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                  emlrtMCInfo *location);
static const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static boolean_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static int32_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void init_simulink_io_address(InstanceStruct_Pr0udGEreIxS2B1GsCZRRC
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_Pr0udGEreIxS2B1GsCZRRC *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  init_simulink_io_address(moduleInstance);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__init__fcn(moduleInstance);
  mw__internal__call__setup(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_initialize(InstanceStruct_Pr0udGEreIxS2B1GsCZRRC
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__reset(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_outputs(InstanceStruct_Pr0udGEreIxS2B1GsCZRRC
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  *moduleInstance->b_y0 = mw__internal__call__step(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_Pr0udGEreIxS2B1GsCZRRC
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_Pr0udGEreIxS2B1GsCZRRC
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_Pr0udGEreIxS2B1GsCZRRC
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_Pr0udGEreIxS2B1GsCZRRC
  *moduleInstance)
{
  emlrtDestroyArray(&b_eml_mx);
  emlrtDestroyArray(&eml_mx);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__terminate__fcn(moduleInstance);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void mw__internal__system__init__fcn
  (InstanceStruct_Pr0udGEreIxS2B1GsCZRRC *moduleInstance)
{
  const mxArray *m0;
  static const int32_T iv0[2] = { 0, 0 };

  static const int32_T iv1[2] = { 0, 0 };

  m0 = emlrtCreateNumericArray(2, iv0, mxDOUBLE_CLASS, mxREAL);
  emlrtAssignP(&b_eml_mx, m0);
  m0 = emlrtCreateCharArray(2, iv1);
  emlrtAssignP(&eml_mx, m0);
  moduleInstance->sysobj.matlabCodegenIsDeleted = true;
}

static void mw__internal__system__terminate__fcn
  (InstanceStruct_Pr0udGEreIxS2B1GsCZRRC *moduleInstance)
{
  emlrtStack st;
  codertarget_ev3_internal_ev3_Infrared *obj;
  emlrtStack b_st;
  emlrtStack c_st;
  st.site = &emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (!moduleInstance->sysobj.matlabCodegenIsDeleted) {
    b_st.site = &o_emlrtRSI;
    obj->matlabCodegenIsDeleted = true;
    b_st.site = &o_emlrtRSI;
    c_st.site = &e_emlrtRSI;
    if (obj->isInitialized == 1) {
      obj->isInitialized = 2;
    }
  }
}

static void mw__internal__call__setup(InstanceStruct_Pr0udGEreIxS2B1GsCZRRC
  *moduleInstance, const emlrtStack *sp)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  codertarget_ev3_internal_ev3_Infrared *obj;
  emlrtStack d_st;
  char_T u[51];
  int32_T i0;
  const mxArray *y;
  static char_T b_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  char_T c_u[44];
  const mxArray *m1;
  static const int32_T iv2[2] = { 1, 51 };

  static char_T d_u[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  static const int32_T iv3[2] = { 1, 44 };

  const mxArray *b_y;
  static const int32_T iv4[2] = { 1, 51 };

  char_T e_u[5];
  static const int32_T iv5[2] = { 1, 44 };

  const mxArray *c_y;
  static char_T f_u[5] = { 's', 'e', 't', 'u', 'p' };

  static const int32_T iv6[2] = { 1, 5 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &j_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &b_emlrtRSI;
    c_st.site = &c_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    c_st.site = &c_emlrtRSI;
    obj->isInitialized = 0;
    obj->TunablePropsChanged = false;
    d_st.site = &e_emlrtRSI;
    b_st.site = &b_emlrtRSI;
    c_st.site = &f_emlrtRSI;
    b_st.site = &b_emlrtRSI;
    c_st.site = &g_emlrtRSI;
    b_st.site = &b_emlrtRSI;
    c_st.site = &h_emlrtRSI;
    b_st.site = &b_emlrtRSI;
    c_st.site = &i_emlrtRSI;
    obj->matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &k_emlrtRSI;
  obj = &moduleInstance->sysobj;
  moduleInstance->sysobj.isSetupComplete = false;
  if (moduleInstance->sysobj.isInitialized != 0) {
    for (i0 = 0; i0 < 51; i0++) {
      u[i0] = b_u[i0];
    }

    y = NULL;
    m1 = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(&st, 51, m1, &u[0]);
    emlrtAssign(&y, m1);
    for (i0 = 0; i0 < 51; i0++) {
      u[i0] = b_u[i0];
    }

    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv4);
    emlrtInitCharArrayR2013a(&st, 51, m1, &u[0]);
    emlrtAssign(&b_y, m1);
    for (i0 = 0; i0 < 5; i0++) {
      e_u[i0] = f_u[i0];
    }

    c_y = NULL;
    m1 = emlrtCreateCharArray(2, iv6);
    emlrtInitCharArrayR2013a(&st, 5, m1, &e_u[0]);
    emlrtAssign(&c_y, m1);
    b_st.site = &e_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  obj->isInitialized = 1;
  obj->isSetupComplete = true;
  b_st.site = &e_emlrtRSI;
  if (obj->TunablePropsChanged) {
    for (i0 = 0; i0 < 44; i0++) {
      c_u[i0] = d_u[i0];
    }

    y = NULL;
    m1 = emlrtCreateCharArray(2, iv3);
    emlrtInitCharArrayR2013a(&b_st, 44, m1, &c_u[0]);
    emlrtAssign(&y, m1);
    for (i0 = 0; i0 < 44; i0++) {
      c_u[i0] = d_u[i0];
    }

    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv5);
    emlrtInitCharArrayR2013a(&b_st, 44, m1, &c_u[0]);
    emlrtAssign(&b_y, m1);
    c_st.site = &e_emlrtRSI;
    error(&c_st, y, getString(&c_st, b_message(&c_st, b_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }

  obj->TunablePropsChanged = false;
}

static void mw__internal__call__reset(InstanceStruct_Pr0udGEreIxS2B1GsCZRRC
  *moduleInstance, const emlrtStack *sp)
{
  emlrtStack st;
  emlrtStack b_st;
  codertarget_ev3_internal_ev3_Infrared *obj;
  emlrtStack c_st;
  char_T u[45];
  emlrtStack d_st;
  boolean_T tunablePropChangedBeforeResetImpl;
  int32_T i1;
  char_T b_u[44];
  const mxArray *y;
  static char_T c_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *m2;
  static const int32_T iv7[2] = { 1, 45 };

  static char_T d_u[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  static const int32_T iv8[2] = { 1, 44 };

  const mxArray *b_y;
  static const int32_T iv9[2] = { 1, 45 };

  static const int32_T iv10[2] = { 1, 44 };

  char_T e_u[5];
  const mxArray *c_y;
  static char_T f_u[5] = { 'r', 'e', 's', 'e', 't' };

  static const int32_T iv11[2] = { 1, 5 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &j_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &b_emlrtRSI;
    c_st.site = &c_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    c_st.site = &c_emlrtRSI;
    obj->isInitialized = 0;
    obj->TunablePropsChanged = false;
    d_st.site = &e_emlrtRSI;
    b_st.site = &b_emlrtRSI;
    c_st.site = &f_emlrtRSI;
    b_st.site = &b_emlrtRSI;
    c_st.site = &g_emlrtRSI;
    b_st.site = &b_emlrtRSI;
    c_st.site = &h_emlrtRSI;
    b_st.site = &b_emlrtRSI;
    c_st.site = &i_emlrtRSI;
    obj->matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &l_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i1 = 0; i1 < 45; i1++) {
      u[i1] = c_u[i1];
    }

    y = NULL;
    m2 = emlrtCreateCharArray(2, iv7);
    emlrtInitCharArrayR2013a(&st, 45, m2, &u[0]);
    emlrtAssign(&y, m2);
    for (i1 = 0; i1 < 45; i1++) {
      u[i1] = c_u[i1];
    }

    b_y = NULL;
    m2 = emlrtCreateCharArray(2, iv9);
    emlrtInitCharArrayR2013a(&st, 45, m2, &u[0]);
    emlrtAssign(&b_y, m2);
    for (i1 = 0; i1 < 5; i1++) {
      e_u[i1] = f_u[i1];
    }

    c_y = NULL;
    m2 = emlrtCreateCharArray(2, iv11);
    emlrtInitCharArrayR2013a(&st, 5, m2, &e_u[0]);
    emlrtAssign(&c_y, m2);
    b_st.site = &e_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  tunablePropChangedBeforeResetImpl = obj->TunablePropsChanged;
  if ((int32_T)tunablePropChangedBeforeResetImpl != (int32_T)
      obj->TunablePropsChanged) {
    for (i1 = 0; i1 < 44; i1++) {
      b_u[i1] = d_u[i1];
    }

    y = NULL;
    m2 = emlrtCreateCharArray(2, iv8);
    emlrtInitCharArrayR2013a(&st, 44, m2, &b_u[0]);
    emlrtAssign(&y, m2);
    for (i1 = 0; i1 < 44; i1++) {
      b_u[i1] = d_u[i1];
    }

    b_y = NULL;
    m2 = emlrtCreateCharArray(2, iv10);
    emlrtInitCharArrayR2013a(&st, 44, m2, &b_u[0]);
    emlrtAssign(&b_y, m2);
    b_st.site = &e_emlrtRSI;
    error(&b_st, y, getString(&b_st, b_message(&b_st, b_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }
}

static int8_T mw__internal__call__step(InstanceStruct_Pr0udGEreIxS2B1GsCZRRC
  *moduleInstance, const emlrtStack *sp)
{
  int8_T c_y0;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  codertarget_ev3_internal_ev3_Infrared *obj;
  char_T u[45];
  int32_T i2;
  const mxArray *y;
  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *m3;
  static const int32_T iv12[2] = { 1, 45 };

  char_T c_u[51];
  char_T d_u[44];
  static char_T e_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static const int32_T iv13[2] = { 1, 51 };

  const mxArray *b_y;
  static char_T f_u[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  static const int32_T iv14[2] = { 1, 45 };

  static const int32_T iv15[2] = { 1, 44 };

  static const int32_T iv16[2] = { 1, 44 };

  char_T g_u[4];
  static const int32_T iv17[2] = { 1, 51 };

  const mxArray *c_y;
  static char_T h_u[4] = { 's', 't', 'e', 'p' };

  static const int32_T iv18[2] = { 1, 4 };

  static const int32_T iv19[2] = { 1, 44 };

  char_T i_u[5];
  static const int32_T iv20[2] = { 1, 44 };

  static char_T j_u[5] = { 's', 'e', 't', 'u', 'p' };

  static const int32_T iv21[2] = { 1, 5 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &j_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &b_emlrtRSI;
    c_st.site = &c_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    c_st.site = &c_emlrtRSI;
    obj->isInitialized = 0;
    obj->TunablePropsChanged = false;
    d_st.site = &e_emlrtRSI;
    b_st.site = &b_emlrtRSI;
    c_st.site = &f_emlrtRSI;
    b_st.site = &b_emlrtRSI;
    c_st.site = &g_emlrtRSI;
    b_st.site = &b_emlrtRSI;
    c_st.site = &h_emlrtRSI;
    b_st.site = &b_emlrtRSI;
    c_st.site = &i_emlrtRSI;
    obj->matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &m_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i2 = 0; i2 < 45; i2++) {
      u[i2] = b_u[i2];
    }

    y = NULL;
    m3 = emlrtCreateCharArray(2, iv12);
    emlrtInitCharArrayR2013a(&st, 45, m3, &u[0]);
    emlrtAssign(&y, m3);
    for (i2 = 0; i2 < 45; i2++) {
      u[i2] = b_u[i2];
    }

    b_y = NULL;
    m3 = emlrtCreateCharArray(2, iv14);
    emlrtInitCharArrayR2013a(&st, 45, m3, &u[0]);
    emlrtAssign(&b_y, m3);
    for (i2 = 0; i2 < 4; i2++) {
      g_u[i2] = h_u[i2];
    }

    c_y = NULL;
    m3 = emlrtCreateCharArray(2, iv18);
    emlrtInitCharArrayR2013a(&st, 4, m3, &g_u[0]);
    emlrtAssign(&c_y, m3);
    b_st.site = &e_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    b_st.site = &e_emlrtRSI;
    c_st.site = &e_emlrtRSI;
    obj->isSetupComplete = false;
    if (obj->isInitialized != 0) {
      for (i2 = 0; i2 < 51; i2++) {
        c_u[i2] = e_u[i2];
      }

      y = NULL;
      m3 = emlrtCreateCharArray(2, iv13);
      emlrtInitCharArrayR2013a(&c_st, 51, m3, &c_u[0]);
      emlrtAssign(&y, m3);
      for (i2 = 0; i2 < 51; i2++) {
        c_u[i2] = e_u[i2];
      }

      b_y = NULL;
      m3 = emlrtCreateCharArray(2, iv17);
      emlrtInitCharArrayR2013a(&c_st, 51, m3, &c_u[0]);
      emlrtAssign(&b_y, m3);
      for (i2 = 0; i2 < 5; i2++) {
        i_u[i2] = j_u[i2];
      }

      c_y = NULL;
      m3 = emlrtCreateCharArray(2, iv21);
      emlrtInitCharArrayR2013a(&c_st, 5, m3, &i_u[0]);
      emlrtAssign(&c_y, m3);
      d_st.site = &e_emlrtRSI;
      error(&d_st, y, getString(&d_st, message(&d_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    obj->isInitialized = 1;
    obj->isSetupComplete = true;
    d_st.site = &e_emlrtRSI;
    if (obj->TunablePropsChanged) {
      for (i2 = 0; i2 < 44; i2++) {
        d_u[i2] = f_u[i2];
      }

      y = NULL;
      m3 = emlrtCreateCharArray(2, iv16);
      emlrtInitCharArrayR2013a(&d_st, 44, m3, &d_u[0]);
      emlrtAssign(&y, m3);
      for (i2 = 0; i2 < 44; i2++) {
        d_u[i2] = f_u[i2];
      }

      b_y = NULL;
      m3 = emlrtCreateCharArray(2, iv20);
      emlrtInitCharArrayR2013a(&d_st, 44, m3, &d_u[0]);
      emlrtAssign(&b_y, m3);
      e_st.site = &e_emlrtRSI;
      error(&e_st, y, getString(&e_st, b_message(&e_st, b_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    obj->TunablePropsChanged = false;
  }

  b_st.site = &e_emlrtRSI;
  if (obj->TunablePropsChanged) {
    obj->TunablePropsChanged = false;
  }

  c_y0 = 0;
  b_st.site = &e_emlrtRSI;
  if (obj->TunablePropsChanged) {
    for (i2 = 0; i2 < 44; i2++) {
      d_u[i2] = f_u[i2];
    }

    y = NULL;
    m3 = emlrtCreateCharArray(2, iv15);
    emlrtInitCharArrayR2013a(&b_st, 44, m3, &d_u[0]);
    emlrtAssign(&y, m3);
    for (i2 = 0; i2 < 44; i2++) {
      d_u[i2] = f_u[i2];
    }

    b_y = NULL;
    m3 = emlrtCreateCharArray(2, iv19);
    emlrtInitCharArrayR2013a(&b_st, 44, m3, &d_u[0]);
    emlrtAssign(&b_y, m3);
    c_st.site = &e_emlrtRSI;
    error(&c_st, y, getString(&c_st, b_message(&c_st, b_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }

  return c_y0;
}

static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_Pr0udGEreIxS2B1GsCZRRC *moduleInstance)
{
  const mxArray *st;
  const mxArray *y;
  const mxArray *b_y;
  static const char * sv0[4] = { "matlabCodegenIsDeleted", "isInitialized",
    "isSetupComplete", "TunablePropsChanged" };

  const mxArray *c_y;
  const mxArray *m4;
  st = NULL;
  y = NULL;
  emlrtAssign(&y, emlrtCreateCellMatrix(2, 1));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 4, sv0));
  c_y = NULL;
  m4 = emlrtCreateLogicalScalar(moduleInstance->sysobj.matlabCodegenIsDeleted);
  emlrtAssign(&c_y, m4);
  emlrtSetFieldR2017b(b_y, 0, "matlabCodegenIsDeleted", c_y, 0);
  c_y = NULL;
  m4 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m4) = moduleInstance->sysobj.isInitialized;
  emlrtAssign(&c_y, m4);
  emlrtSetFieldR2017b(b_y, 0, "isInitialized", c_y, 1);
  c_y = NULL;
  m4 = emlrtCreateLogicalScalar(moduleInstance->sysobj.isSetupComplete);
  emlrtAssign(&c_y, m4);
  emlrtSetFieldR2017b(b_y, 0, "isSetupComplete", c_y, 2);
  c_y = NULL;
  m4 = emlrtCreateLogicalScalar(moduleInstance->sysobj.TunablePropsChanged);
  emlrtAssign(&c_y, m4);
  emlrtSetFieldR2017b(b_y, 0, "TunablePropsChanged", c_y, 3);
  emlrtSetCell(y, 0, b_y);
  b_y = NULL;
  m4 = emlrtCreateLogicalScalar(moduleInstance->sysobj_not_empty);
  emlrtAssign(&b_y, m4);
  emlrtSetCell(y, 1, b_y);
  emlrtAssign(&st, y);
  return st;
}

static codertarget_ev3_internal_ev3_Infrared emlrt_marshallIn(const emlrtStack
  *sp, const mxArray *b_sysobj, const char_T *identifier)
{
  codertarget_ev3_internal_ev3_Infrared y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(b_sysobj), &thisId);
  emlrtDestroyArray(&b_sysobj);
  return y;
}

static codertarget_ev3_internal_ev3_Infrared b_emlrt_marshallIn(const emlrtStack
  *sp, const mxArray *u, const emlrtMsgIdentifier *parentId)
{
  codertarget_ev3_internal_ev3_Infrared y;
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[4] = { "matlabCodegenIsDeleted",
    "isInitialized", "isSetupComplete", "TunablePropsChanged" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 4, fieldNames, 0U, &dims);
  thisId.fIdentifier = "matlabCodegenIsDeleted";
  y.matlabCodegenIsDeleted = c_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 0, "matlabCodegenIsDeleted")), &thisId);
  thisId.fIdentifier = "isInitialized";
  y.isInitialized = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 1, "isInitialized")), &thisId);
  thisId.fIdentifier = "isSetupComplete";
  y.isSetupComplete = c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    u, 0, 2, "isSetupComplete")), &thisId);
  thisId.fIdentifier = "TunablePropsChanged";
  y.TunablePropsChanged = c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 3, "TunablePropsChanged")), &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static int32_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = g_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = c_emlrt_marshallIn(sp, emlrtAlias(b_sysobj_not_empty), &thisId);
  emlrtDestroyArray(&b_sysobj_not_empty);
  return y;
}

static void cgxe_mdl_set_sim_state(InstanceStruct_Pr0udGEreIxS2B1GsCZRRC
  *moduleInstance, const mxArray *st)
{
  emlrtStack b_st = { NULL,            /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *u;
  b_st.tls = moduleInstance->emlrtRootTLSGlobal;
  u = emlrtAlias(st);
  moduleInstance->sysobj = emlrt_marshallIn(&b_st, emlrtAlias(emlrtGetCell(&b_st,
    "sysobj", u, 0)), "sysobj");
  moduleInstance->sysobj_not_empty = e_emlrt_marshallIn(&b_st, emlrtAlias
    (emlrtGetCell(&b_st, "sysobj_not_empty", u, 1)), "sysobj_not_empty");
  emlrtDestroyArray(&u);
  emlrtDestroyArray(&st);
}

static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m5;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m5, 2, pArrays, "message", true, location);
}

static const mxArray *getString(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m6;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m6, 1, &pArray, "getString", true,
    location);
}

static void error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                  emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "error", true, location);
}

static const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m7;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m7, 1, &pArray, "message", true, location);
}

static boolean_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  boolean_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "logical", false, 0U, &dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static int32_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  int32_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "int32", false, 0U, &dims);
  ret = *(int32_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void init_simulink_io_address(InstanceStruct_Pr0udGEreIxS2B1GsCZRRC
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->b_y0 = (int8_T *)cgxertGetOutputPortSignal(moduleInstance->S,
    0);
}

/* CGXE Glue Code */
static void mdlOutputs_Pr0udGEreIxS2B1GsCZRRC(SimStruct *S, int_T tid)
{
  InstanceStruct_Pr0udGEreIxS2B1GsCZRRC *moduleInstance =
    (InstanceStruct_Pr0udGEreIxS2B1GsCZRRC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_Pr0udGEreIxS2B1GsCZRRC(SimStruct *S)
{
  InstanceStruct_Pr0udGEreIxS2B1GsCZRRC *moduleInstance =
    (InstanceStruct_Pr0udGEreIxS2B1GsCZRRC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_Pr0udGEreIxS2B1GsCZRRC(SimStruct *S, int_T tid)
{
  InstanceStruct_Pr0udGEreIxS2B1GsCZRRC *moduleInstance =
    (InstanceStruct_Pr0udGEreIxS2B1GsCZRRC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static mxArray* getSimState_Pr0udGEreIxS2B1GsCZRRC(SimStruct *S)
{
  mxArray* mxSS;
  InstanceStruct_Pr0udGEreIxS2B1GsCZRRC *moduleInstance =
    (InstanceStruct_Pr0udGEreIxS2B1GsCZRRC *)cgxertGetRuntimeInstance(S);
  mxSS = (mxArray *) cgxe_mdl_get_sim_state(moduleInstance);
  return mxSS;
}

static void setSimState_Pr0udGEreIxS2B1GsCZRRC(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_Pr0udGEreIxS2B1GsCZRRC *moduleInstance =
    (InstanceStruct_Pr0udGEreIxS2B1GsCZRRC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_set_sim_state(moduleInstance, emlrtAlias(ss));
}

static void mdlTerminate_Pr0udGEreIxS2B1GsCZRRC(SimStruct *S)
{
  InstanceStruct_Pr0udGEreIxS2B1GsCZRRC *moduleInstance =
    (InstanceStruct_Pr0udGEreIxS2B1GsCZRRC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_Pr0udGEreIxS2B1GsCZRRC(SimStruct *S)
{
  InstanceStruct_Pr0udGEreIxS2B1GsCZRRC *moduleInstance =
    (InstanceStruct_Pr0udGEreIxS2B1GsCZRRC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_Pr0udGEreIxS2B1GsCZRRC(SimStruct *S)
{
  InstanceStruct_Pr0udGEreIxS2B1GsCZRRC *moduleInstance =
    (InstanceStruct_Pr0udGEreIxS2B1GsCZRRC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_Pr0udGEreIxS2B1GsCZRRC(SimStruct *S)
{
  InstanceStruct_Pr0udGEreIxS2B1GsCZRRC *moduleInstance =
    (InstanceStruct_Pr0udGEreIxS2B1GsCZRRC *)calloc(1, sizeof
    (InstanceStruct_Pr0udGEreIxS2B1GsCZRRC));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_Pr0udGEreIxS2B1GsCZRRC);
  ssSetmdlInitializeConditions(S, mdlInitialize_Pr0udGEreIxS2B1GsCZRRC);
  ssSetmdlUpdate(S, mdlUpdate_Pr0udGEreIxS2B1GsCZRRC);
  ssSetmdlTerminate(S, mdlTerminate_Pr0udGEreIxS2B1GsCZRRC);
  ssSetmdlEnable(S, mdlEnable_Pr0udGEreIxS2B1GsCZRRC);
  ssSetmdlDisable(S, mdlDisable_Pr0udGEreIxS2B1GsCZRRC);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_Pr0udGEreIxS2B1GsCZRRC(SimStruct *S)
{
}

void method_dispatcher_Pr0udGEreIxS2B1GsCZRRC(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_Pr0udGEreIxS2B1GsCZRRC(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_Pr0udGEreIxS2B1GsCZRRC(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_Pr0udGEreIxS2B1GsCZRRC(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_Pr0udGEreIxS2B1GsCZRRC(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: Pr0udGEreIxS2B1GsCZRRC.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_Pr0udGEreIxS2B1GsCZRRC_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxArray * elem_10;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,1,elem_3);
  elem_4 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_4);
  elem_5 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_5);
  elem_6 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_6);
  elem_7 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_7);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_8 = mxCreateCellMatrix(1,1);
  elem_9 = mxCreateString("codertarget.ev3.internal.ev3_Infrared");
  mxSetCell(elem_8,0,elem_9);
  mxSetCell(mxBIArgs,1,elem_8);
  elem_10 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_10);
  return mxBIArgs;
}

mxArray *cgxe_Pr0udGEreIxS2B1GsCZRRC_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString(
    "codertarget.ev3.internal.ev3_Infrared");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
