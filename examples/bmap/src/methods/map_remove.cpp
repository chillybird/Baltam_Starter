#include "methods.hpp"

const char* map_remove_help = R"(
    map_remove 根据提供的key移除map中的相应键值对

    map_remove(map_obj, key)
    map_remove(map_obj, {key1, key2, ...})
)";

void map_remove(int nlhs, bxArray *plhs[], int nrhs, const bxArray *prhs[])
{
  bxPrintf("map remove.\n");
}
