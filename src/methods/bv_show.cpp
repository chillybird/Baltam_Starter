#include "methods.hpp"

const char* bv_show_help = R"(
bv_show 在命令行中显示一个 vector 的简略信息。

    bv_show(V) 在命令行中以位置 -- 简略信息的方式来显示 V。
)";

void bv_show(int nlhs, bxArray *plhs[], int nrhs, const bxArray *prhs[])
{
    if (nrhs != 1 || nlhs > 0){
        bxErrMsgTxt("用法: N = bv_size(V)");
        return;
    }

    bVector *bv = bxGetExtObj<bVector>(prhs[0]);
    bxPrintf(bv->to_string().c_str());
}
