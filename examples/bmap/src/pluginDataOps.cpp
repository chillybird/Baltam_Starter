#include "methods.hpp"
#include "pluginDataOps.hpp"

int get_bMap_size(const bxArray*);

void bMap_add(int nlhs, bxArray *plhs[], int nrhs, const bxArray *prhs[]) {
    if (nlhs > 1)
        bxErrMsgTxt("输出参数过多");
    if (nrhs != 2)
        bxErrMsgTxt("输入参数数量不正确");

    // bxPrintf("size %d + %d\n", get_bMap_size(prhs[0]), get_bMap_size(prhs[0]));

    bMap* map_a = bxGetExtObj<bMap>(prhs[0]);
    bMap* map_b = bxGetExtObj<bMap>(prhs[1]);

    if (map_a->value_type != map_b->value_type) {
        bxErrMsgTxt("字典A和字典B的values数据类型不一致.");
        return;
    }

    // 这里不能直接赋值map_a，会导致闪退
    bMap* ret = new bMap();
    ret->key_type = map_a->key_type;
    ret->value_type = map_a->value_type;
    for (const auto& m_pair : bxGetExtObj<bMap>(prhs[0])->data) {
        ret->data.insert(m_pair);
    }
    if (map_a->key_type != map_b->key_type) {
        // 如果key_type不相等，则设key_type为String
        ret->key_type = BMAP_TYPE::STRING_TYPE;
    }

    for (const auto& m_pair : bxGetExtObj<bMap>(prhs[1])->data) {
        if (ret->value_type == BMAP_TYPE::CELL_TYPE) {
            bxErrMsgTxt("元胞数组类型加运算未实现.");
            return;
        } else {
            // ret->data[v.first] = v.second;
            auto it = ret->data.find(m_pair.first);
            if (it != ret->data.end()) {
                // 覆盖value
                it->second = m_pair.second;
            } else {
                // 插入键值对
                ret->data.insert(m_pair);
            }
        }
    }
    
    plhs[0] = bxCreateExtObj(ret);
}

int get_bMap_size(const bxArray* pv) {
    return bxGetExtObj<bMap>(pv)->data.size();    // 获取外部C++对象指针
}