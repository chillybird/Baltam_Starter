#include "methods.hpp"

const char* map_entries_help = R"(
    map_entries 返回map的键值对列表 (struct数组)
)";

void map_entries(int nlhs, bxArray *plhs[], int nrhs, const bxArray *prhs[])
{
  bxPrintf("map entries.\n");
}
