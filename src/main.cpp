#include "methods.hpp"

static const char* PLUGIN_NAME = "onePlugin";

/**
 * @brief 插件导出函数列表
 * 
 */
static bexfun_info_t flist[] = {
    {"bv_create", bv_create, bv_create_help},
    {"bv_size", bv_size, bv_size_help},
    {"bv_show", bv_show, bv_show_help},
    {"", nullptr, nullptr},
};

// 初始化外部库句柄
int bxPluginInitLib(void* hdl) { return 0; }


/**
 * @brief 初始化句柄
 * 1. 插件载入时的资源分配
 * 2. 添加用户自定义数据结构
 * 3. 实现运算符重载
 * 
 * @param nrhs 
 * @param prhs 
 * @return int 
 */
// 初始化句柄，用于插件载入时的资源分配，以及用户自定义数据结构的添加
int bxPluginInit(int nrhs, const bxArray* prhs[]) {
  // 添加自定义数据结构
  bxAddCXXClass<bVector>(PLUGIN_NAME);
  // 注册重载运算符
  bxRegisterOperator(PLUGIN_NAME, "+", bVector::ID, bv_add);
  return 0;
}


// 析构句柄
int bxPluginFini() { return 0; }


// 插件导出函数列表
bexfun_info_t* bxPluginFunctions() {
  return flist;
}

