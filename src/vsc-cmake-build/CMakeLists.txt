
message("-----------star-------------------------------")
project(SortMake)
#aux_source_directory(src SRC_SUB)
#aux_source_directory(. SRC_CUR)
#add_executable(sort ${SRC_SUB} ${SRC_CUR})
add_executable(sort ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)
#include_directories(include)

message("-----------end-------------------------------")
