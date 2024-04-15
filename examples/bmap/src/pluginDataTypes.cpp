#include "pluginDataTypes.hpp"
#include <iostream>
#include <sstream>

int bMap::ID = 0;

// 拷贝构造函数的实现
bMap::bMap(const bMap& other) : extern_obj_base(other) {

    if (key_type == BMAP_TYPE::CELL_TYPE) { 
        for (const auto& m_pair : other.cell_data) {
            cell_data[m_pair.first] = bxDuplicateArray(m_pair.second);
        }
    } else {
        for (const auto& m_pair : other.data) {
            data[m_pair.first] = m_pair.second;
        }
    }

    // 复制 key_type 和 value_type 成员变量
    key_type = other.key_type;
    value_type = other.value_type;
}


extern_obj_base *bMap::dup() const {
    bMap* newMap = new bMap();

    if (key_type == BMAP_TYPE::CELL_TYPE) {
        newMap->data = this->data;
    } else {
        for (const auto& m_pair : this->cell_data) {
            auto m_value = bxDuplicateArray(m_pair.second);
            newMap->cell_data[m_pair.first] = m_value;
        }
    }

    return newMap;
}

bMap::~bMap(){
    if (key_type == BMAP_TYPE::CELL_TYPE) {
        for (const auto& m_pair : this->cell_data) {
            bxDestroyArray(m_pair.second);
        }
    }
}

std::string bMap::to_string() const {
    std::stringstream ss;
    ss << "具有 " << data.size() << " 个条目的字典 (" << bmap_types[static_cast<int>(key_type)] << "," <<  bmap_types[static_cast<int>(value_type)] << "):" << std::endl;

    if (key_type == BMAP_TYPE::CELL_TYPE) {
        for (const auto& m_pair : this->cell_data) {
            ss << m_pair.first << " ---> " << bxAsString(m_pair.second) << std::endl;
        }
        
    } else {
        for (const auto& m_pair : this->data) {
            ss << m_pair.first << " ---> " << m_pair.second << std::endl;
        }
    }
    
    return ss.str();
}

std::string bMap::classname() const {
    return "bMap";
}