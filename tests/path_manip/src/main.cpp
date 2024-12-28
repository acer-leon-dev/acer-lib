#include "acerlib.h"
#include <iostream>
#include <string>

int main()
{
    std::string p = "root\\\\\\/dirA/dirB/\\\\\\dirC/\\\\file1\\\\";
    printf("p:                  %s\n", p.c_str());
    printf("p fixed:            %s\n", acer::path::fix_separators(p).c_str());
    printf("p as directory:     %s\n", acer::path::file_to_directory(p).c_str());
    printf("p parent dir:       %s\n", acer::path::parent_of(p).c_str());
    printf("executable dir:     %s\n", acer::path::get_executable_path().c_str());
    std::string d = "dirD//\\\\\\dirE////dirG//////\\\\\\\\\\\\\\file2.lol";
    printf("p + d:              %s\n", acer::path::join_paths({p, d}).c_str());
}