#include "SampleTools.h"
#include "zlib.h"

SampleTools::SampleTools()
{
    std::cout << "Hello SampleTools." << std::endl;

    std::cout << "zlib version: " << zlibVersion() << std::endl;
}
