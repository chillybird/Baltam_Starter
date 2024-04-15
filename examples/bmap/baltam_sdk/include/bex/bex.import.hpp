/**
 * @brief bex.import.hpp 是根据函数列表自动生成的。
 * 使用时请在 bex.hpp 之后包含。
 */
#ifndef BALTAM_BEX_IMPORT_HPP
#define BALTAM_BEX_IMPORT_HPP

namespace bex {
BALTAM_LOCAL extern void * bex_handle;
BALTAM_LOCAL extern decltype(&bxAddCXXClass_impl) __bxAddCXXClass_impl;
BALTAM_LOCAL extern decltype(&bxAddField) __bxAddField;
BALTAM_LOCAL extern decltype(&bxAddFieldAt) __bxAddFieldAt;
BALTAM_LOCAL extern decltype(&bxAsCStr) __bxAsCStr;
BALTAM_LOCAL extern decltype(&bxAsInt) __bxAsInt;
BALTAM_LOCAL extern decltype(&bxCalcSingleSubscript) __bxCalcSingleSubscript;
BALTAM_LOCAL extern decltype(&bxCallBaltamatica) __bxCallBaltamatica;
BALTAM_LOCAL extern decltype(&bxCallBaltamaticaF) __bxCallBaltamaticaF;
BALTAM_LOCAL extern decltype(&bxCreateCellArray) __bxCreateCellArray;
BALTAM_LOCAL extern decltype(&bxCreateCellMatrix) __bxCreateCellMatrix;
BALTAM_LOCAL extern decltype(&bxCreateCharArray) __bxCreateCharArray;
BALTAM_LOCAL extern decltype(&bxCreateCharMatrixFromStrings) __bxCreateCharMatrixFromStrings;
BALTAM_LOCAL extern decltype(&bxCreateComplexDoubleScalar) __bxCreateComplexDoubleScalar;
BALTAM_LOCAL extern decltype(&bxCreateComplexSingleScalar) __bxCreateComplexSingleScalar;
BALTAM_LOCAL extern decltype(&bxCreateCStruct) __bxCreateCStruct;
BALTAM_LOCAL extern decltype(&bxCreateDoubleMatrix) __bxCreateDoubleMatrix;
BALTAM_LOCAL extern decltype(&bxCreateDoubleScalar) __bxCreateDoubleScalar;
BALTAM_LOCAL extern decltype(&bxCreateExtObj_v) __bxCreateExtObj_v;
BALTAM_LOCAL extern decltype(&bxCreateInt16Scalar) __bxCreateInt16Scalar;
BALTAM_LOCAL extern decltype(&bxCreateInt32Scalar) __bxCreateInt32Scalar;
BALTAM_LOCAL extern decltype(&bxCreateInt64Scalar) __bxCreateInt64Scalar;
BALTAM_LOCAL extern decltype(&bxCreateInt8Scalar) __bxCreateInt8Scalar;
BALTAM_LOCAL extern decltype(&bxCreateLogicalArray) __bxCreateLogicalArray;
BALTAM_LOCAL extern decltype(&bxCreateLogicalMatrix) __bxCreateLogicalMatrix;
BALTAM_LOCAL extern decltype(&bxCreateLogicalScalar) __bxCreateLogicalScalar;
BALTAM_LOCAL extern decltype(&bxCreateNumericArray) __bxCreateNumericArray;
BALTAM_LOCAL extern decltype(&bxCreateNumericMatrix) __bxCreateNumericMatrix;
BALTAM_LOCAL extern decltype(&bxCreateSingleScalar) __bxCreateSingleScalar;
BALTAM_LOCAL extern decltype(&bxCreateSparse) __bxCreateSparse;
BALTAM_LOCAL extern decltype(&bxCreateSparseLogicalMatrix) __bxCreateSparseLogicalMatrix;
BALTAM_LOCAL extern decltype(&bxCreateSparseNumericMatrix) __bxCreateSparseNumericMatrix;
BALTAM_LOCAL extern decltype(&bxCreateString) __bxCreateString;
BALTAM_LOCAL extern decltype(&bxCreateStringArray) __bxCreateStringArray;
BALTAM_LOCAL extern decltype(&bxCreateStringMatrix) __bxCreateStringMatrix;
BALTAM_LOCAL extern decltype(&bxCreateStringMatrixFromStrings) __bxCreateStringMatrixFromStrings;
BALTAM_LOCAL extern decltype(&bxCreateStringObj) __bxCreateStringObj;
BALTAM_LOCAL extern decltype(&bxCreateStringScalar) __bxCreateStringScalar;
BALTAM_LOCAL extern decltype(&bxCreateStructArray) __bxCreateStructArray;
BALTAM_LOCAL extern decltype(&bxCreateStructMatrix) __bxCreateStructMatrix;
BALTAM_LOCAL extern decltype(&bxCreateUInt16Scalar) __bxCreateUInt16Scalar;
BALTAM_LOCAL extern decltype(&bxCreateUInt32Scalar) __bxCreateUInt32Scalar;
BALTAM_LOCAL extern decltype(&bxCreateUInt64Scalar) __bxCreateUInt64Scalar;
BALTAM_LOCAL extern decltype(&bxCreateUInt8Scalar) __bxCreateUInt8Scalar;
BALTAM_LOCAL extern decltype(&bxDestroyArray) __bxDestroyArray;
BALTAM_LOCAL extern decltype(&bxDuplicateArray) __bxDuplicateArray;
BALTAM_LOCAL extern decltype(&bxDuplicateArrayS) __bxDuplicateArrayS;
BALTAM_LOCAL extern decltype(&bxErrMsgTxt) __bxErrMsgTxt;
BALTAM_LOCAL extern decltype(&bxEvalString) __bxEvalString;
BALTAM_LOCAL extern decltype(&bxF2KQuery) __bxF2KQuery;
BALTAM_LOCAL extern decltype(&bxGetCell) __bxGetCell;
BALTAM_LOCAL extern decltype(&bxGetCellRO) __bxGetCellRO;
BALTAM_LOCAL extern decltype(&bxGetCellRW) __bxGetCellRW;
BALTAM_LOCAL extern decltype(&bxGetChars) __bxGetChars;
BALTAM_LOCAL extern decltype(&bxGetCharsRO) __bxGetCharsRO;
BALTAM_LOCAL extern decltype(&bxGetCharsRW) __bxGetCharsRW;
BALTAM_LOCAL extern decltype(&bxGetClassID) __bxGetClassID;
BALTAM_LOCAL extern decltype(&bxGetComplexDoubles) __bxGetComplexDoubles;
BALTAM_LOCAL extern decltype(&bxGetComplexDoublesRO) __bxGetComplexDoublesRO;
BALTAM_LOCAL extern decltype(&bxGetComplexDoublesRW) __bxGetComplexDoublesRW;
BALTAM_LOCAL extern decltype(&bxGetComplexSingles) __bxGetComplexSingles;
BALTAM_LOCAL extern decltype(&bxGetComplexSinglesRO) __bxGetComplexSinglesRO;
BALTAM_LOCAL extern decltype(&bxGetComplexSinglesRW) __bxGetComplexSinglesRW;
BALTAM_LOCAL extern decltype(&bxGetCStruct) __bxGetCStruct;
BALTAM_LOCAL extern decltype(&bxGetDimensions) __bxGetDimensions;
BALTAM_LOCAL extern decltype(&bxGetDoubles) __bxGetDoubles;
BALTAM_LOCAL extern decltype(&bxGetDoublesRO) __bxGetDoublesRO;
BALTAM_LOCAL extern decltype(&bxGetDoublesRW) __bxGetDoublesRW;
BALTAM_LOCAL extern decltype(&bxGetExtObj_impl) __bxGetExtObj_impl;
BALTAM_LOCAL extern decltype(&bxGetField) __bxGetField;
BALTAM_LOCAL extern decltype(&bxGetFieldByNumber) __bxGetFieldByNumber;
BALTAM_LOCAL extern decltype(&bxGetFieldByNumberRO) __bxGetFieldByNumberRO;
BALTAM_LOCAL extern decltype(&bxGetFieldByNumberRW) __bxGetFieldByNumberRW;
BALTAM_LOCAL extern decltype(&bxGetFieldNameByNumber) __bxGetFieldNameByNumber;
BALTAM_LOCAL extern decltype(&bxGetFieldNumber) __bxGetFieldNumber;
BALTAM_LOCAL extern decltype(&bxGetFieldRO) __bxGetFieldRO;
BALTAM_LOCAL extern decltype(&bxGetFieldRW) __bxGetFieldRW;
BALTAM_LOCAL extern decltype(&bxGetFunctionHandleData) __bxGetFunctionHandleData;
BALTAM_LOCAL extern decltype(&bxGetFunctionHandleType) __bxGetFunctionHandleType;
BALTAM_LOCAL extern decltype(&bxGetInt16s) __bxGetInt16s;
BALTAM_LOCAL extern decltype(&bxGetInt16sRO) __bxGetInt16sRO;
BALTAM_LOCAL extern decltype(&bxGetInt16sRW) __bxGetInt16sRW;
BALTAM_LOCAL extern decltype(&bxGetInt32s) __bxGetInt32s;
BALTAM_LOCAL extern decltype(&bxGetInt32sRO) __bxGetInt32sRO;
BALTAM_LOCAL extern decltype(&bxGetInt32sRW) __bxGetInt32sRW;
BALTAM_LOCAL extern decltype(&bxGetInt64s) __bxGetInt64s;
BALTAM_LOCAL extern decltype(&bxGetInt64sRO) __bxGetInt64sRO;
BALTAM_LOCAL extern decltype(&bxGetInt64sRW) __bxGetInt64sRW;
BALTAM_LOCAL extern decltype(&bxGetInt8s) __bxGetInt8s;
BALTAM_LOCAL extern decltype(&bxGetInt8sRO) __bxGetInt8sRO;
BALTAM_LOCAL extern decltype(&bxGetInt8sRW) __bxGetInt8sRW;
BALTAM_LOCAL extern decltype(&bxGetIr) __bxGetIr;
BALTAM_LOCAL extern decltype(&bxGetIrRO) __bxGetIrRO;
BALTAM_LOCAL extern decltype(&bxGetIrRW) __bxGetIrRW;
BALTAM_LOCAL extern decltype(&bxGetJc) __bxGetJc;
BALTAM_LOCAL extern decltype(&bxGetJcRO) __bxGetJcRO;
BALTAM_LOCAL extern decltype(&bxGetJcRW) __bxGetJcRW;
BALTAM_LOCAL extern decltype(&bxGetLogicals) __bxGetLogicals;
BALTAM_LOCAL extern decltype(&bxGetLogicalsRO) __bxGetLogicalsRO;
BALTAM_LOCAL extern decltype(&bxGetLogicalsRW) __bxGetLogicalsRW;
BALTAM_LOCAL extern decltype(&bxGetM) __bxGetM;
BALTAM_LOCAL extern decltype(&bxGetN) __bxGetN;
BALTAM_LOCAL extern decltype(&bxGetNnz) __bxGetNnz;
BALTAM_LOCAL extern decltype(&bxGetNumberOfDimensions) __bxGetNumberOfDimensions;
BALTAM_LOCAL extern decltype(&bxGetNumberOfElements) __bxGetNumberOfElements;
BALTAM_LOCAL extern decltype(&bxGetNumberOfFields) __bxGetNumberOfFields;
BALTAM_LOCAL extern decltype(&bxGetNzmax) __bxGetNzmax;
BALTAM_LOCAL extern decltype(&bxGetPr) __bxGetPr;
BALTAM_LOCAL extern decltype(&bxGetPrRO) __bxGetPrRO;
BALTAM_LOCAL extern decltype(&bxGetPrRW) __bxGetPrRW;
BALTAM_LOCAL extern decltype(&bxGetSingles) __bxGetSingles;
BALTAM_LOCAL extern decltype(&bxGetSinglesRO) __bxGetSinglesRO;
BALTAM_LOCAL extern decltype(&bxGetSinglesRW) __bxGetSinglesRW;
BALTAM_LOCAL extern decltype(&bxGetSparseComplexDoubles) __bxGetSparseComplexDoubles;
BALTAM_LOCAL extern decltype(&bxGetSparseComplexDoublesRO) __bxGetSparseComplexDoublesRO;
BALTAM_LOCAL extern decltype(&bxGetSparseComplexDoublesRW) __bxGetSparseComplexDoublesRW;
BALTAM_LOCAL extern decltype(&bxGetSparseComplexSingles) __bxGetSparseComplexSingles;
BALTAM_LOCAL extern decltype(&bxGetSparseComplexSinglesRO) __bxGetSparseComplexSinglesRO;
BALTAM_LOCAL extern decltype(&bxGetSparseComplexSinglesRW) __bxGetSparseComplexSinglesRW;
BALTAM_LOCAL extern decltype(&bxGetSparseDoubles) __bxGetSparseDoubles;
BALTAM_LOCAL extern decltype(&bxGetSparseDoublesRO) __bxGetSparseDoublesRO;
BALTAM_LOCAL extern decltype(&bxGetSparseDoublesRW) __bxGetSparseDoublesRW;
BALTAM_LOCAL extern decltype(&bxGetSparseLogicals) __bxGetSparseLogicals;
BALTAM_LOCAL extern decltype(&bxGetSparseLogicalsRO) __bxGetSparseLogicalsRO;
BALTAM_LOCAL extern decltype(&bxGetSparseLogicalsRW) __bxGetSparseLogicalsRW;
BALTAM_LOCAL extern decltype(&bxGetSparseSingles) __bxGetSparseSingles;
BALTAM_LOCAL extern decltype(&bxGetSparseSinglesRO) __bxGetSparseSinglesRO;
BALTAM_LOCAL extern decltype(&bxGetSparseSinglesRW) __bxGetSparseSinglesRW;
BALTAM_LOCAL extern decltype(&bxGetString) __bxGetString;
BALTAM_LOCAL extern decltype(&bxGetStringDataPr) __bxGetStringDataPr;
BALTAM_LOCAL extern decltype(&bxGetStringLen) __bxGetStringLen;
BALTAM_LOCAL extern decltype(&bxGetStringLength) __bxGetStringLength;
BALTAM_LOCAL extern decltype(&bxGetUInt16s) __bxGetUInt16s;
BALTAM_LOCAL extern decltype(&bxGetUInt16sRO) __bxGetUInt16sRO;
BALTAM_LOCAL extern decltype(&bxGetUInt16sRW) __bxGetUInt16sRW;
BALTAM_LOCAL extern decltype(&bxGetUInt32s) __bxGetUInt32s;
BALTAM_LOCAL extern decltype(&bxGetUInt32sRO) __bxGetUInt32sRO;
BALTAM_LOCAL extern decltype(&bxGetUInt32sRW) __bxGetUInt32sRW;
BALTAM_LOCAL extern decltype(&bxGetUInt64s) __bxGetUInt64s;
BALTAM_LOCAL extern decltype(&bxGetUInt64sRO) __bxGetUInt64sRO;
BALTAM_LOCAL extern decltype(&bxGetUInt64sRW) __bxGetUInt64sRW;
BALTAM_LOCAL extern decltype(&bxGetUInt8s) __bxGetUInt8s;
BALTAM_LOCAL extern decltype(&bxGetUInt8sRO) __bxGetUInt8sRO;
BALTAM_LOCAL extern decltype(&bxGetUInt8sRW) __bxGetUInt8sRW;
BALTAM_LOCAL extern decltype(&bxIsCell) __bxIsCell;
BALTAM_LOCAL extern decltype(&bxIsChar) __bxIsChar;
BALTAM_LOCAL extern decltype(&bxIsComplex) __bxIsComplex;
BALTAM_LOCAL extern decltype(&bxIsComplexDouble) __bxIsComplexDouble;
BALTAM_LOCAL extern decltype(&bxIsComplexSingle) __bxIsComplexSingle;
BALTAM_LOCAL extern decltype(&bxIsDouble) __bxIsDouble;
BALTAM_LOCAL extern decltype(&bxIsFunctionHandle) __bxIsFunctionHandle;
BALTAM_LOCAL extern decltype(&bxIsInt16) __bxIsInt16;
BALTAM_LOCAL extern decltype(&bxIsInt32) __bxIsInt32;
BALTAM_LOCAL extern decltype(&bxIsInt64) __bxIsInt64;
BALTAM_LOCAL extern decltype(&bxIsInt8) __bxIsInt8;
BALTAM_LOCAL extern decltype(&bxIsLogical) __bxIsLogical;
BALTAM_LOCAL extern decltype(&bxIsRealDouble) __bxIsRealDouble;
BALTAM_LOCAL extern decltype(&bxIsRealSingle) __bxIsRealSingle;
BALTAM_LOCAL extern decltype(&bxIsSingle) __bxIsSingle;
BALTAM_LOCAL extern decltype(&bxIsSparse) __bxIsSparse;
BALTAM_LOCAL extern decltype(&bxIsSparseComplexDouble) __bxIsSparseComplexDouble;
BALTAM_LOCAL extern decltype(&bxIsSparseComplexSingle) __bxIsSparseComplexSingle;
BALTAM_LOCAL extern decltype(&bxIsSparseLogical) __bxIsSparseLogical;
BALTAM_LOCAL extern decltype(&bxIsSparseRealDouble) __bxIsSparseRealDouble;
BALTAM_LOCAL extern decltype(&bxIsSparseRealSingle) __bxIsSparseRealSingle;
BALTAM_LOCAL extern decltype(&bxIsString) __bxIsString;
BALTAM_LOCAL extern decltype(&bxIsStruct) __bxIsStruct;
BALTAM_LOCAL extern decltype(&bxIsUInt16) __bxIsUInt16;
BALTAM_LOCAL extern decltype(&bxIsUInt32) __bxIsUInt32;
BALTAM_LOCAL extern decltype(&bxIsUInt64) __bxIsUInt64;
BALTAM_LOCAL extern decltype(&bxIsUInt8) __bxIsUInt8;
BALTAM_LOCAL extern decltype(&bxK2FQuery) __bxK2FQuery;
BALTAM_LOCAL extern decltype(&bxOverloadFunction) __bxOverloadFunction;
BALTAM_LOCAL extern decltype(&bxPrintf) __bxPrintf;
BALTAM_LOCAL extern decltype(&bxRegisterBinaryOperator) __bxRegisterBinaryOperator;
BALTAM_LOCAL extern decltype(&bxRegisterBinaryOperatorID) __bxRegisterBinaryOperatorID;
BALTAM_LOCAL extern decltype(&bxRegisterCStruct) __bxRegisterCStruct;
BALTAM_LOCAL extern decltype(&bxRegisterOperator) __bxRegisterOperator;
BALTAM_LOCAL extern decltype(&bxRegisterOperatorID) __bxRegisterOperatorID;
BALTAM_LOCAL extern decltype(&bxRegisterTernaryOperator) __bxRegisterTernaryOperator;
BALTAM_LOCAL extern decltype(&bxRegisterTernaryOperatorID) __bxRegisterTernaryOperatorID;
BALTAM_LOCAL extern decltype(&bxRegisterUnaryOperator) __bxRegisterUnaryOperator;
BALTAM_LOCAL extern decltype(&bxRegisterUnaryOperatorID) __bxRegisterUnaryOperatorID;
BALTAM_LOCAL extern decltype(&bxRemoveField) __bxRemoveField;
BALTAM_LOCAL extern decltype(&bxRenameField) __bxRenameField;
BALTAM_LOCAL extern decltype(&bxResize) __bxResize;
BALTAM_LOCAL extern decltype(&bxReturnOverloadFailure) __bxReturnOverloadFailure;
BALTAM_LOCAL extern decltype(&bxReturnOverloadFailureMsg) __bxReturnOverloadFailureMsg;
BALTAM_LOCAL extern decltype(&bxSetCell) __bxSetCell;
BALTAM_LOCAL extern decltype(&bxSetDimensions) __bxSetDimensions;
BALTAM_LOCAL extern decltype(&bxSetField) __bxSetField;
BALTAM_LOCAL extern decltype(&bxSetFieldByNumber) __bxSetFieldByNumber;
BALTAM_LOCAL extern decltype(&bxSetM) __bxSetM;
BALTAM_LOCAL extern decltype(&bxSetN) __bxSetN;
BALTAM_LOCAL extern decltype(&bxSetNzmax) __bxSetNzmax;
BALTAM_LOCAL extern decltype(&bxSetString) __bxSetString;
BALTAM_LOCAL extern decltype(&bxSetStringFromCStr) __bxSetStringFromCStr;
BALTAM_LOCAL extern decltype(&bxSparseFinalize) __bxSparseFinalize;
BALTAM_LOCAL extern decltype(&bxTypeCStr) __bxTypeCStr;

}

#if defined(__WIN32__) || defined(__CYGWIN__) || defined(__MINGW32__)
#include <Windows.h>
#define BALTAM_BEX_IMPORT_FCN_FROM(p) \
*(void **) (&bex::__bxAddCXXClass_impl) = (void*)GetProcAddress((HMODULE)p, "bxAddCXXClass_impl"); \
*(void **) (&bex::__bxAddField) = (void*)GetProcAddress((HMODULE)p, "bxAddField"); \
*(void **) (&bex::__bxAddFieldAt) = (void*)GetProcAddress((HMODULE)p, "bxAddFieldAt"); \
*(void **) (&bex::__bxAsCStr) = (void*)GetProcAddress((HMODULE)p, "bxAsCStr"); \
*(void **) (&bex::__bxAsInt) = (void*)GetProcAddress((HMODULE)p, "bxAsInt"); \
*(void **) (&bex::__bxCalcSingleSubscript) = (void*)GetProcAddress((HMODULE)p, "bxCalcSingleSubscript"); \
*(void **) (&bex::__bxCallBaltamatica) = (void*)GetProcAddress((HMODULE)p, "bxCallBaltamatica"); \
*(void **) (&bex::__bxCallBaltamaticaF) = (void*)GetProcAddress((HMODULE)p, "bxCallBaltamaticaF"); \
*(void **) (&bex::__bxCreateCellArray) = (void*)GetProcAddress((HMODULE)p, "bxCreateCellArray"); \
*(void **) (&bex::__bxCreateCellMatrix) = (void*)GetProcAddress((HMODULE)p, "bxCreateCellMatrix"); \
*(void **) (&bex::__bxCreateCharArray) = (void*)GetProcAddress((HMODULE)p, "bxCreateCharArray"); \
*(void **) (&bex::__bxCreateCharMatrixFromStrings) = (void*)GetProcAddress((HMODULE)p, "bxCreateCharMatrixFromStrings"); \
*(void **) (&bex::__bxCreateComplexDoubleScalar) = (void*)GetProcAddress((HMODULE)p, "bxCreateComplexDoubleScalar"); \
*(void **) (&bex::__bxCreateComplexSingleScalar) = (void*)GetProcAddress((HMODULE)p, "bxCreateComplexSingleScalar"); \
*(void **) (&bex::__bxCreateCStruct) = (void*)GetProcAddress((HMODULE)p, "bxCreateCStruct"); \
*(void **) (&bex::__bxCreateDoubleMatrix) = (void*)GetProcAddress((HMODULE)p, "bxCreateDoubleMatrix"); \
*(void **) (&bex::__bxCreateDoubleScalar) = (void*)GetProcAddress((HMODULE)p, "bxCreateDoubleScalar"); \
*(void **) (&bex::__bxCreateExtObj_v) = (void*)GetProcAddress((HMODULE)p, "bxCreateExtObj_v"); \
*(void **) (&bex::__bxCreateInt16Scalar) = (void*)GetProcAddress((HMODULE)p, "bxCreateInt16Scalar"); \
*(void **) (&bex::__bxCreateInt32Scalar) = (void*)GetProcAddress((HMODULE)p, "bxCreateInt32Scalar"); \
*(void **) (&bex::__bxCreateInt64Scalar) = (void*)GetProcAddress((HMODULE)p, "bxCreateInt64Scalar"); \
*(void **) (&bex::__bxCreateInt8Scalar) = (void*)GetProcAddress((HMODULE)p, "bxCreateInt8Scalar"); \
*(void **) (&bex::__bxCreateLogicalArray) = (void*)GetProcAddress((HMODULE)p, "bxCreateLogicalArray"); \
*(void **) (&bex::__bxCreateLogicalMatrix) = (void*)GetProcAddress((HMODULE)p, "bxCreateLogicalMatrix"); \
*(void **) (&bex::__bxCreateLogicalScalar) = (void*)GetProcAddress((HMODULE)p, "bxCreateLogicalScalar"); \
*(void **) (&bex::__bxCreateNumericArray) = (void*)GetProcAddress((HMODULE)p, "bxCreateNumericArray"); \
*(void **) (&bex::__bxCreateNumericMatrix) = (void*)GetProcAddress((HMODULE)p, "bxCreateNumericMatrix"); \
*(void **) (&bex::__bxCreateSingleScalar) = (void*)GetProcAddress((HMODULE)p, "bxCreateSingleScalar"); \
*(void **) (&bex::__bxCreateSparse) = (void*)GetProcAddress((HMODULE)p, "bxCreateSparse"); \
*(void **) (&bex::__bxCreateSparseLogicalMatrix) = (void*)GetProcAddress((HMODULE)p, "bxCreateSparseLogicalMatrix"); \
*(void **) (&bex::__bxCreateSparseNumericMatrix) = (void*)GetProcAddress((HMODULE)p, "bxCreateSparseNumericMatrix"); \
*(void **) (&bex::__bxCreateString) = (void*)GetProcAddress((HMODULE)p, "bxCreateString"); \
*(void **) (&bex::__bxCreateStringArray) = (void*)GetProcAddress((HMODULE)p, "bxCreateStringArray"); \
*(void **) (&bex::__bxCreateStringMatrix) = (void*)GetProcAddress((HMODULE)p, "bxCreateStringMatrix"); \
*(void **) (&bex::__bxCreateStringMatrixFromStrings) = (void*)GetProcAddress((HMODULE)p, "bxCreateStringMatrixFromStrings"); \
*(void **) (&bex::__bxCreateStringObj) = (void*)GetProcAddress((HMODULE)p, "bxCreateStringObj"); \
*(void **) (&bex::__bxCreateStringScalar) = (void*)GetProcAddress((HMODULE)p, "bxCreateStringScalar"); \
*(void **) (&bex::__bxCreateStructArray) = (void*)GetProcAddress((HMODULE)p, "bxCreateStructArray"); \
*(void **) (&bex::__bxCreateStructMatrix) = (void*)GetProcAddress((HMODULE)p, "bxCreateStructMatrix"); \
*(void **) (&bex::__bxCreateUInt16Scalar) = (void*)GetProcAddress((HMODULE)p, "bxCreateUInt16Scalar"); \
*(void **) (&bex::__bxCreateUInt32Scalar) = (void*)GetProcAddress((HMODULE)p, "bxCreateUInt32Scalar"); \
*(void **) (&bex::__bxCreateUInt64Scalar) = (void*)GetProcAddress((HMODULE)p, "bxCreateUInt64Scalar"); \
*(void **) (&bex::__bxCreateUInt8Scalar) = (void*)GetProcAddress((HMODULE)p, "bxCreateUInt8Scalar"); \
*(void **) (&bex::__bxDestroyArray) = (void*)GetProcAddress((HMODULE)p, "bxDestroyArray"); \
*(void **) (&bex::__bxDuplicateArray) = (void*)GetProcAddress((HMODULE)p, "bxDuplicateArray"); \
*(void **) (&bex::__bxDuplicateArrayS) = (void*)GetProcAddress((HMODULE)p, "bxDuplicateArrayS"); \
*(void **) (&bex::__bxErrMsgTxt) = (void*)GetProcAddress((HMODULE)p, "bxErrMsgTxt"); \
*(void **) (&bex::__bxEvalString) = (void*)GetProcAddress((HMODULE)p, "bxEvalString"); \
*(void **) (&bex::__bxF2KQuery) = (void*)GetProcAddress((HMODULE)p, "bxF2KQuery"); \
*(void **) (&bex::__bxGetCell) = (void*)GetProcAddress((HMODULE)p, "bxGetCell"); \
*(void **) (&bex::__bxGetCellRO) = (void*)GetProcAddress((HMODULE)p, "bxGetCellRO"); \
*(void **) (&bex::__bxGetCellRW) = (void*)GetProcAddress((HMODULE)p, "bxGetCellRW"); \
*(void **) (&bex::__bxGetChars) = (void*)GetProcAddress((HMODULE)p, "bxGetChars"); \
*(void **) (&bex::__bxGetCharsRO) = (void*)GetProcAddress((HMODULE)p, "bxGetCharsRO"); \
*(void **) (&bex::__bxGetCharsRW) = (void*)GetProcAddress((HMODULE)p, "bxGetCharsRW"); \
*(void **) (&bex::__bxGetClassID) = (void*)GetProcAddress((HMODULE)p, "bxGetClassID"); \
*(void **) (&bex::__bxGetComplexDoubles) = (void*)GetProcAddress((HMODULE)p, "bxGetComplexDoubles"); \
*(void **) (&bex::__bxGetComplexDoublesRO) = (void*)GetProcAddress((HMODULE)p, "bxGetComplexDoublesRO"); \
*(void **) (&bex::__bxGetComplexDoublesRW) = (void*)GetProcAddress((HMODULE)p, "bxGetComplexDoublesRW"); \
*(void **) (&bex::__bxGetComplexSingles) = (void*)GetProcAddress((HMODULE)p, "bxGetComplexSingles"); \
*(void **) (&bex::__bxGetComplexSinglesRO) = (void*)GetProcAddress((HMODULE)p, "bxGetComplexSinglesRO"); \
*(void **) (&bex::__bxGetComplexSinglesRW) = (void*)GetProcAddress((HMODULE)p, "bxGetComplexSinglesRW"); \
*(void **) (&bex::__bxGetCStruct) = (void*)GetProcAddress((HMODULE)p, "bxGetCStruct"); \
*(void **) (&bex::__bxGetDimensions) = (void*)GetProcAddress((HMODULE)p, "bxGetDimensions"); \
*(void **) (&bex::__bxGetDoubles) = (void*)GetProcAddress((HMODULE)p, "bxGetDoubles"); \
*(void **) (&bex::__bxGetDoublesRO) = (void*)GetProcAddress((HMODULE)p, "bxGetDoublesRO"); \
*(void **) (&bex::__bxGetDoublesRW) = (void*)GetProcAddress((HMODULE)p, "bxGetDoublesRW"); \
*(void **) (&bex::__bxGetExtObj_impl) = (void*)GetProcAddress((HMODULE)p, "bxGetExtObj_impl"); \
*(void **) (&bex::__bxGetField) = (void*)GetProcAddress((HMODULE)p, "bxGetField"); \
*(void **) (&bex::__bxGetFieldByNumber) = (void*)GetProcAddress((HMODULE)p, "bxGetFieldByNumber"); \
*(void **) (&bex::__bxGetFieldByNumberRO) = (void*)GetProcAddress((HMODULE)p, "bxGetFieldByNumberRO"); \
*(void **) (&bex::__bxGetFieldByNumberRW) = (void*)GetProcAddress((HMODULE)p, "bxGetFieldByNumberRW"); \
*(void **) (&bex::__bxGetFieldNameByNumber) = (void*)GetProcAddress((HMODULE)p, "bxGetFieldNameByNumber"); \
*(void **) (&bex::__bxGetFieldNumber) = (void*)GetProcAddress((HMODULE)p, "bxGetFieldNumber"); \
*(void **) (&bex::__bxGetFieldRO) = (void*)GetProcAddress((HMODULE)p, "bxGetFieldRO"); \
*(void **) (&bex::__bxGetFieldRW) = (void*)GetProcAddress((HMODULE)p, "bxGetFieldRW"); \
*(void **) (&bex::__bxGetFunctionHandleData) = (void*)GetProcAddress((HMODULE)p, "bxGetFunctionHandleData"); \
*(void **) (&bex::__bxGetFunctionHandleType) = (void*)GetProcAddress((HMODULE)p, "bxGetFunctionHandleType"); \
*(void **) (&bex::__bxGetInt16s) = (void*)GetProcAddress((HMODULE)p, "bxGetInt16s"); \
*(void **) (&bex::__bxGetInt16sRO) = (void*)GetProcAddress((HMODULE)p, "bxGetInt16sRO"); \
*(void **) (&bex::__bxGetInt16sRW) = (void*)GetProcAddress((HMODULE)p, "bxGetInt16sRW"); \
*(void **) (&bex::__bxGetInt32s) = (void*)GetProcAddress((HMODULE)p, "bxGetInt32s"); \
*(void **) (&bex::__bxGetInt32sRO) = (void*)GetProcAddress((HMODULE)p, "bxGetInt32sRO"); \
*(void **) (&bex::__bxGetInt32sRW) = (void*)GetProcAddress((HMODULE)p, "bxGetInt32sRW"); \
*(void **) (&bex::__bxGetInt64s) = (void*)GetProcAddress((HMODULE)p, "bxGetInt64s"); \
*(void **) (&bex::__bxGetInt64sRO) = (void*)GetProcAddress((HMODULE)p, "bxGetInt64sRO"); \
*(void **) (&bex::__bxGetInt64sRW) = (void*)GetProcAddress((HMODULE)p, "bxGetInt64sRW"); \
*(void **) (&bex::__bxGetInt8s) = (void*)GetProcAddress((HMODULE)p, "bxGetInt8s"); \
*(void **) (&bex::__bxGetInt8sRO) = (void*)GetProcAddress((HMODULE)p, "bxGetInt8sRO"); \
*(void **) (&bex::__bxGetInt8sRW) = (void*)GetProcAddress((HMODULE)p, "bxGetInt8sRW"); \
*(void **) (&bex::__bxGetIr) = (void*)GetProcAddress((HMODULE)p, "bxGetIr"); \
*(void **) (&bex::__bxGetIrRO) = (void*)GetProcAddress((HMODULE)p, "bxGetIrRO"); \
*(void **) (&bex::__bxGetIrRW) = (void*)GetProcAddress((HMODULE)p, "bxGetIrRW"); \
*(void **) (&bex::__bxGetJc) = (void*)GetProcAddress((HMODULE)p, "bxGetJc"); \
*(void **) (&bex::__bxGetJcRO) = (void*)GetProcAddress((HMODULE)p, "bxGetJcRO"); \
*(void **) (&bex::__bxGetJcRW) = (void*)GetProcAddress((HMODULE)p, "bxGetJcRW"); \
*(void **) (&bex::__bxGetLogicals) = (void*)GetProcAddress((HMODULE)p, "bxGetLogicals"); \
*(void **) (&bex::__bxGetLogicalsRO) = (void*)GetProcAddress((HMODULE)p, "bxGetLogicalsRO"); \
*(void **) (&bex::__bxGetLogicalsRW) = (void*)GetProcAddress((HMODULE)p, "bxGetLogicalsRW"); \
*(void **) (&bex::__bxGetM) = (void*)GetProcAddress((HMODULE)p, "bxGetM"); \
*(void **) (&bex::__bxGetN) = (void*)GetProcAddress((HMODULE)p, "bxGetN"); \
*(void **) (&bex::__bxGetNnz) = (void*)GetProcAddress((HMODULE)p, "bxGetNnz"); \
*(void **) (&bex::__bxGetNumberOfDimensions) = (void*)GetProcAddress((HMODULE)p, "bxGetNumberOfDimensions"); \
*(void **) (&bex::__bxGetNumberOfElements) = (void*)GetProcAddress((HMODULE)p, "bxGetNumberOfElements"); \
*(void **) (&bex::__bxGetNumberOfFields) = (void*)GetProcAddress((HMODULE)p, "bxGetNumberOfFields"); \
*(void **) (&bex::__bxGetNzmax) = (void*)GetProcAddress((HMODULE)p, "bxGetNzmax"); \
*(void **) (&bex::__bxGetPr) = (void*)GetProcAddress((HMODULE)p, "bxGetPr"); \
*(void **) (&bex::__bxGetPrRO) = (void*)GetProcAddress((HMODULE)p, "bxGetPrRO"); \
*(void **) (&bex::__bxGetPrRW) = (void*)GetProcAddress((HMODULE)p, "bxGetPrRW"); \
*(void **) (&bex::__bxGetSingles) = (void*)GetProcAddress((HMODULE)p, "bxGetSingles"); \
*(void **) (&bex::__bxGetSinglesRO) = (void*)GetProcAddress((HMODULE)p, "bxGetSinglesRO"); \
*(void **) (&bex::__bxGetSinglesRW) = (void*)GetProcAddress((HMODULE)p, "bxGetSinglesRW"); \
*(void **) (&bex::__bxGetSparseComplexDoubles) = (void*)GetProcAddress((HMODULE)p, "bxGetSparseComplexDoubles"); \
*(void **) (&bex::__bxGetSparseComplexDoublesRO) = (void*)GetProcAddress((HMODULE)p, "bxGetSparseComplexDoublesRO"); \
*(void **) (&bex::__bxGetSparseComplexDoublesRW) = (void*)GetProcAddress((HMODULE)p, "bxGetSparseComplexDoublesRW"); \
*(void **) (&bex::__bxGetSparseComplexSingles) = (void*)GetProcAddress((HMODULE)p, "bxGetSparseComplexSingles"); \
*(void **) (&bex::__bxGetSparseComplexSinglesRO) = (void*)GetProcAddress((HMODULE)p, "bxGetSparseComplexSinglesRO"); \
*(void **) (&bex::__bxGetSparseComplexSinglesRW) = (void*)GetProcAddress((HMODULE)p, "bxGetSparseComplexSinglesRW"); \
*(void **) (&bex::__bxGetSparseDoubles) = (void*)GetProcAddress((HMODULE)p, "bxGetSparseDoubles"); \
*(void **) (&bex::__bxGetSparseDoublesRO) = (void*)GetProcAddress((HMODULE)p, "bxGetSparseDoublesRO"); \
*(void **) (&bex::__bxGetSparseDoublesRW) = (void*)GetProcAddress((HMODULE)p, "bxGetSparseDoublesRW"); \
*(void **) (&bex::__bxGetSparseLogicals) = (void*)GetProcAddress((HMODULE)p, "bxGetSparseLogicals"); \
*(void **) (&bex::__bxGetSparseLogicalsRO) = (void*)GetProcAddress((HMODULE)p, "bxGetSparseLogicalsRO"); \
*(void **) (&bex::__bxGetSparseLogicalsRW) = (void*)GetProcAddress((HMODULE)p, "bxGetSparseLogicalsRW"); \
*(void **) (&bex::__bxGetSparseSingles) = (void*)GetProcAddress((HMODULE)p, "bxGetSparseSingles"); \
*(void **) (&bex::__bxGetSparseSinglesRO) = (void*)GetProcAddress((HMODULE)p, "bxGetSparseSinglesRO"); \
*(void **) (&bex::__bxGetSparseSinglesRW) = (void*)GetProcAddress((HMODULE)p, "bxGetSparseSinglesRW"); \
*(void **) (&bex::__bxGetString) = (void*)GetProcAddress((HMODULE)p, "bxGetString"); \
*(void **) (&bex::__bxGetStringDataPr) = (void*)GetProcAddress((HMODULE)p, "bxGetStringDataPr"); \
*(void **) (&bex::__bxGetStringLen) = (void*)GetProcAddress((HMODULE)p, "bxGetStringLen"); \
*(void **) (&bex::__bxGetStringLength) = (void*)GetProcAddress((HMODULE)p, "bxGetStringLength"); \
*(void **) (&bex::__bxGetUInt16s) = (void*)GetProcAddress((HMODULE)p, "bxGetUInt16s"); \
*(void **) (&bex::__bxGetUInt16sRO) = (void*)GetProcAddress((HMODULE)p, "bxGetUInt16sRO"); \
*(void **) (&bex::__bxGetUInt16sRW) = (void*)GetProcAddress((HMODULE)p, "bxGetUInt16sRW"); \
*(void **) (&bex::__bxGetUInt32s) = (void*)GetProcAddress((HMODULE)p, "bxGetUInt32s"); \
*(void **) (&bex::__bxGetUInt32sRO) = (void*)GetProcAddress((HMODULE)p, "bxGetUInt32sRO"); \
*(void **) (&bex::__bxGetUInt32sRW) = (void*)GetProcAddress((HMODULE)p, "bxGetUInt32sRW"); \
*(void **) (&bex::__bxGetUInt64s) = (void*)GetProcAddress((HMODULE)p, "bxGetUInt64s"); \
*(void **) (&bex::__bxGetUInt64sRO) = (void*)GetProcAddress((HMODULE)p, "bxGetUInt64sRO"); \
*(void **) (&bex::__bxGetUInt64sRW) = (void*)GetProcAddress((HMODULE)p, "bxGetUInt64sRW"); \
*(void **) (&bex::__bxGetUInt8s) = (void*)GetProcAddress((HMODULE)p, "bxGetUInt8s"); \
*(void **) (&bex::__bxGetUInt8sRO) = (void*)GetProcAddress((HMODULE)p, "bxGetUInt8sRO"); \
*(void **) (&bex::__bxGetUInt8sRW) = (void*)GetProcAddress((HMODULE)p, "bxGetUInt8sRW"); \
*(void **) (&bex::__bxIsCell) = (void*)GetProcAddress((HMODULE)p, "bxIsCell"); \
*(void **) (&bex::__bxIsChar) = (void*)GetProcAddress((HMODULE)p, "bxIsChar"); \
*(void **) (&bex::__bxIsComplex) = (void*)GetProcAddress((HMODULE)p, "bxIsComplex"); \
*(void **) (&bex::__bxIsComplexDouble) = (void*)GetProcAddress((HMODULE)p, "bxIsComplexDouble"); \
*(void **) (&bex::__bxIsComplexSingle) = (void*)GetProcAddress((HMODULE)p, "bxIsComplexSingle"); \
*(void **) (&bex::__bxIsDouble) = (void*)GetProcAddress((HMODULE)p, "bxIsDouble"); \
*(void **) (&bex::__bxIsFunctionHandle) = (void*)GetProcAddress((HMODULE)p, "bxIsFunctionHandle"); \
*(void **) (&bex::__bxIsInt16) = (void*)GetProcAddress((HMODULE)p, "bxIsInt16"); \
*(void **) (&bex::__bxIsInt32) = (void*)GetProcAddress((HMODULE)p, "bxIsInt32"); \
*(void **) (&bex::__bxIsInt64) = (void*)GetProcAddress((HMODULE)p, "bxIsInt64"); \
*(void **) (&bex::__bxIsInt8) = (void*)GetProcAddress((HMODULE)p, "bxIsInt8"); \
*(void **) (&bex::__bxIsLogical) = (void*)GetProcAddress((HMODULE)p, "bxIsLogical"); \
*(void **) (&bex::__bxIsRealDouble) = (void*)GetProcAddress((HMODULE)p, "bxIsRealDouble"); \
*(void **) (&bex::__bxIsRealSingle) = (void*)GetProcAddress((HMODULE)p, "bxIsRealSingle"); \
*(void **) (&bex::__bxIsSingle) = (void*)GetProcAddress((HMODULE)p, "bxIsSingle"); \
*(void **) (&bex::__bxIsSparse) = (void*)GetProcAddress((HMODULE)p, "bxIsSparse"); \
*(void **) (&bex::__bxIsSparseComplexDouble) = (void*)GetProcAddress((HMODULE)p, "bxIsSparseComplexDouble"); \
*(void **) (&bex::__bxIsSparseComplexSingle) = (void*)GetProcAddress((HMODULE)p, "bxIsSparseComplexSingle"); \
*(void **) (&bex::__bxIsSparseLogical) = (void*)GetProcAddress((HMODULE)p, "bxIsSparseLogical"); \
*(void **) (&bex::__bxIsSparseRealDouble) = (void*)GetProcAddress((HMODULE)p, "bxIsSparseRealDouble"); \
*(void **) (&bex::__bxIsSparseRealSingle) = (void*)GetProcAddress((HMODULE)p, "bxIsSparseRealSingle"); \
*(void **) (&bex::__bxIsString) = (void*)GetProcAddress((HMODULE)p, "bxIsString"); \
*(void **) (&bex::__bxIsStruct) = (void*)GetProcAddress((HMODULE)p, "bxIsStruct"); \
*(void **) (&bex::__bxIsUInt16) = (void*)GetProcAddress((HMODULE)p, "bxIsUInt16"); \
*(void **) (&bex::__bxIsUInt32) = (void*)GetProcAddress((HMODULE)p, "bxIsUInt32"); \
*(void **) (&bex::__bxIsUInt64) = (void*)GetProcAddress((HMODULE)p, "bxIsUInt64"); \
*(void **) (&bex::__bxIsUInt8) = (void*)GetProcAddress((HMODULE)p, "bxIsUInt8"); \
*(void **) (&bex::__bxK2FQuery) = (void*)GetProcAddress((HMODULE)p, "bxK2FQuery"); \
*(void **) (&bex::__bxOverloadFunction) = (void*)GetProcAddress((HMODULE)p, "bxOverloadFunction"); \
*(void **) (&bex::__bxPrintf) = (void*)GetProcAddress((HMODULE)p, "bxPrintf"); \
*(void **) (&bex::__bxRegisterBinaryOperator) = (void*)GetProcAddress((HMODULE)p, "bxRegisterBinaryOperator"); \
*(void **) (&bex::__bxRegisterBinaryOperatorID) = (void*)GetProcAddress((HMODULE)p, "bxRegisterBinaryOperatorID"); \
*(void **) (&bex::__bxRegisterCStruct) = (void*)GetProcAddress((HMODULE)p, "bxRegisterCStruct"); \
*(void **) (&bex::__bxRegisterOperator) = (void*)GetProcAddress((HMODULE)p, "bxRegisterOperator"); \
*(void **) (&bex::__bxRegisterOperatorID) = (void*)GetProcAddress((HMODULE)p, "bxRegisterOperatorID"); \
*(void **) (&bex::__bxRegisterTernaryOperator) = (void*)GetProcAddress((HMODULE)p, "bxRegisterTernaryOperator"); \
*(void **) (&bex::__bxRegisterTernaryOperatorID) = (void*)GetProcAddress((HMODULE)p, "bxRegisterTernaryOperatorID"); \
*(void **) (&bex::__bxRegisterUnaryOperator) = (void*)GetProcAddress((HMODULE)p, "bxRegisterUnaryOperator"); \
*(void **) (&bex::__bxRegisterUnaryOperatorID) = (void*)GetProcAddress((HMODULE)p, "bxRegisterUnaryOperatorID"); \
*(void **) (&bex::__bxRemoveField) = (void*)GetProcAddress((HMODULE)p, "bxRemoveField"); \
*(void **) (&bex::__bxRenameField) = (void*)GetProcAddress((HMODULE)p, "bxRenameField"); \
*(void **) (&bex::__bxResize) = (void*)GetProcAddress((HMODULE)p, "bxResize"); \
*(void **) (&bex::__bxReturnOverloadFailure) = (void*)GetProcAddress((HMODULE)p, "bxReturnOverloadFailure"); \
*(void **) (&bex::__bxReturnOverloadFailureMsg) = (void*)GetProcAddress((HMODULE)p, "bxReturnOverloadFailureMsg"); \
*(void **) (&bex::__bxSetCell) = (void*)GetProcAddress((HMODULE)p, "bxSetCell"); \
*(void **) (&bex::__bxSetDimensions) = (void*)GetProcAddress((HMODULE)p, "bxSetDimensions"); \
*(void **) (&bex::__bxSetField) = (void*)GetProcAddress((HMODULE)p, "bxSetField"); \
*(void **) (&bex::__bxSetFieldByNumber) = (void*)GetProcAddress((HMODULE)p, "bxSetFieldByNumber"); \
*(void **) (&bex::__bxSetM) = (void*)GetProcAddress((HMODULE)p, "bxSetM"); \
*(void **) (&bex::__bxSetN) = (void*)GetProcAddress((HMODULE)p, "bxSetN"); \
*(void **) (&bex::__bxSetNzmax) = (void*)GetProcAddress((HMODULE)p, "bxSetNzmax"); \
*(void **) (&bex::__bxSetString) = (void*)GetProcAddress((HMODULE)p, "bxSetString"); \
*(void **) (&bex::__bxSetStringFromCStr) = (void*)GetProcAddress((HMODULE)p, "bxSetStringFromCStr"); \
*(void **) (&bex::__bxSparseFinalize) = (void*)GetProcAddress((HMODULE)p, "bxSparseFinalize"); \
*(void **) (&bex::__bxTypeCStr) = (void*)GetProcAddress((HMODULE)p, "bxTypeCStr"); \

#else
#include <dlfcn.h>
#define BALTAM_BEX_IMPORT_FCN_FROM(p) \
*(void **) (&bex::__bxAddCXXClass_impl) = dlsym(p, "bxAddCXXClass_impl"); \
*(void **) (&bex::__bxAddField) = dlsym(p, "bxAddField"); \
*(void **) (&bex::__bxAddFieldAt) = dlsym(p, "bxAddFieldAt"); \
*(void **) (&bex::__bxAsCStr) = dlsym(p, "bxAsCStr"); \
*(void **) (&bex::__bxAsInt) = dlsym(p, "bxAsInt"); \
*(void **) (&bex::__bxCalcSingleSubscript) = dlsym(p, "bxCalcSingleSubscript"); \
*(void **) (&bex::__bxCallBaltamatica) = dlsym(p, "bxCallBaltamatica"); \
*(void **) (&bex::__bxCallBaltamaticaF) = dlsym(p, "bxCallBaltamaticaF"); \
*(void **) (&bex::__bxCreateCellArray) = dlsym(p, "bxCreateCellArray"); \
*(void **) (&bex::__bxCreateCellMatrix) = dlsym(p, "bxCreateCellMatrix"); \
*(void **) (&bex::__bxCreateCharArray) = dlsym(p, "bxCreateCharArray"); \
*(void **) (&bex::__bxCreateCharMatrixFromStrings) = dlsym(p, "bxCreateCharMatrixFromStrings"); \
*(void **) (&bex::__bxCreateComplexDoubleScalar) = dlsym(p, "bxCreateComplexDoubleScalar"); \
*(void **) (&bex::__bxCreateComplexSingleScalar) = dlsym(p, "bxCreateComplexSingleScalar"); \
*(void **) (&bex::__bxCreateCStruct) = dlsym(p, "bxCreateCStruct"); \
*(void **) (&bex::__bxCreateDoubleMatrix) = dlsym(p, "bxCreateDoubleMatrix"); \
*(void **) (&bex::__bxCreateDoubleScalar) = dlsym(p, "bxCreateDoubleScalar"); \
*(void **) (&bex::__bxCreateExtObj_v) = dlsym(p, "bxCreateExtObj_v"); \
*(void **) (&bex::__bxCreateInt16Scalar) = dlsym(p, "bxCreateInt16Scalar"); \
*(void **) (&bex::__bxCreateInt32Scalar) = dlsym(p, "bxCreateInt32Scalar"); \
*(void **) (&bex::__bxCreateInt64Scalar) = dlsym(p, "bxCreateInt64Scalar"); \
*(void **) (&bex::__bxCreateInt8Scalar) = dlsym(p, "bxCreateInt8Scalar"); \
*(void **) (&bex::__bxCreateLogicalArray) = dlsym(p, "bxCreateLogicalArray"); \
*(void **) (&bex::__bxCreateLogicalMatrix) = dlsym(p, "bxCreateLogicalMatrix"); \
*(void **) (&bex::__bxCreateLogicalScalar) = dlsym(p, "bxCreateLogicalScalar"); \
*(void **) (&bex::__bxCreateNumericArray) = dlsym(p, "bxCreateNumericArray"); \
*(void **) (&bex::__bxCreateNumericMatrix) = dlsym(p, "bxCreateNumericMatrix"); \
*(void **) (&bex::__bxCreateSingleScalar) = dlsym(p, "bxCreateSingleScalar"); \
*(void **) (&bex::__bxCreateSparse) = dlsym(p, "bxCreateSparse"); \
*(void **) (&bex::__bxCreateSparseLogicalMatrix) = dlsym(p, "bxCreateSparseLogicalMatrix"); \
*(void **) (&bex::__bxCreateSparseNumericMatrix) = dlsym(p, "bxCreateSparseNumericMatrix"); \
*(void **) (&bex::__bxCreateString) = dlsym(p, "bxCreateString"); \
*(void **) (&bex::__bxCreateStringArray) = dlsym(p, "bxCreateStringArray"); \
*(void **) (&bex::__bxCreateStringMatrix) = dlsym(p, "bxCreateStringMatrix"); \
*(void **) (&bex::__bxCreateStringMatrixFromStrings) = dlsym(p, "bxCreateStringMatrixFromStrings"); \
*(void **) (&bex::__bxCreateStringObj) = dlsym(p, "bxCreateStringObj"); \
*(void **) (&bex::__bxCreateStringScalar) = dlsym(p, "bxCreateStringScalar"); \
*(void **) (&bex::__bxCreateStructArray) = dlsym(p, "bxCreateStructArray"); \
*(void **) (&bex::__bxCreateStructMatrix) = dlsym(p, "bxCreateStructMatrix"); \
*(void **) (&bex::__bxCreateUInt16Scalar) = dlsym(p, "bxCreateUInt16Scalar"); \
*(void **) (&bex::__bxCreateUInt32Scalar) = dlsym(p, "bxCreateUInt32Scalar"); \
*(void **) (&bex::__bxCreateUInt64Scalar) = dlsym(p, "bxCreateUInt64Scalar"); \
*(void **) (&bex::__bxCreateUInt8Scalar) = dlsym(p, "bxCreateUInt8Scalar"); \
*(void **) (&bex::__bxDestroyArray) = dlsym(p, "bxDestroyArray"); \
*(void **) (&bex::__bxDuplicateArray) = dlsym(p, "bxDuplicateArray"); \
*(void **) (&bex::__bxDuplicateArrayS) = dlsym(p, "bxDuplicateArrayS"); \
*(void **) (&bex::__bxErrMsgTxt) = dlsym(p, "bxErrMsgTxt"); \
*(void **) (&bex::__bxEvalString) = dlsym(p, "bxEvalString"); \
*(void **) (&bex::__bxF2KQuery) = dlsym(p, "bxF2KQuery"); \
*(void **) (&bex::__bxGetCell) = dlsym(p, "bxGetCell"); \
*(void **) (&bex::__bxGetCellRO) = dlsym(p, "bxGetCellRO"); \
*(void **) (&bex::__bxGetCellRW) = dlsym(p, "bxGetCellRW"); \
*(void **) (&bex::__bxGetChars) = dlsym(p, "bxGetChars"); \
*(void **) (&bex::__bxGetCharsRO) = dlsym(p, "bxGetCharsRO"); \
*(void **) (&bex::__bxGetCharsRW) = dlsym(p, "bxGetCharsRW"); \
*(void **) (&bex::__bxGetClassID) = dlsym(p, "bxGetClassID"); \
*(void **) (&bex::__bxGetComplexDoubles) = dlsym(p, "bxGetComplexDoubles"); \
*(void **) (&bex::__bxGetComplexDoublesRO) = dlsym(p, "bxGetComplexDoublesRO"); \
*(void **) (&bex::__bxGetComplexDoublesRW) = dlsym(p, "bxGetComplexDoublesRW"); \
*(void **) (&bex::__bxGetComplexSingles) = dlsym(p, "bxGetComplexSingles"); \
*(void **) (&bex::__bxGetComplexSinglesRO) = dlsym(p, "bxGetComplexSinglesRO"); \
*(void **) (&bex::__bxGetComplexSinglesRW) = dlsym(p, "bxGetComplexSinglesRW"); \
*(void **) (&bex::__bxGetCStruct) = dlsym(p, "bxGetCStruct"); \
*(void **) (&bex::__bxGetDimensions) = dlsym(p, "bxGetDimensions"); \
*(void **) (&bex::__bxGetDoubles) = dlsym(p, "bxGetDoubles"); \
*(void **) (&bex::__bxGetDoublesRO) = dlsym(p, "bxGetDoublesRO"); \
*(void **) (&bex::__bxGetDoublesRW) = dlsym(p, "bxGetDoublesRW"); \
*(void **) (&bex::__bxGetExtObj_impl) = dlsym(p, "bxGetExtObj_impl"); \
*(void **) (&bex::__bxGetField) = dlsym(p, "bxGetField"); \
*(void **) (&bex::__bxGetFieldByNumber) = dlsym(p, "bxGetFieldByNumber"); \
*(void **) (&bex::__bxGetFieldByNumberRO) = dlsym(p, "bxGetFieldByNumberRO"); \
*(void **) (&bex::__bxGetFieldByNumberRW) = dlsym(p, "bxGetFieldByNumberRW"); \
*(void **) (&bex::__bxGetFieldNameByNumber) = dlsym(p, "bxGetFieldNameByNumber"); \
*(void **) (&bex::__bxGetFieldNumber) = dlsym(p, "bxGetFieldNumber"); \
*(void **) (&bex::__bxGetFieldRO) = dlsym(p, "bxGetFieldRO"); \
*(void **) (&bex::__bxGetFieldRW) = dlsym(p, "bxGetFieldRW"); \
*(void **) (&bex::__bxGetFunctionHandleData) = dlsym(p, "bxGetFunctionHandleData"); \
*(void **) (&bex::__bxGetFunctionHandleType) = dlsym(p, "bxGetFunctionHandleType"); \
*(void **) (&bex::__bxGetInt16s) = dlsym(p, "bxGetInt16s"); \
*(void **) (&bex::__bxGetInt16sRO) = dlsym(p, "bxGetInt16sRO"); \
*(void **) (&bex::__bxGetInt16sRW) = dlsym(p, "bxGetInt16sRW"); \
*(void **) (&bex::__bxGetInt32s) = dlsym(p, "bxGetInt32s"); \
*(void **) (&bex::__bxGetInt32sRO) = dlsym(p, "bxGetInt32sRO"); \
*(void **) (&bex::__bxGetInt32sRW) = dlsym(p, "bxGetInt32sRW"); \
*(void **) (&bex::__bxGetInt64s) = dlsym(p, "bxGetInt64s"); \
*(void **) (&bex::__bxGetInt64sRO) = dlsym(p, "bxGetInt64sRO"); \
*(void **) (&bex::__bxGetInt64sRW) = dlsym(p, "bxGetInt64sRW"); \
*(void **) (&bex::__bxGetInt8s) = dlsym(p, "bxGetInt8s"); \
*(void **) (&bex::__bxGetInt8sRO) = dlsym(p, "bxGetInt8sRO"); \
*(void **) (&bex::__bxGetInt8sRW) = dlsym(p, "bxGetInt8sRW"); \
*(void **) (&bex::__bxGetIr) = dlsym(p, "bxGetIr"); \
*(void **) (&bex::__bxGetIrRO) = dlsym(p, "bxGetIrRO"); \
*(void **) (&bex::__bxGetIrRW) = dlsym(p, "bxGetIrRW"); \
*(void **) (&bex::__bxGetJc) = dlsym(p, "bxGetJc"); \
*(void **) (&bex::__bxGetJcRO) = dlsym(p, "bxGetJcRO"); \
*(void **) (&bex::__bxGetJcRW) = dlsym(p, "bxGetJcRW"); \
*(void **) (&bex::__bxGetLogicals) = dlsym(p, "bxGetLogicals"); \
*(void **) (&bex::__bxGetLogicalsRO) = dlsym(p, "bxGetLogicalsRO"); \
*(void **) (&bex::__bxGetLogicalsRW) = dlsym(p, "bxGetLogicalsRW"); \
*(void **) (&bex::__bxGetM) = dlsym(p, "bxGetM"); \
*(void **) (&bex::__bxGetN) = dlsym(p, "bxGetN"); \
*(void **) (&bex::__bxGetNnz) = dlsym(p, "bxGetNnz"); \
*(void **) (&bex::__bxGetNumberOfDimensions) = dlsym(p, "bxGetNumberOfDimensions"); \
*(void **) (&bex::__bxGetNumberOfElements) = dlsym(p, "bxGetNumberOfElements"); \
*(void **) (&bex::__bxGetNumberOfFields) = dlsym(p, "bxGetNumberOfFields"); \
*(void **) (&bex::__bxGetNzmax) = dlsym(p, "bxGetNzmax"); \
*(void **) (&bex::__bxGetPr) = dlsym(p, "bxGetPr"); \
*(void **) (&bex::__bxGetPrRO) = dlsym(p, "bxGetPrRO"); \
*(void **) (&bex::__bxGetPrRW) = dlsym(p, "bxGetPrRW"); \
*(void **) (&bex::__bxGetSingles) = dlsym(p, "bxGetSingles"); \
*(void **) (&bex::__bxGetSinglesRO) = dlsym(p, "bxGetSinglesRO"); \
*(void **) (&bex::__bxGetSinglesRW) = dlsym(p, "bxGetSinglesRW"); \
*(void **) (&bex::__bxGetSparseComplexDoubles) = dlsym(p, "bxGetSparseComplexDoubles"); \
*(void **) (&bex::__bxGetSparseComplexDoublesRO) = dlsym(p, "bxGetSparseComplexDoublesRO"); \
*(void **) (&bex::__bxGetSparseComplexDoublesRW) = dlsym(p, "bxGetSparseComplexDoublesRW"); \
*(void **) (&bex::__bxGetSparseComplexSingles) = dlsym(p, "bxGetSparseComplexSingles"); \
*(void **) (&bex::__bxGetSparseComplexSinglesRO) = dlsym(p, "bxGetSparseComplexSinglesRO"); \
*(void **) (&bex::__bxGetSparseComplexSinglesRW) = dlsym(p, "bxGetSparseComplexSinglesRW"); \
*(void **) (&bex::__bxGetSparseDoubles) = dlsym(p, "bxGetSparseDoubles"); \
*(void **) (&bex::__bxGetSparseDoublesRO) = dlsym(p, "bxGetSparseDoublesRO"); \
*(void **) (&bex::__bxGetSparseDoublesRW) = dlsym(p, "bxGetSparseDoublesRW"); \
*(void **) (&bex::__bxGetSparseLogicals) = dlsym(p, "bxGetSparseLogicals"); \
*(void **) (&bex::__bxGetSparseLogicalsRO) = dlsym(p, "bxGetSparseLogicalsRO"); \
*(void **) (&bex::__bxGetSparseLogicalsRW) = dlsym(p, "bxGetSparseLogicalsRW"); \
*(void **) (&bex::__bxGetSparseSingles) = dlsym(p, "bxGetSparseSingles"); \
*(void **) (&bex::__bxGetSparseSinglesRO) = dlsym(p, "bxGetSparseSinglesRO"); \
*(void **) (&bex::__bxGetSparseSinglesRW) = dlsym(p, "bxGetSparseSinglesRW"); \
*(void **) (&bex::__bxGetString) = dlsym(p, "bxGetString"); \
*(void **) (&bex::__bxGetStringDataPr) = dlsym(p, "bxGetStringDataPr"); \
*(void **) (&bex::__bxGetStringLen) = dlsym(p, "bxGetStringLen"); \
*(void **) (&bex::__bxGetStringLength) = dlsym(p, "bxGetStringLength"); \
*(void **) (&bex::__bxGetUInt16s) = dlsym(p, "bxGetUInt16s"); \
*(void **) (&bex::__bxGetUInt16sRO) = dlsym(p, "bxGetUInt16sRO"); \
*(void **) (&bex::__bxGetUInt16sRW) = dlsym(p, "bxGetUInt16sRW"); \
*(void **) (&bex::__bxGetUInt32s) = dlsym(p, "bxGetUInt32s"); \
*(void **) (&bex::__bxGetUInt32sRO) = dlsym(p, "bxGetUInt32sRO"); \
*(void **) (&bex::__bxGetUInt32sRW) = dlsym(p, "bxGetUInt32sRW"); \
*(void **) (&bex::__bxGetUInt64s) = dlsym(p, "bxGetUInt64s"); \
*(void **) (&bex::__bxGetUInt64sRO) = dlsym(p, "bxGetUInt64sRO"); \
*(void **) (&bex::__bxGetUInt64sRW) = dlsym(p, "bxGetUInt64sRW"); \
*(void **) (&bex::__bxGetUInt8s) = dlsym(p, "bxGetUInt8s"); \
*(void **) (&bex::__bxGetUInt8sRO) = dlsym(p, "bxGetUInt8sRO"); \
*(void **) (&bex::__bxGetUInt8sRW) = dlsym(p, "bxGetUInt8sRW"); \
*(void **) (&bex::__bxIsCell) = dlsym(p, "bxIsCell"); \
*(void **) (&bex::__bxIsChar) = dlsym(p, "bxIsChar"); \
*(void **) (&bex::__bxIsComplex) = dlsym(p, "bxIsComplex"); \
*(void **) (&bex::__bxIsComplexDouble) = dlsym(p, "bxIsComplexDouble"); \
*(void **) (&bex::__bxIsComplexSingle) = dlsym(p, "bxIsComplexSingle"); \
*(void **) (&bex::__bxIsDouble) = dlsym(p, "bxIsDouble"); \
*(void **) (&bex::__bxIsFunctionHandle) = dlsym(p, "bxIsFunctionHandle"); \
*(void **) (&bex::__bxIsInt16) = dlsym(p, "bxIsInt16"); \
*(void **) (&bex::__bxIsInt32) = dlsym(p, "bxIsInt32"); \
*(void **) (&bex::__bxIsInt64) = dlsym(p, "bxIsInt64"); \
*(void **) (&bex::__bxIsInt8) = dlsym(p, "bxIsInt8"); \
*(void **) (&bex::__bxIsLogical) = dlsym(p, "bxIsLogical"); \
*(void **) (&bex::__bxIsRealDouble) = dlsym(p, "bxIsRealDouble"); \
*(void **) (&bex::__bxIsRealSingle) = dlsym(p, "bxIsRealSingle"); \
*(void **) (&bex::__bxIsSingle) = dlsym(p, "bxIsSingle"); \
*(void **) (&bex::__bxIsSparse) = dlsym(p, "bxIsSparse"); \
*(void **) (&bex::__bxIsSparseComplexDouble) = dlsym(p, "bxIsSparseComplexDouble"); \
*(void **) (&bex::__bxIsSparseComplexSingle) = dlsym(p, "bxIsSparseComplexSingle"); \
*(void **) (&bex::__bxIsSparseLogical) = dlsym(p, "bxIsSparseLogical"); \
*(void **) (&bex::__bxIsSparseRealDouble) = dlsym(p, "bxIsSparseRealDouble"); \
*(void **) (&bex::__bxIsSparseRealSingle) = dlsym(p, "bxIsSparseRealSingle"); \
*(void **) (&bex::__bxIsString) = dlsym(p, "bxIsString"); \
*(void **) (&bex::__bxIsStruct) = dlsym(p, "bxIsStruct"); \
*(void **) (&bex::__bxIsUInt16) = dlsym(p, "bxIsUInt16"); \
*(void **) (&bex::__bxIsUInt32) = dlsym(p, "bxIsUInt32"); \
*(void **) (&bex::__bxIsUInt64) = dlsym(p, "bxIsUInt64"); \
*(void **) (&bex::__bxIsUInt8) = dlsym(p, "bxIsUInt8"); \
*(void **) (&bex::__bxK2FQuery) = dlsym(p, "bxK2FQuery"); \
*(void **) (&bex::__bxOverloadFunction) = dlsym(p, "bxOverloadFunction"); \
*(void **) (&bex::__bxPrintf) = dlsym(p, "bxPrintf"); \
*(void **) (&bex::__bxRegisterBinaryOperator) = dlsym(p, "bxRegisterBinaryOperator"); \
*(void **) (&bex::__bxRegisterBinaryOperatorID) = dlsym(p, "bxRegisterBinaryOperatorID"); \
*(void **) (&bex::__bxRegisterCStruct) = dlsym(p, "bxRegisterCStruct"); \
*(void **) (&bex::__bxRegisterOperator) = dlsym(p, "bxRegisterOperator"); \
*(void **) (&bex::__bxRegisterOperatorID) = dlsym(p, "bxRegisterOperatorID"); \
*(void **) (&bex::__bxRegisterTernaryOperator) = dlsym(p, "bxRegisterTernaryOperator"); \
*(void **) (&bex::__bxRegisterTernaryOperatorID) = dlsym(p, "bxRegisterTernaryOperatorID"); \
*(void **) (&bex::__bxRegisterUnaryOperator) = dlsym(p, "bxRegisterUnaryOperator"); \
*(void **) (&bex::__bxRegisterUnaryOperatorID) = dlsym(p, "bxRegisterUnaryOperatorID"); \
*(void **) (&bex::__bxRemoveField) = dlsym(p, "bxRemoveField"); \
*(void **) (&bex::__bxRenameField) = dlsym(p, "bxRenameField"); \
*(void **) (&bex::__bxResize) = dlsym(p, "bxResize"); \
*(void **) (&bex::__bxReturnOverloadFailure) = dlsym(p, "bxReturnOverloadFailure"); \
*(void **) (&bex::__bxReturnOverloadFailureMsg) = dlsym(p, "bxReturnOverloadFailureMsg"); \
*(void **) (&bex::__bxSetCell) = dlsym(p, "bxSetCell"); \
*(void **) (&bex::__bxSetDimensions) = dlsym(p, "bxSetDimensions"); \
*(void **) (&bex::__bxSetField) = dlsym(p, "bxSetField"); \
*(void **) (&bex::__bxSetFieldByNumber) = dlsym(p, "bxSetFieldByNumber"); \
*(void **) (&bex::__bxSetM) = dlsym(p, "bxSetM"); \
*(void **) (&bex::__bxSetN) = dlsym(p, "bxSetN"); \
*(void **) (&bex::__bxSetNzmax) = dlsym(p, "bxSetNzmax"); \
*(void **) (&bex::__bxSetString) = dlsym(p, "bxSetString"); \
*(void **) (&bex::__bxSetStringFromCStr) = dlsym(p, "bxSetStringFromCStr"); \
*(void **) (&bex::__bxSparseFinalize) = dlsym(p, "bxSparseFinalize"); \
*(void **) (&bex::__bxTypeCStr) = dlsym(p, "bxTypeCStr"); \

#endif

#define BALTAM_BEX_DEFINE_FCN_VARS \
namespace bex { \
void * bex_handle; \
decltype(&bxAddCXXClass_impl) __bxAddCXXClass_impl; \
decltype(&bxAddField) __bxAddField; \
decltype(&bxAddFieldAt) __bxAddFieldAt; \
decltype(&bxAsCStr) __bxAsCStr; \
decltype(&bxAsInt) __bxAsInt; \
decltype(&bxCalcSingleSubscript) __bxCalcSingleSubscript; \
decltype(&bxCallBaltamatica) __bxCallBaltamatica; \
decltype(&bxCallBaltamaticaF) __bxCallBaltamaticaF; \
decltype(&bxCreateCellArray) __bxCreateCellArray; \
decltype(&bxCreateCellMatrix) __bxCreateCellMatrix; \
decltype(&bxCreateCharArray) __bxCreateCharArray; \
decltype(&bxCreateCharMatrixFromStrings) __bxCreateCharMatrixFromStrings; \
decltype(&bxCreateComplexDoubleScalar) __bxCreateComplexDoubleScalar; \
decltype(&bxCreateComplexSingleScalar) __bxCreateComplexSingleScalar; \
decltype(&bxCreateCStruct) __bxCreateCStruct; \
decltype(&bxCreateDoubleMatrix) __bxCreateDoubleMatrix; \
decltype(&bxCreateDoubleScalar) __bxCreateDoubleScalar; \
decltype(&bxCreateExtObj_v) __bxCreateExtObj_v; \
decltype(&bxCreateInt16Scalar) __bxCreateInt16Scalar; \
decltype(&bxCreateInt32Scalar) __bxCreateInt32Scalar; \
decltype(&bxCreateInt64Scalar) __bxCreateInt64Scalar; \
decltype(&bxCreateInt8Scalar) __bxCreateInt8Scalar; \
decltype(&bxCreateLogicalArray) __bxCreateLogicalArray; \
decltype(&bxCreateLogicalMatrix) __bxCreateLogicalMatrix; \
decltype(&bxCreateLogicalScalar) __bxCreateLogicalScalar; \
decltype(&bxCreateNumericArray) __bxCreateNumericArray; \
decltype(&bxCreateNumericMatrix) __bxCreateNumericMatrix; \
decltype(&bxCreateSingleScalar) __bxCreateSingleScalar; \
decltype(&bxCreateSparse) __bxCreateSparse; \
decltype(&bxCreateSparseLogicalMatrix) __bxCreateSparseLogicalMatrix; \
decltype(&bxCreateSparseNumericMatrix) __bxCreateSparseNumericMatrix; \
decltype(&bxCreateString) __bxCreateString; \
decltype(&bxCreateStringArray) __bxCreateStringArray; \
decltype(&bxCreateStringMatrix) __bxCreateStringMatrix; \
decltype(&bxCreateStringMatrixFromStrings) __bxCreateStringMatrixFromStrings; \
decltype(&bxCreateStringObj) __bxCreateStringObj; \
decltype(&bxCreateStringScalar) __bxCreateStringScalar; \
decltype(&bxCreateStructArray) __bxCreateStructArray; \
decltype(&bxCreateStructMatrix) __bxCreateStructMatrix; \
decltype(&bxCreateUInt16Scalar) __bxCreateUInt16Scalar; \
decltype(&bxCreateUInt32Scalar) __bxCreateUInt32Scalar; \
decltype(&bxCreateUInt64Scalar) __bxCreateUInt64Scalar; \
decltype(&bxCreateUInt8Scalar) __bxCreateUInt8Scalar; \
decltype(&bxDestroyArray) __bxDestroyArray; \
decltype(&bxDuplicateArray) __bxDuplicateArray; \
decltype(&bxDuplicateArrayS) __bxDuplicateArrayS; \
decltype(&bxErrMsgTxt) __bxErrMsgTxt; \
decltype(&bxEvalString) __bxEvalString; \
decltype(&bxF2KQuery) __bxF2KQuery; \
decltype(&bxGetCell) __bxGetCell; \
decltype(&bxGetCellRO) __bxGetCellRO; \
decltype(&bxGetCellRW) __bxGetCellRW; \
decltype(&bxGetChars) __bxGetChars; \
decltype(&bxGetCharsRO) __bxGetCharsRO; \
decltype(&bxGetCharsRW) __bxGetCharsRW; \
decltype(&bxGetClassID) __bxGetClassID; \
decltype(&bxGetComplexDoubles) __bxGetComplexDoubles; \
decltype(&bxGetComplexDoublesRO) __bxGetComplexDoublesRO; \
decltype(&bxGetComplexDoublesRW) __bxGetComplexDoublesRW; \
decltype(&bxGetComplexSingles) __bxGetComplexSingles; \
decltype(&bxGetComplexSinglesRO) __bxGetComplexSinglesRO; \
decltype(&bxGetComplexSinglesRW) __bxGetComplexSinglesRW; \
decltype(&bxGetCStruct) __bxGetCStruct; \
decltype(&bxGetDimensions) __bxGetDimensions; \
decltype(&bxGetDoubles) __bxGetDoubles; \
decltype(&bxGetDoublesRO) __bxGetDoublesRO; \
decltype(&bxGetDoublesRW) __bxGetDoublesRW; \
decltype(&bxGetExtObj_impl) __bxGetExtObj_impl; \
decltype(&bxGetField) __bxGetField; \
decltype(&bxGetFieldByNumber) __bxGetFieldByNumber; \
decltype(&bxGetFieldByNumberRO) __bxGetFieldByNumberRO; \
decltype(&bxGetFieldByNumberRW) __bxGetFieldByNumberRW; \
decltype(&bxGetFieldNameByNumber) __bxGetFieldNameByNumber; \
decltype(&bxGetFieldNumber) __bxGetFieldNumber; \
decltype(&bxGetFieldRO) __bxGetFieldRO; \
decltype(&bxGetFieldRW) __bxGetFieldRW; \
decltype(&bxGetFunctionHandleData) __bxGetFunctionHandleData; \
decltype(&bxGetFunctionHandleType) __bxGetFunctionHandleType; \
decltype(&bxGetInt16s) __bxGetInt16s; \
decltype(&bxGetInt16sRO) __bxGetInt16sRO; \
decltype(&bxGetInt16sRW) __bxGetInt16sRW; \
decltype(&bxGetInt32s) __bxGetInt32s; \
decltype(&bxGetInt32sRO) __bxGetInt32sRO; \
decltype(&bxGetInt32sRW) __bxGetInt32sRW; \
decltype(&bxGetInt64s) __bxGetInt64s; \
decltype(&bxGetInt64sRO) __bxGetInt64sRO; \
decltype(&bxGetInt64sRW) __bxGetInt64sRW; \
decltype(&bxGetInt8s) __bxGetInt8s; \
decltype(&bxGetInt8sRO) __bxGetInt8sRO; \
decltype(&bxGetInt8sRW) __bxGetInt8sRW; \
decltype(&bxGetIr) __bxGetIr; \
decltype(&bxGetIrRO) __bxGetIrRO; \
decltype(&bxGetIrRW) __bxGetIrRW; \
decltype(&bxGetJc) __bxGetJc; \
decltype(&bxGetJcRO) __bxGetJcRO; \
decltype(&bxGetJcRW) __bxGetJcRW; \
decltype(&bxGetLogicals) __bxGetLogicals; \
decltype(&bxGetLogicalsRO) __bxGetLogicalsRO; \
decltype(&bxGetLogicalsRW) __bxGetLogicalsRW; \
decltype(&bxGetM) __bxGetM; \
decltype(&bxGetN) __bxGetN; \
decltype(&bxGetNnz) __bxGetNnz; \
decltype(&bxGetNumberOfDimensions) __bxGetNumberOfDimensions; \
decltype(&bxGetNumberOfElements) __bxGetNumberOfElements; \
decltype(&bxGetNumberOfFields) __bxGetNumberOfFields; \
decltype(&bxGetNzmax) __bxGetNzmax; \
decltype(&bxGetPr) __bxGetPr; \
decltype(&bxGetPrRO) __bxGetPrRO; \
decltype(&bxGetPrRW) __bxGetPrRW; \
decltype(&bxGetSingles) __bxGetSingles; \
decltype(&bxGetSinglesRO) __bxGetSinglesRO; \
decltype(&bxGetSinglesRW) __bxGetSinglesRW; \
decltype(&bxGetSparseComplexDoubles) __bxGetSparseComplexDoubles; \
decltype(&bxGetSparseComplexDoublesRO) __bxGetSparseComplexDoublesRO; \
decltype(&bxGetSparseComplexDoublesRW) __bxGetSparseComplexDoublesRW; \
decltype(&bxGetSparseComplexSingles) __bxGetSparseComplexSingles; \
decltype(&bxGetSparseComplexSinglesRO) __bxGetSparseComplexSinglesRO; \
decltype(&bxGetSparseComplexSinglesRW) __bxGetSparseComplexSinglesRW; \
decltype(&bxGetSparseDoubles) __bxGetSparseDoubles; \
decltype(&bxGetSparseDoublesRO) __bxGetSparseDoublesRO; \
decltype(&bxGetSparseDoublesRW) __bxGetSparseDoublesRW; \
decltype(&bxGetSparseLogicals) __bxGetSparseLogicals; \
decltype(&bxGetSparseLogicalsRO) __bxGetSparseLogicalsRO; \
decltype(&bxGetSparseLogicalsRW) __bxGetSparseLogicalsRW; \
decltype(&bxGetSparseSingles) __bxGetSparseSingles; \
decltype(&bxGetSparseSinglesRO) __bxGetSparseSinglesRO; \
decltype(&bxGetSparseSinglesRW) __bxGetSparseSinglesRW; \
decltype(&bxGetString) __bxGetString; \
decltype(&bxGetStringDataPr) __bxGetStringDataPr; \
decltype(&bxGetStringLen) __bxGetStringLen; \
decltype(&bxGetStringLength) __bxGetStringLength; \
decltype(&bxGetUInt16s) __bxGetUInt16s; \
decltype(&bxGetUInt16sRO) __bxGetUInt16sRO; \
decltype(&bxGetUInt16sRW) __bxGetUInt16sRW; \
decltype(&bxGetUInt32s) __bxGetUInt32s; \
decltype(&bxGetUInt32sRO) __bxGetUInt32sRO; \
decltype(&bxGetUInt32sRW) __bxGetUInt32sRW; \
decltype(&bxGetUInt64s) __bxGetUInt64s; \
decltype(&bxGetUInt64sRO) __bxGetUInt64sRO; \
decltype(&bxGetUInt64sRW) __bxGetUInt64sRW; \
decltype(&bxGetUInt8s) __bxGetUInt8s; \
decltype(&bxGetUInt8sRO) __bxGetUInt8sRO; \
decltype(&bxGetUInt8sRW) __bxGetUInt8sRW; \
decltype(&bxIsCell) __bxIsCell; \
decltype(&bxIsChar) __bxIsChar; \
decltype(&bxIsComplex) __bxIsComplex; \
decltype(&bxIsComplexDouble) __bxIsComplexDouble; \
decltype(&bxIsComplexSingle) __bxIsComplexSingle; \
decltype(&bxIsDouble) __bxIsDouble; \
decltype(&bxIsFunctionHandle) __bxIsFunctionHandle; \
decltype(&bxIsInt16) __bxIsInt16; \
decltype(&bxIsInt32) __bxIsInt32; \
decltype(&bxIsInt64) __bxIsInt64; \
decltype(&bxIsInt8) __bxIsInt8; \
decltype(&bxIsLogical) __bxIsLogical; \
decltype(&bxIsRealDouble) __bxIsRealDouble; \
decltype(&bxIsRealSingle) __bxIsRealSingle; \
decltype(&bxIsSingle) __bxIsSingle; \
decltype(&bxIsSparse) __bxIsSparse; \
decltype(&bxIsSparseComplexDouble) __bxIsSparseComplexDouble; \
decltype(&bxIsSparseComplexSingle) __bxIsSparseComplexSingle; \
decltype(&bxIsSparseLogical) __bxIsSparseLogical; \
decltype(&bxIsSparseRealDouble) __bxIsSparseRealDouble; \
decltype(&bxIsSparseRealSingle) __bxIsSparseRealSingle; \
decltype(&bxIsString) __bxIsString; \
decltype(&bxIsStruct) __bxIsStruct; \
decltype(&bxIsUInt16) __bxIsUInt16; \
decltype(&bxIsUInt32) __bxIsUInt32; \
decltype(&bxIsUInt64) __bxIsUInt64; \
decltype(&bxIsUInt8) __bxIsUInt8; \
decltype(&bxK2FQuery) __bxK2FQuery; \
decltype(&bxOverloadFunction) __bxOverloadFunction; \
decltype(&bxPrintf) __bxPrintf; \
decltype(&bxRegisterBinaryOperator) __bxRegisterBinaryOperator; \
decltype(&bxRegisterBinaryOperatorID) __bxRegisterBinaryOperatorID; \
decltype(&bxRegisterCStruct) __bxRegisterCStruct; \
decltype(&bxRegisterOperator) __bxRegisterOperator; \
decltype(&bxRegisterOperatorID) __bxRegisterOperatorID; \
decltype(&bxRegisterTernaryOperator) __bxRegisterTernaryOperator; \
decltype(&bxRegisterTernaryOperatorID) __bxRegisterTernaryOperatorID; \
decltype(&bxRegisterUnaryOperator) __bxRegisterUnaryOperator; \
decltype(&bxRegisterUnaryOperatorID) __bxRegisterUnaryOperatorID; \
decltype(&bxRemoveField) __bxRemoveField; \
decltype(&bxRenameField) __bxRenameField; \
decltype(&bxResize) __bxResize; \
decltype(&bxReturnOverloadFailure) __bxReturnOverloadFailure; \
decltype(&bxReturnOverloadFailureMsg) __bxReturnOverloadFailureMsg; \
decltype(&bxSetCell) __bxSetCell; \
decltype(&bxSetDimensions) __bxSetDimensions; \
decltype(&bxSetField) __bxSetField; \
decltype(&bxSetFieldByNumber) __bxSetFieldByNumber; \
decltype(&bxSetM) __bxSetM; \
decltype(&bxSetN) __bxSetN; \
decltype(&bxSetNzmax) __bxSetNzmax; \
decltype(&bxSetString) __bxSetString; \
decltype(&bxSetStringFromCStr) __bxSetStringFromCStr; \
decltype(&bxSparseFinalize) __bxSparseFinalize; \
decltype(&bxTypeCStr) __bxTypeCStr; \
}

#endif

