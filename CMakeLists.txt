cmake_minimum_required(VERSION 3.20)
project(onePlugin)

set(CMAKE_CXX_STANDARD 17)

if("${CMAKE_BUILD_TYPE}" STREQUAL "Debug") 
	set(CMAKE_CXX_FLAGS_RELEASE "-O0")
else()
	set(CMAKE_C_FLAGS_RELEASE "-O2 -s -DNDEBUG")
  set(CMAKE_CXX_FLAGS_RELEASE "-O2 -s -DNDEBUG")
	#add_definitions(-O2)
endif()

# 北太天元插件安装位置
set(BALTAM_PLUGIN_BASE_PATH "C:/baltamatica/plugins")
# 编写的插件安装路径
set(BALTAM_PLUGIN_PATH ${BALTAM_PLUGIN_BASE_PATH}/${PROJECT_NAME})

# 需要复制的配置文件
set(CONFIG_FILE ${PROJECT_SOURCE_DIR}/config.json)  # 添加需要复制的配置文件
# 添加一个额外的文件到复制列表中
set(FILES_TO_COPY ${CONFIG_FILE})

# 共享库和静态库输出目录
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
# baltam 动态库位置
set(LIBRARY_DIR ${PROJECT_SOURCE_DIR}/baltam_sdk/lib)

# 将所有 .cpp 文件列出来
file(GLOB_RECURSE CXX_SOURCE ${PROJECT_SOURCE_DIR}/src/*.cpp)
# 列出所有 .dll 动态链接库
file(GLOB LIBRARIES ${LIBRARY_DIR}/*.dll)

include_directories(
		include
		${PROJECT_SOURCE_DIR}/baltam_sdk/include
		${PROJECT_SOURCE_DIR}/baltam_sdk/include/bex
		${PROJECT_SOURCE_DIR}/baltam_sdk/include/ba_obj
)

add_library(${PROJECT_NAME} SHARED ${CXX_SOURCE})

set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME "main")
set_target_properties(${PROJECT_NAME} PROPERTIES PREFIX "")
target_link_libraries(${PROJECT_NAME} ${LIBRARIES})

# 拷贝config.json文件
file(COPY ${PROJECT_SOURCE_DIR}/config.json DESTINATION ${LIBRARY_OUTPUT_PATH})

# 清理 插件安装 目录
add_custom_command(
    TARGET ${PROJECT_NAME}
    PRE_BUILD
    COMMAND ${CMAKE_COMMAND} -E remove_directory ${BALTAM_PLUGIN_PATH}
    COMMENT "Cleaning baltam library directory"
)

# 创建插件目录
add_custom_command(
    TARGET ${PROJECT_NAME}
    PRE_BUILD
    COMMAND ${CMAKE_COMMAND} -E make_directory ${BALTAM_PLUGIN_PATH}
    COMMENT "Creating baltam library directory if not exists"
)

# 添加自定义命令将生成的动态库复制到baltam的plugins文件夹
add_custom_command(TARGET ${PROJECT_NAME}
	POST_BUILD
	COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:${PROJECT_NAME}> ${BALTAM_PLUGIN_PATH}
	COMMENT "Copying dynamic library to baltam directory"
)

# 添加一个额外的自定义命令来复制其他文件
foreach(file ${FILES_TO_COPY})
    add_custom_command(TARGET ${PROJECT_NAME}
        POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy ${file} ${BALTAM_PLUGIN_PATH}
        COMMENT "Copying ${file} to baltam directory"
    )
endforeach()




