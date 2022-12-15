# The real minimum version will be checked by the qtbase project.
# 3.16 is the absolute minimum though.
cmake_minimum_required (VERSION 3.16)

project ("sample-pb-exe")
message("[sample-pb-exe] -------- start")

message(STATUS "[sample-pb-exe] PROJECT_SOURCE_DIR : ${PROJECT_SOURCE_DIR}")

# 将源代码添加到此项目的可执行文件。
add_executable (${PROJECT_NAME}
    "main.cpp"
    "main.h"
)

target_link_libraries(${PROJECT_NAME}
    sample-pb
)

message("[sample-pb-exe] -------- done")