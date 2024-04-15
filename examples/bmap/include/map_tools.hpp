#ifndef __MAP_TOOLS_H__
#define __MAP_TOOLS_H__

#include "pluginDataTypes.hpp"

BMAP_TYPE judgeArrayType(const bxArray* pdata, const bool &value_type);
std::vector<std::string> converToStringArray(const bxArray* pdata, baSize size,  BMAP_TYPE dtype);
bxArray* converTobxArray(std::string ss, BMAP_TYPE dtype);
bxArray* converTobxArray(const std::vector<std::string> ss, BMAP_TYPE dtype, baSize size);

#endif