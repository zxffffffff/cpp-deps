#include "SampleTools.h"
#include "zlib.h"

SampleTools::SampleTools()
{
    std::cout << "Hello SampleTools." << std::endl;

    std::cout << "zlib:" << zlibVersion() << std::endl;
}
