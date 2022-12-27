# 废弃
- 第三方库编译依赖复杂，无法做到无感编译，需要借助包管理工具 vcpkg
- 改为 https://github.com/zxffffffff/cpp-deps-vcpkg

# cpp-deps
- 用最简单直观的方式引入常用的开源跨平台C++库，包括网络层、数据层、基础组件等。
- 使用cmake管理工程项目，做到跨平台开箱即用。
- Windows 需要安装 vs2022，Linux 需要安装 Ninja，可以修改脚本替换为任意开发环境。

# 目录说明
- src: 工程目录，各个sample代码
    - sample-pb: 自定义的pb库，依赖 protobuf
    - sample-tools: 各个三方工具库，依赖 zlib、libuv、curl
    - sample-datacenter: 自定义的数据中心库，依赖 sample-pb、sample-tools
    - sample-main: 可执行文件，依赖 sample-datacenter
- deps: 3rd工程目录，从 github 等开源平台获取
- build: 编译生成目录（deps & src）
- install: 编译安装目录（deps & src）
- build-win.bat: win端【一键build脚本】，已验证: win10
- build-unix.sh: unix端【一键build脚本】，未验证

# zlib-1.2.13
- 最流行的压缩算法库
- 来源: https://github.com/madler/zlib
- 已加入【一键build脚本】[1-1]

# protobuf-cpp-3.21.11
- google开源数据序列化库，广泛用于高性能数据传输
- 来源: https://developers.google.com/protocol-buffers
- 文档: https://github.com/protocolbuffers/protobuf/blob/main/cmake/README.md
- 已加入【一键build脚本】[1-2]
- 依赖zlib（可选）-Dprotobuf_WITH_ZLIB=ON -DZLIB_INCLUDE_DIR=%install_zlib2%/include -DZLIB_LIB=%install_zlib2%/lib
- 关闭test（可选）-Dprotobuf_BUILD_TESTS=OFF
- 静态链接问题（MSVC） -Dprotobuf_MSVC_STATIC_RUNTIME=OFF
- 静态链接问题（GCC） -DCMAKE_POSITION_INDEPENDENT_CODE=ON

# libuv-1.44.2
- node.js使用的异步I/O事件库，支持TCP、UDP socket
- 来源：https://github.com/libuv/libuv
- 已加入【一键build脚本】[1-3]

# curl-7.86.0
- 最流行的http网络库
- 来源：https://curl.se/
- 已加入【一键build脚本】[1-4]
- 依赖 openssl（需要单独安装，编译太复杂）-DCURL_USE_OPENSSL=ON
- 不编译exe文件（可选）-DBUILD_CURL_EXE=OFF
