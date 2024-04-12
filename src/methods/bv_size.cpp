#include "methods.hpp"


const char* bv_size_help = R"(
bv_size 获取一个 vector 的元素个数

    N = bv_size(V) 获取 V 的元素数量，返回一个整数。
)";
void bv_size(int nlhs, bxArray *plhs[], int nrhs, const bxArray *prhs[])
{
  // bxPrintf("bv_size method.\n");
  if (nlhs > 1 || nrhs != 1){
    bxErrMsgTxt("用法: N = bv_size(V)");
    return;
  }

  bVector *bv = bxGetExtObj<bVector>(prhs[0]);
  if (bv == nullptr)
    return;

  plhs[0] = bxCreateDoubleMatrix(1, 1, bxREAL);
  double *ptr = bxGetDoubles(plhs[0]);

  *ptr = static_cast<double>(bv->data.size());
}
