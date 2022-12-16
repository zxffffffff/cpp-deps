@ECHO OFF
:: vs2022 源码编译第三方库，参考 nost.js\vcbuild.bat 脚本实现
:: 输出到 cpp-deps/build，安装到 cpp-deps/install
:: 注意：设置 -DCMAKE_INSTALL_PREFIX 不能出现'\'需要替换为'/'
:: 默认config="Debug"，可修改为"Release"


:: [0] init
echo "[0] build..."
set generators="Visual Studio 17 2022"
set config=Debug
set root_path=%~dp0
set deps_path=%root_path%deps
set build_path=%root_path%build
set install_path=%root_path%install
set install_path2=%install_path:\=/%
echo generators:  %generators%
echo root_path: %root_path%
echo deps_path: %deps_path%
echo build_path:  %build_path%
echo install_path:  %install_path%
echo install_path2: %install_path2%
if not exist %build_path% (
    mkdir %build_path%
)
if not exist %install_path% (
    mkdir %install_path%
)
cd %root_path%


:: [1-1] build zlib
echo "[1-1] build zlib..."
set deps_zlib=%deps_path%\zlib
set build_zlib=%build_path%\zlib
echo deps_zlib: %deps_zlib%
echo build_zlib:  %build_zlib%
if not exist %deps_zlib% (
    goto error
)
if not exist %build_zlib% (
    mkdir %build_zlib%
)
cd %build_zlib%
if not %ERRORLEVEL% == 0 (
    goto error
)
echo "[1-1] cmake %deps_zlib% -G %generators%  -DCMAKE_INSTALL_PREFIX=%install_path2%"
cmake %deps_zlib% -G %generators%  -DCMAKE_INSTALL_PREFIX=%install_path2%
echo "[1-1] cmake --build . --target install --config %config%"
cmake --build . --target install --config %config%


:: [1-2] build protobuf
echo "[1-2] build protobuf..."
set deps_protobuf=%deps_path%\protobuf
set build_protobuf=%build_path%\protobuf
echo deps_protobuf: %deps_protobuf%
echo build_protobuf:  %build_protobuf%
if not exist %deps_protobuf% (
    goto error
)
if not exist %build_protobuf% (
    mkdir %build_protobuf%
)
cd %build_protobuf%
if not %ERRORLEVEL% == 0 (
    goto error
)
echo "[1-2] cmake %deps_protobuf% -G %generators% -DCMAKE_INSTALL_PREFIX=%install_path2% -Dprotobuf_BUILD_TESTS=OFF -Dprotobuf_WITH_ZLIB=OFF -Dprotobuf_MSVC_STATIC_RUNTIME=OFF"
cmake %deps_protobuf% -G %generators% -DCMAKE_INSTALL_PREFIX=%install_path2% -Dprotobuf_BUILD_TESTS=OFF -Dprotobuf_WITH_ZLIB=OFF -Dprotobuf_MSVC_STATIC_RUNTIME=OFF
echo "[1-2] cmake --build . --target install --config %config%"
cmake --build . --target install --config %config%


:: [2] build src
echo "[2] build src..."
cd %build_path%
echo "[2] cmake %root_path% -G %generators% -DCMAKE_INSTALL_PREFIX=%install_path2%"
cmake %root_path% -G %generators% -DCMAKE_INSTALL_PREFIX=%install_path2%
echo "[2] cmake --build . --target install --config %config%"
cmake --build . --target install --config %config%


:: [3] build exit [0,1]
:success
echo "[3] build success!!!"
exit 0

:error
echo "[3] build error!!!"
exit 1
