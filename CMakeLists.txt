# CMakeList.txt: cpp-deps 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

project ("cpp-deps")

# 将源代码添加到此项目的可执行文件。
add_executable (cpp-deps "src/main.cpp" "src/main.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET cpp-deps PROPERTY CXX_STANDARD 20)
endif()

# TODO: 如有需要，请添加测试并安装目标。
