#include "methods.hpp"

const char* map_set_help = R"(
    map_set 设置map对应key的value

    map_set(map_obj, key, value) 当key存在时，修改value；当key不存在时，创建相应的键值对
)";

void map_set(int nlhs, bxArray *plhs[], int nrhs, const bxArray *prhs[])
{
  if (nlhs > 1) {
    bxErrMsgTxt("map_set()没有返回值");
    return ;
  }

  bMap* map = bxGetExtObj<bMap>(prhs[0]);
  if (nrhs != 3 || map->key_type == BMAP_TYPE::INVALID_TYPE || map->key_type == BMAP_TYPE::INVALID_TYPE) {
    bxErrMsgTxt("输入参数不正确: map_set(map_obj, key, value)");
    return ;
  }

  // 判断key和value的类型是否相同，不相同则将key_type和value_type标志为String类型
  if (judgeArrayType(prhs[1], false) != map->key_type)
    map->key_type = BMAP_TYPE::STRING_TYPE;
  if (judgeArrayType(prhs[2], true) != map->value_type)
    map->value_type = BMAP_TYPE::STRING_TYPE;

  std::vector<std::string> s_keys = converToStringArray(prhs[1], bxGetN(prhs[1]), map->key_type);
  std::vector<std::string> s_vals = converToStringArray(prhs[2], bxGetN(prhs[2]), map->value_type);

  if (s_keys.size() > 1) {
    bxErrMsgTxt("不支持多key值.\n");
    return;
  } else {
    auto it = map->data.find(s_keys[0]);
    if (it == map->data.end()) {
      // 插入
      map->data[s_keys[0]] = s_vals[0];
    } else {
      // 更新
      it->second = s_vals[0];
    }
  }
}
