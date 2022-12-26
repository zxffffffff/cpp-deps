# The real minimum version will be checked by the qtbase project.
# 3.16 is the absolute minimum though.
cmake_minimum_required (VERSION 3.16)

project ("cpp-deps")
message("[cpp-deps] -------- start")

message(STATUS "[cpp-deps] PROJECT_SOURCE_DIR : ${PROJECT_SOURCE_DIR}")
message(STATUS "[cpp-deps] CMAKE_BUILD_TYPE : ${CMAKE_BUILD_TYPE}")

# 指定find_package搜索路径
list(APPEND CMAKE_PREFIX_PATH 
    "${CMAKE_SOURCE_DIR}/install/${CMAKE_BUILD_TYPE}"
)
message(STATUS "[cpp-deps] CMAKE_PREFIX_PATH : ${CMAKE_PREFIX_PATH}")

# include搜索目录
include_directories(${PROJECT_SOURCE_DIR}/src/sample-pb)
include_directories(${PROJECT_SOURCE_DIR}/src/sample-tools)
include_directories(${PROJECT_SOURCE_DIR}/src/sample-datacenter)
include_directories(${PROJECT_SOURCE_DIR}/src/sample-main)

# 将子目录添加到生成
add_subdirectory(src/sample-pb)
add_subdirectory(src/sample-tools)
add_subdirectory(src/sample-datacenter)
add_subdirectory(src/sample-main)

message("[cpp-deps] -------- done")