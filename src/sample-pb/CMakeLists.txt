# The real minimum version will be checked by the qtbase project.
# 3.16 is the absolute minimum though.
cmake_minimum_required (VERSION 3.16)

project(sample-pb)
message("[sample-pb] -------- start")

message(STATUS "[sample-pb] PROJECT_SOURCE_DIR : ${PROJECT_SOURCE_DIR}")

# 引入protobuf库
find_package(Protobuf REQUIRED)
message(STATUS "[sample-pb] Protobuf_VERSION : ${Protobuf_VERSION}")
message(STATUS "[sample-pb] Protobuf_INCLUDE_DIRS : ${Protobuf_INCLUDE_DIRS}")
message(STATUS "[sample-pb] Protobuf_LIBRARIES : ${Protobuf_LIBRARIES}")

include_directories(${Protobuf_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

# ::由于PROTOBUF_GENERATE_CPP只能编译一个目录下的proto，尽量选择手动生成pb.cc，参考general-cpp.bat

set(sample_files
    pb_cpp/MsgType.pb.cc
    pb_cpp/Req.pb.cc
    pb_cpp/Res.pb.cc
    pb_cpp/common/Stock.pb.cc
    pb_cpp/notify/QuotePushTickNotify.pb.cc
    pb_cpp/req/HeartbeatReq.pb.cc
    pb_cpp/req/QuoteSubscribeTickReq.pb.cc
    pb_cpp/req/QuoteUnsubscribeTickReq.pb.cc
    pb_cpp/res/HeartbeatRes.pb.cc
    pb_cpp/res/QuoteSubscribeTickRes.pb.cc
    pb_cpp/res/QuoteUnsubscribeTickRes.pb.cc
    Sample.cpp
)

set(sample_headers
    pb_cpp/MsgType.pb.cc
    pb_cpp/Req.pb.cc
    pb_cpp/Res.pb.cc
    pb_cpp/common/Stock.pb.cc
    pb_cpp/notify/QuotePushTickNotify.pb.cc
    pb_cpp/req/HeartbeatReq.pb.cc
    pb_cpp/req/QuoteSubscribeTickReq.pb.cc
    pb_cpp/req/QuoteUnsubscribeTickReq.pb.cc
    pb_cpp/res/HeartbeatRes.pb.cc
    pb_cpp/res/QuoteSubscribeTickRes.pb.cc
    pb_cpp/res/QuoteUnsubscribeTickRes.pb.cc
    Sample.h
)

add_library(${PROJECT_NAME} STATIC
    ${sample_files}
    ${sample_headers}
)

target_link_libraries(${PROJECT_NAME}
    ${Protobuf_LIBRARIES}
)

target_include_directories(${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/pb_cpp
    PUBLIC ${Protobuf_INCLUDE_DIRS}
)

message("[sample-pb] -------- done")