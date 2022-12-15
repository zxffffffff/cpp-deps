# cpp-deps
 用最简单直观的方式引入常用的开源跨平台C++库，包括网络层、数据层、基础组件等。
 编译流程参考 Qt6 和 node.js，使用cmake管理

# 目录说明
src         各个sample代码
deps        3rd工程目录，从 github 等开源平台获取
build       【编译生成】3rd工程编译目录，包括 project、obj、Debug
install     【编译生成】3rd工程编译目录，包括 cmake、include、bin、lib
build-deps  各平台一键编译脚本，编译3rd工程

# zlib-1.2.13
来源 https://github.com/madler/zlib
win：无依赖，使用cmake编译即可

# protobuf-cpp-3.21.11
来源 https://developers.google.com/protocol-buffers
文档 https://github.com/protocolbuffers/protobuf/blob/main/cmake/README.md
win：依赖zlib（可选）、gtest（已内置），使用cmake编译即可，如需zlib注意设置参数path和其他配置，参考上述文档

