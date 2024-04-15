#include "methods.hpp"

const char* map_get_help = R"(
    map_get 根据key获取map中对应的key

    map_get(map_obj, key)
)";

void map_get(int nlhs, bxArray *plhs[], int nrhs, const bxArray *prhs[])
{
  if (nlhs > 1) {
    bxErrMsgTxt("输出参数过多");
    return ;
  }

  bMap* map = bxGetExtObj<bMap>(prhs[0]);
  if (nrhs != 2 || map->key_type == BMAP_TYPE::INVALID_TYPE || map->key_type == BMAP_TYPE::INVALID_TYPE) {
    bxErrMsgTxt("输入参数不正确: map_get(map_obj, key)");
    return ;
  } 

  std::vector<std::string> s_keys = converToStringArray(prhs[1], bxGetN(prhs[1]), map->key_type);

  if (s_keys.size() > 1) {
    bxErrMsgTxt("不支持多key值.\n");
    return;
  } else {
    auto it = map->data.find(s_keys[0]);
    if (it == map->data.end()) {
      bxErrMsgTxt("找不到键.\n");
      return;
    } else {
      plhs[0] = converTobxArray(it->second, map->value_type);
    }
  }
}
