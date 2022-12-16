#pragma once

#ifdef SAMPLE_TOOLS_EXPORTS
#   define SAMPLE_TOOLS_API __declspec(dllexport)
#else
#   define SAMPLE_TOOLS_API __declspec(dllimport)
#endif

#include <iostream>

class SAMPLE_TOOLS_API SampleTools
{
public:
    SampleTools();
};
