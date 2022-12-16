#include "SamplePB.h"
#include "Req.pb.h"
#include "Res.pb.h"

SamplePB::SamplePB()
{
    std::cout << "Hello SamplePB." << std::endl;

    PBReq req;
    req.set_reqid("1111");
    req.set_reqtime(123456);

    auto raw = req.SerializeAsString();

    PBReq req2;
    req2.ParseFromString(raw);
    req2.PrintDebugString();
}
