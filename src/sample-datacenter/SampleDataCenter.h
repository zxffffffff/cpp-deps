#pragma once

#ifdef SAMPLE_DATACENTER_EXPORTS
#   define SAMPLE_DATACENTER_API __declspec(dllexport)
#else
#   define SAMPLE_DATACENTER_API __declspec(dllimport)
#endif

#include <iostream>

class SAMPLE_DATACENTER_API SampleDataCenter
{
public:
    SampleDataCenter();
};
