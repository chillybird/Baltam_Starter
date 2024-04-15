#ifndef __METHODS_H__
#define __METHODS_H__

#include "bex/bex.hpp"
#include "pluginDataTypes.hpp"
#include "pluginDataOps.hpp"
#include "map_tools.hpp"

/**
 * @brief 函数声明
 * 
 */

extern const char* map_create_help;
void map_create(int nlhs, bxArray *plhs[], int nrhs, const bxArray *prhs[]);

extern const char* map_size_help;
void map_size(int nlhs, bxArray *plhs[], int nrhs, const bxArray *prhs[]);

extern const char* map_keys_help;
void map_keys(int nlhs, bxArray *plhs[], int nrhs, const bxArray *prhs[]);

extern const char* map_vals_help;
void map_vals(int nlhs, bxArray *plhs[], int nrhs, const bxArray *prhs[]);

extern const char* map_entries_help;
void map_entries(int nlhs, bxArray *plhs[], int nrhs, const bxArray *prhs[]);

extern const char* map_get_help;
void map_get(int nlhs, bxArray *plhs[], int nrhs, const bxArray *prhs[]);

extern const char* map_set_help;
void map_set(int nlhs, bxArray *plhs[], int nrhs, const bxArray *prhs[]);

extern const char* map_remove_help;
void map_remove(int nlhs, bxArray *plhs[], int nrhs, const bxArray *prhs[]);

#endif 