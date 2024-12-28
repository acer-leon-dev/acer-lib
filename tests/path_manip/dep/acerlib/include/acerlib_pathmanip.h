#ifndef ACERLIB_PATHMANIP_H_
#define ACERLIB_PATHMANIP_H_

#include <string>

namespace acer::path
{
    bool ends_with_separator(std::string path);
    
    std::string file_to_directory(std::string path, char sep = '/');
    
    std::string fix_separators(std::string path, char sep = '/');
        
    std::string join_paths(std::initializer_list<std::string> paths, char sep = '/');
    
    std::string parent_of(std::string dir, int depth = 1, char sep = '/');

    std::string parent_of(std::string dir, char sep);

    std::string get_executable_path(int len = 128);
};

#endif // ACERLIB_PATHMANIP_H_