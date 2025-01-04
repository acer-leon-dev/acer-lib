#ifndef ACERLIB_PATHMANIP_H_
#define ACERLIB_PATHMANIP_H_

#include <string>
#include <concepts>

namespace acer::path
{
    bool is_directory(std::string path);
    
    std::string to_directory(std::string path, char sep = '/');
    
    std::string fix_separators(std::string path, char sep = '/');
    
    template<std::convertible_to<std::string>... Args>
    std::string join_paths(char sep, Args... paths);

    template<std::convertible_to<std::string>... Args>
    std::string join_paths(Args... paths);
    
    std::string parent_of(std::string dir, int depth = 1, char sep = '/');

    std::string parent_of(std::string dir, char sep);

    std::string name_of(std::string path, bool keep_extension, char sep = '/');

    char get_separator();

    std::string get_executable_path();
};

#include "acerlib_pathmanip.tpp"

#endif // ACERLIB_PATHMANIP_H_