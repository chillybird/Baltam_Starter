#include "map_tools.hpp"

/**
 * @brief 判断bxArray实际C++类型
 * 
 * @param pdata 
 * @param value_type 
 * @return BMAP_TYPE 
 */
BMAP_TYPE judgeArrayType(const bxArray* pdata, const bool &value_type) {
  if (bxIsString(pdata)) {
    return BMAP_TYPE::STRING_TYPE;
  } else if (bxIsChar(pdata)) {
    return BMAP_TYPE::CHAR_TYPE;
  } else if (bxIsDouble(pdata)) {
    return BMAP_TYPE::DOUBLE_TYPE;
  } else if (bxIsCell(pdata) && value_type) {
    return BMAP_TYPE::CELL_TYPE;
  } else {
    // bxErrMsgTxt("不支持map数据类型.\n");
    return BMAP_TYPE::INVALID_TYPE;
  }
}

/**
 * @brief 将bxArray数组转换为字符串数组
 * 
 * @param pdata 
 * @param size 
 * @param dtype 
 * @return std::vector<std::string> 
 */
std::vector<std::string> converToStringArray(const bxArray* pdata, baSize size,  BMAP_TYPE dtype) {
  std::vector<std::string> result;
  result.reserve(size);
  
  switch(dtype) {
    case BMAP_TYPE::STRING_TYPE: {
      auto* key_data = bxGetStringPr(pdata);

      for (int i = 0; i < bxGetN(pdata); i++) {
        result.push_back(*(key_data++));
      }

      break;
    }
    case BMAP_TYPE::CHAR_TYPE: {
      auto* key_data = bxGetChars(pdata);
      for (int i = 0; i < bxGetN(pdata); i++) {
        result.emplace_back(1, *(key_data++));
      }

      break;
    }
    case BMAP_TYPE::DOUBLE_TYPE: {
      auto* key_data = bxGetDoubles(pdata);
      for (int i = 0; i < bxGetN(pdata); i++) {
        result.push_back(std::to_string(*(key_data++)));
      }

      break;
    }
    default:
      break;
  }

  return result;
}

bxArray* converTobxArray(std::string ss, BMAP_TYPE dtype) {
    bxArray* data;
    if (dtype == BMAP_TYPE::STRING_TYPE) {
        data = bxCreateString(ss.c_str());
    }
    if (dtype == BMAP_TYPE::CHAR_TYPE) {
        const char* ptr = ss.c_str();
        data = bxCreateCharMatrixFromStrings(1, &ptr);
    } 
    if (dtype == BMAP_TYPE::DOUBLE_TYPE) {
        data = bxCreateDoubleScalar(std::stod(ss));
    }

    return data;
}

bxArray* converTobxArray(const std::vector<std::string> ss, BMAP_TYPE dtype, baSize size) {
    if (dtype == BMAP_TYPE::STRING_TYPE) {
        bxArray* data;

        const char **strArray = new const char *[size];
        for (size_t i = 0; i < size; ++i) {
            strArray[i] = ss[i].c_str();
        }

        data = bxCreateStringMatrixFromStrings(1, size, strArray);

        return data;
    }

    if (dtype == BMAP_TYPE::CHAR_TYPE) {
        bxArray* data;

        const char **strArray = new const char *[size];
        for (size_t i = 0; i < size; ++i) {
            strArray[i] = ss[i].c_str();
        }
        data = bxCreateCharMatrixFromStrings(size, strArray);

        return data;
    }

    if (dtype == BMAP_TYPE::DOUBLE_TYPE) {
        bxArray* data = bxCreateDoubleMatrix(1, size, bxREAL);

        double* tmp = bxGetDoubles(data);
        for (size_t i = 0; i < size; ++i) {
            *tmp = std::stod(ss[i]);
            tmp++;
        }

        return data;
    }

    return nullptr;
}