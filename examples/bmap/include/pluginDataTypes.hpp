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
#include <map>
#include <string>

using namespace baltam;

enum class BMAP_TYPE
{
    STRING_TYPE = 0,
    CHAR_TYPE,
    DOUBLE_TYPE,
    CELL_TYPE,
    INVALID_TYPE
};

const std::string bmap_types[] = {"String", "Char", "Double", "Cell"};


struct bMap : public extern_obj_base {
    BALTAM_LOCAL static int ID;

    std::map<std::string, std::string> data;
    std::map<std::string, bxArray*> cell_data;
    BMAP_TYPE key_type = BMAP_TYPE::INVALID_TYPE;
    BMAP_TYPE value_type = BMAP_TYPE::INVALID_TYPE;

    bMap() {};
    bMap(const bMap& other);
    ~bMap() override;

    extern_obj_base *dup() const override;
    // 可选：转化为字符串的实现
    std::string to_string() const override;
    // 可选：自定义类型名字
    std::string classname() const override;
    
};


#endif // !__PLUGIN_DATA_TYPES_H__

