
message("-----------star-------------------------------")
# 查看编译器信息
message("---CMAKE_SYSTEM:${CMAKE_SYSTEM}")
message("---CMAKE_CXX_STANDARD:${CMAKE_CXX_STANDARD}")
message("---CMAKE_BUILD_TYPE:${CMAKE_BUILD_TYPE}")
message("---CMAKE_CONFIGURATION_TYPES:${CMAKE_CONFIGURATION_TYPES}")

message("---CMAKE_C_COMPILER:${CMAKE_C_COMPILER}")
message("---CMAKE_CXX_COMPILER:${CMAKE_CXX_COMPILER}")

# EXEC_PROGRAM
# CMAKE_UNITY_BUILD
# 设置开启元编译，于CMAKE_UNITY_BUILD_BATCH_SIZE配合使用，用于加速项目编译速度
# BUILD_USE_64BITS

project(SortMake)
#aux_source_directory(src SRC_SUB)
#aux_source_directory(. SRC_CUR)
#add_executable(sort ${SRC_SUB} ${SRC_CUR})
add_executable(sort ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)
#include_directories(include)
message("-----------end-------------------------------")
