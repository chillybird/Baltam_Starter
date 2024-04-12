#include "methods.hpp"
#include "pluginDataOps.hpp"

int get_bv_size(const bxArray*);

void bv_add(int nlhs, bxArray *plhs[], int nrhs, const bxArray *prhs[]) {
    if (nlhs > 1)
        bxErrMsgTxt("输出参数过多");
    if (nrhs != 2)
        bxErrMsgTxt("输入参数数量不正确");

    int v_size = get_bv_size(prhs[0]) + get_bv_size(prhs[1]);
    bxPrintf("%d \n", v_size);
    bVector* ret = bxNewCXXObject<bVector>(); // 添加C++对象

    ret->data.reserve(v_size);
    for (auto &v : bxGetExtObj<bVector>(prhs[0])->data)
        ret->data.emplace_back(v);
    for (auto &v : bxGetExtObj<bVector>(prhs[1])->data)
        ret->data.emplace_back(v);

    plhs[0] = bxCreateExtObj(ret);   // 创建并托管外部C++对象
}

int get_bv_size(const bxArray* pv) {
    return bxGetExtObj<bVector>(pv)->data.size();    // 获取外部C++对象指针
}