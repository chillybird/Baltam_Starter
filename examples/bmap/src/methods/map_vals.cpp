#include "methods.hpp"

const char* map_vals_help = R"(
    map_vals 获取map_obj中的values

    map_vals(map_obj)，获取所有的values
    map_vals(map_obj, {key1, key2, ...})，获取特定key的values
)";

void map_vals(int nlhs, bxArray *plhs[], int nrhs, const bxArray *prhs[])
{
  if (nlhs > 1) {
    bxErrMsgTxt("输出参数过多");
    return ;
  }

  bMap* map = bxGetExtObj<bMap>(prhs[0]);
  if (nrhs != 1 || map->value_type == BMAP_TYPE::INVALID_TYPE) {
    bxErrMsgTxt("输入参数不正确: map_vals(map_obj)");
    return ;
  }

  std::vector<std::string> *m_keys = new std::vector<std::string>();
  m_keys->reserve(map->data.size());

  for (auto it = map->data.begin(); it != map->data.end(); ++it) {
      m_keys->push_back(it->second);
      // bxPrintf("%s\n", it->first.c_str());
  }

  bxArray* ret = converTobxArray(*m_keys, map->value_type, m_keys->size());

  plhs[0] = ret;
}
