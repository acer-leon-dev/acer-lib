#include "../../../src/acerlib.h"
#include <print>
#include <string>
using namespace acer::path;

int main()
{
    std::string p = R"(root\\\/dirA/dirB/\\\dirC/\\file1)";
    std::println("p:                  {}", p);
    std::println("p fixed:            {}", 
        fix_separators(p));
    std::println("p as directory:     {}", 
        to_directory(p));
    std::println("p parent dir:       {}", 
        parent_of(p));
    std::string exe = 
        fix_separators(
            get_executable_path(), '/');
    std::println("executable:         {}", exe);
    std::println("executable name     {}", name_of(exe));
    std::string d = R"(dirD//\\\dirE////dirG//////\\\\\\\/)";
    std::string e = R"(///////dirH\\\dirI\\\////\\//\\//hello.txt)";    
    std::println("d:                  {}", d);
    std::println("e:                  {}", e);
    std::println("p + d + e:          {}", 
        join_paths(p, d, e));
}