#include "methods.hpp"

const char* map_keys_help = R"(
    map_keys 获取map的所有key

    map_keys(map_obj)
)";

void map_keys(int nlhs, bxArray *plhs[], int nrhs, const bxArray *prhs[])
{
  if (nlhs > 1) {
    bxErrMsgTxt("输出参数过多");
    return ;
  }

  bMap* map = bxGetExtObj<bMap>(prhs[0]);
  if (nrhs != 1 || map->key_type == BMAP_TYPE::INVALID_TYPE) {
    bxErrMsgTxt("输入参数不正确: map_keys(map_obj)");
    return ;
  }

  std::vector<std::string> *m_keys = new std::vector<std::string>();
  m_keys->reserve(map->data.size());

  for (auto it = map->data.begin(); it != map->data.end(); ++it) {
      m_keys->push_back(it->first);
      // bxPrintf("%s\n", it->first.c_str());
  }

  bxArray* ret = converTobxArray(*m_keys, map->key_type, m_keys->size());

  plhs[0] = ret;
}
