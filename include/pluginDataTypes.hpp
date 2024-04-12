#ifndef __PLUGIN_DATA_TYPES_H__
#define __PLUGIN_DATA_TYPES_H__

/**
 * @file pluginDataTypes.hpp
 * @author your name (you@domain.com)
 * @brief 托管自定义数据结构
 * @version 0.1
 * @date 2024-04-12
 * 
 * 例子：struct Myvector:public baltam::extern_obj_base {};
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "bex/bex.hpp"

using namespace baltam;

struct bVector : public extern_obj_base {
    std::vector<bxArray*> data;
    BALTAM_LOCAL static int ID;
    extern_obj_base *dup() const override;
    ~bVector() override;
    // 可选：转化为字符串的实现
    std::string to_string() const override;
    // 可选：自定义类型名字
    std::string classname() const override;
};


#endif // !__PLUGIN_DATA_TYPES_H__

