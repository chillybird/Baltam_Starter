#ifndef __METHODS_H__
#define __METHODS_H__

#include "bex/bex.hpp"
#include "pluginDataTypes.hpp"
#include "pluginDataOps.hpp"


/**
 * @brief 函数声明
 * 
 */
extern const char* bv_create_help;
void bv_create(int nlhs, bxArray *plhs[], int nrhs, const bxArray *prhs[]);

extern const char* bv_size_help;
void bv_size(int nlhs, bxArray *plhs[], int nrhs, const bxArray *prhs[]);

extern const char* bv_show_help;
void bv_show(int nlhs, bxArray *plhs[], int nrhs, const bxArray *prhs[]);

#endif 