#!/bin/bash
# ninja+clang 源码编译第三方库，参考 nost.js\vcbuild.bat 脚本实现
# 输出到 cpp-deps/build，安装到 cpp-deps/install
# 注意：设置 -DCMAKE_INSTALL_PREFIX 不能出现'\'需要替换为'/'


# [3] build exit [0,1]
function success
{
    echo "[3] build success!!!"
    exit 0
}
function error
{
    echo "[3] build error!!!"
    exit 1
}


# [0] init
echo "[0] build..."
generators="Ninja"
config=Debug
root_path=$(dirname $(readlink -f  "$0"))
deps_path=${root_path}/deps
build_path=${root_path}/build
install_path=${root_path}/install
echo root_path: ${root_path}
echo deps_path: ${deps_path}
echo build_path: ${build_path}
echo install_path: ${install_path}
if [ ! -d ${build_path} ]; then
    mkdir -p ${build_path}
fi
if [ ! -d ${install_path} ]; then
    mkdir -p ${install_path}
fi
cd ${root_path}


# [1-1] build zlib
echo "[1-1] build zlib..."
deps_zlib=${deps_path}/zlib
build_zlib=${build_path}/zlib
echo deps_zlib: ${deps_zlib}
echo build_zlib:  ${build_zlib}
if [ ! -d ${deps_zlib} ]; then
    error
fi
if [ ! -d ${build_zlib} ]; then
    mkdir -p ${build_zlib}
fi
cd ${build_zlib}
if [ $? -ne 0 ]; then
    error
fi
echo "[1-1] cmake ${deps_zlib} -G ${generators} -DCMAKE_INSTALL_PREFIX=${install_path}"
cmake ${deps_zlib} -G ${generators} -DCMAKE_INSTALL_PREFIX=${install_path}
echo "[1-1] cmake --build . --target install --config ${config}"
cmake --build . --target install --config ${config}


# [1-2] build protobuf
echo "[1-2] build protobuf..."
deps_protobuf=${deps_path}/protobuf
build_protobuf=${build_path}/protobuf
echo deps_protobuf: ${deps_protobuf}
echo build_protobuf:  ${build_protobuf}
if [ ! -d ${deps_protobuf} ]; then
    error
fi
if [ ! -d ${build_protobuf} ]; then
    mkdir -p ${build_protobuf}
fi
cd ${build_protobuf}
if [ $? -ne 0 ]; then
    error
fi
echo "[1-2] cmake ${deps_protobuf} -G ${generators} -DCMAKE_INSTALL_PREFIX=${install_path} -Dprotobuf_BUILD_TESTS=OFF -Dprotobuf_WITH_ZLIB=OFF"
cmake ${deps_protobuf} -G ${generators} -DCMAKE_INSTALL_PREFIX=${install_path} -Dprotobuf_BUILD_TESTS=OFF -Dprotobuf_WITH_ZLIB=OFF
echo "[1-2] cmake --build . --target install --config ${config}"
cmake --build . --target install --config ${config}


# [2] build src
echo "[2] build src..."
cd ${build_path}
echo "[2] cmake ${root_path} -G ${generators} -DCMAKE_INSTALL_PREFIX=${install_path}"
cmake ${root_path} -G ${generators} -DCMAKE_INSTALL_PREFIX=${install_path}
echo "[2] cmake --build . --target install --config ${config}"
cmake --build . --target install --config ${config}


success
