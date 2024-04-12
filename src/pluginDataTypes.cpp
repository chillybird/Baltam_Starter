#include "pluginDataTypes.hpp"
#include <iostream>
#include <sstream>

int bVector::ID = 0;

extern_obj_base *bVector::dup() const {
    bVector *ret = new bVector(*this);
    for (size_t i = 0; i < this->data.size(); ++i){
        ret->data[i] = bxDuplicateArray(data[i]);
    }
    return ret;
}

bVector::~bVector(){
    for (auto &i : data){
        bxDestroyArray(i);
    }
}

std::string bVector::to_string() const {
    std::stringstream ss;
    for (size_t i = 0; i < data.size(); ++i){
        ss << '[' << i << "]    " << bxAsString(data[i]) << std::endl;
    }
    return ss.str();
}

std::string bVector::classname() const {
    return "bVector";
}