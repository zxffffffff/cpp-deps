@ECHO OFF
:: 源码编译第三方库，参考 nost.js\vcbuild.bat 脚本实现
:: 输出到 cpp-deps/build，安装到 cpp-deps/install
:: 注意：设置 -DCMAKE_INSTALL_PREFIX 不能出现'\'需要替换为'/'


:: [0] init
echo "[0] build..."
set vs_version="Visual Studio 17 2022"
set root_path=%~dp0
set deps_path=%root_path%deps
set build_path=%root_path%build
set install_path=%root_path%install
set install_path2=%install_path:\=/%
echo vs_version:  %vs_version%
echo root_path: %root_path%
echo deps_path: %deps_path%
echo build_path:  %build_path%
echo install_path:  %install_path%
echo install_path2: %install_path2%
if not exist %build_path% mkdir %build_path%
if not exist %install_path% mkdir %install_path%
cd %root_path%


:: [1-1] build zlib
echo "[1-1] build zlib..."
set deps_zlib=%deps_path%\zlib
set build_zlib=%build_path%\zlib
set install_zlib=%install_path%\zlib
set install_zlib2=%install_path2%/zlib
echo deps_zlib: %deps_zlib%
echo build_zlib:  %build_zlib%
echo install_zlib:  %install_zlib%
echo install_zlib2: %install_zlib2%
if not exist %deps_zlib% goto error
if not exist %build_zlib% mkdir %build_zlib%
if not exist %install_zlib% mkdir %install_zlib%
cd %build_zlib%
if not %ERRORLEVEL% == 0 ( goto error )
echo "[1-1] cmake -G %vs_version% %deps_zlib% -DCMAKE_INSTALL_PREFIX=%install_zlib2%"
cmake -G %vs_version% %deps_zlib% -DCMAKE_INSTALL_PREFIX=%install_zlib2%
echo "[1-1] cmake --build . --target install --config Debug"
cmake --build . --target install --config Debug
echo "[1-1] cmake --build . --target install --config Release"
cmake --build . --target install --config Release

:: [1-2] build protobuf
echo "[1-2] build protobuf..."
set deps_protobuf=%deps_path%\protobuf
set build_protobuf=%build_path%\protobuf
set install_protobuf=%install_path%\protobuf
set install_protobuf2=%install_path2%/protobuf
echo deps_protobuf: %deps_protobuf%
echo build_protobuf:  %build_protobuf%
echo install_protobuf:  %install_protobuf%
echo install_protobuf2: %install_protobuf2%
if not exist %deps_protobuf% goto error
if not exist %build_protobuf% mkdir %build_protobuf%
if not exist %install_protobuf% mkdir %install_protobuf%
cd %build_protobuf%
if not %ERRORLEVEL% == 0 ( goto error )
echo "[1-2] cmake -G %vs_version% %deps_protobuf% -DCMAKE_INSTALL_PREFIX=%install_protobuf2% -Dprotobuf_WITH_ZLIB=ON -Dprotobuf_MSVC_STATIC_RUNTIME=OFF -DZLIB_INCLUDE_DIR=%install_zlib2%/include -DZLIB_LIB=%install_zlib2%/lib"
cmake -G %vs_version% %deps_protobuf% -DCMAKE_INSTALL_PREFIX=%install_protobuf2% -Dprotobuf_WITH_ZLIB=ON -Dprotobuf_MSVC_STATIC_RUNTIME=OFF -DZLIB_INCLUDE_DIR=%install_zlib2%/include -DZLIB_LIB=%install_zlib2%/lib
echo "[1-2] cmake --build . --target install --config Debug"
cmake --build . --target install --config Debug
echo "[1-2] cmake --build . --target install --config Release"
cmake --build . --target install --config Release


:: [2] build exit [0,1]
:success
echo "[2] build success!!!"
exit 0

:error
echo "[2] build error!!!"
exit 1
