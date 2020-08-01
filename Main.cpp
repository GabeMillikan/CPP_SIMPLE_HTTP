#include "HTTP.hpp"

// an example program that HTTP GETs http://httpbin.org/post with some URL get arguments
int main()
{
    HTTP::Arguments Data;
    Data.Add("Name", "Gabe");
    Data.Add("MoreData", "Another string that needs url encoding {[!@#$%^&*()-=]}");

    std::string ServerResponse = HTTP::GET("httpbin.org", "/anything", Data.String);

    std::cout << ServerResponse << std::endl;

    std::cout << "\n\nDONE" << std::endl;
    while (1);
    return 0;
}
