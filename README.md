# cpp-deps
- 用最简单直观的方式引入常用的开源跨平台C++库，包括网络层、数据层、基础组件等。
- 编译流程参考 Qt6 和 node.js，使用cmake管理

# 目录说明
- src: 工程目录，各个sample代码
- deps: 3rd工程目录，从 github 等开源平台获取
- build: 编译生成目录（3rd & src）
- install: 编译安装目录（3rd）
- build-win.bat: win端【一键build脚本】，已验证: win10
- build-unix.sh: unix端【一键build脚本】，已验证: ubuntu

# zlib-1.2.13
- 来源: https://github.com/madler/zlib
- 已加入【一键build脚本】[1-1]

# protobuf-cpp-3.21.11
- 来源: https://developers.google.com/protocol-buffers
- 文档: https://github.com/protocolbuffers/protobuf/blob/main/cmake/README.md
- 已加入【一键build脚本】[1-2]
- 依赖zlib（可选）-Dprotobuf_WITH_ZLIB=ON -Dprotobuf_MSVC_STATIC_RUNTIME=OFF -DZLIB_INCLUDE_DIR=%install_zlib2%/include -DZLIB_LIB=%install_zlib2%/lib
- 关闭test（可选）-Dprotobuf_BUILD_TESTS=OFF
