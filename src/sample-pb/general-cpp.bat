::����PROTOBUF_GENERATE_CPPֻ�ܱ���һ��Ŀ¼�µ�proto������ѡ���ֶ�����pb.cc������Ϊ�ű�ʾ��

SET pbExe=%~dp0\..\..\install\protobuf\bin\protoc.exe
SET pbDir=%~dp0\pb
SET cppDir=.\pb_cpp

if exist %cppDir% ( rd /s /Q %cppDir% )
md %cppDir%

%pbExe% ^
--proto_path=%pbDir% ^
--cpp_out=%cppDir% ^
%pbDir%\common\*.proto ^
%pbDir%\notify\*.proto ^
%pbDir%\req\*.proto ^
%pbDir%\res\*.proto ^
%pbDir%\*.proto

PAUSE