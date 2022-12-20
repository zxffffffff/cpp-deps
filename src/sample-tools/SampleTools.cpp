#include "SampleTools.h"
#include "zlib.h"
#include "uv.h"
#include "curl/curl.h"

SampleTools::SampleTools()
{
    std::cout << "Hello SampleTools." << std::endl;

    std::cout << "zlib version: " << zlibVersion() << std::endl;
    std::cout << "libuv version: " << uv_version_string() << std::endl;
    std::cout << "curl version: " << curl_version() << std::endl;
}
