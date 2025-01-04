#include "../../../src/acerlib.h"
#include <print>
#include <string>
using namespace acer::path;

int main()
{
        
    char sep = acer::path::get_separator();
    std::println("default directory separator on this platform = '{}'", sep);
    std::println();

    std::string a = R"(./////two\\\\three////four\\\\)";
    std::println("a = \"{}\"", a);
    std::println("a fixed:");
    std::println("    \"{}\"", fix_separators(a));
    std::println("a parent:");
    std::println("    \"{}\"", parent_of(a));
    std::println();

    std::string b = R"(root\\\/dirA/dirB/\\\dirC/\\file1.cpp)";
    std::println("b = \"{}\"", b);
    std::println("b fixed:");
    std::println("    \"{}\"", fix_separators(b));
    std::println("b as directory:");
    std::println("    \"{}\"", to_directory(b));
    std::println();

    std::string c = R"(dirD//\\\dirE////dirG//////\\\\\\\/)";
    std::string d = R"(///////dirH\\\dirI\\\////\\//\\//hello.txt)";    
    std::println("c = \"{}\"", c);
    std::println("d = \"{}\"", d);
    std::println("b + c + d:");
    std::println("    \"{}\"", join_paths(b, c, d));
    std::println();

    std::string exe = fix_separators(get_executable_path());
    std::println("program path:");
    std::println("    \"{}\"", exe);
    std::println("program name:");
    std::println("    \"{}\"", name_of(exe, false));
    std::println("program name (w/ extension):");
    std::println("    \"{}\"", name_of(exe, true));
    std::println();

}