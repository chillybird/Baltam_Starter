#include "methods.hpp"
#include <sstream>
#include <string>


const char* map_size_help = R"(
    map_create 创建一个 map
    keys: 类型为string, char或者double; 当keys中存在重复值时, 后者将对前者进行覆盖
    values: 类型为数组或者元胞数组
    M = map_create({key1, key2, ...}, {val1, val2, ...}) 根据提供的keys和values创建map
)";


void map_size(int nlhs, bxArray *plhs[], int nrhs, const bxArray *prhs[]) {
    if (nlhs > 1) {
        bxErrMsgTxt("输出参数过多");
        return ;
    }

    bMap* map = bxGetExtObj<bMap>(prhs[0]);
    if (nrhs != 1 || map->key_type == BMAP_TYPE::INVALID_TYPE) {
        bxErrMsgTxt("输入参数不正确: map_keys(map_obj)");
        return ;
    }

    double m_size = map->data.size();
    
    plhs[0] = bxCreateDoubleScalar(m_size);
}