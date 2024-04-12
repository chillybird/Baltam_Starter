#include "methods.hpp"

const char* bv_create_help = R"(
    bv_create 创建一个 vector

    V = bv_create(...) 创建一个 vector，元素为所有输入参数。
    V 中的元素是输入参数的复制。
)";

void bv_create(int nlhs, bxArray *plhs[], int nrhs, const bxArray *prhs[])
{
  // bxPrintf("bv_create method.\n");
  if (nlhs > 1){
      bxErrMsgTxt("输出参数过多");
      return;
  }

  bVector * ret = bxNewCXXObject<bVector>();
  for (int i = 0; i < nrhs; ++i){
    bxArray * elem = bxDuplicateArray(prhs[i]);
    ret->data.push_back(elem);
  }
  plhs[0] = bxCreateExtObj(ret);
}
