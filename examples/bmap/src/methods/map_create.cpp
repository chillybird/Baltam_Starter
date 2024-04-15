#include "methods.hpp"
#include <sstream>
#include <string>


const char* map_create_help = R"(
    map_create 创建一个 map
    keys: 类型为string, char或者double; 当keys中存在重复值时, 后者将对前者进行覆盖
    values: 类型为数组或者元胞数组
    M = map_create({key1, key2, ...}, {val1, val2, ...}) 根据提供的keys和values创建map
)";


void map_create(int nlhs, bxArray *plhs[], int nrhs, const bxArray *prhs[])
{
  // bxPrintf("map create.\n");

  if (nlhs > 1) {
    bxErrMsgTxt("输出参数过多");
    return ;
  }

  if (nrhs != 2) {
    bxErrMsgTxt("输入参数不正确： map_create({key1, key2, ...}, {val1, val2, ...})");
    return ;
  }

  if (bxGetM(prhs[0]) > 1 || bxGetM(prhs[1]) > 1) {
    bxErrMsgTxt("参数维度不正确, demension = (1, n)");
    return ;
  }

  if (bxGetN(prhs[0]) != bxGetN(prhs[1])) {
    bxErrMsgTxt("参数维度不正确, keys和values的维度必须相等.");
    return ;
  }

  bMap* ret = bxNewCXXObject<bMap>();

  baSize map_size = bxGetN(prhs[0]);
  ret->key_type = judgeArrayType(prhs[0], false);
  ret->value_type = judgeArrayType(prhs[1], true);

  std::vector<std::string> key_strings = converToStringArray(prhs[0], map_size, ret->key_type);
  
  if (ret->value_type == BMAP_TYPE::CELL_TYPE) {
    bxPrintf("values是元胞数组");
    bxErrMsgTxt("暂未实现.\n");
    return ;
  } else {
    std::vector<std::string> value_strings = converToStringArray(prhs[1], map_size, ret->value_type);

    for (int i = 0; i < map_size; i++) {
      ret->data[key_strings[i]] = value_strings[i];
    }
  }

  plhs[0] = bxCreateExtObj(ret);
}

