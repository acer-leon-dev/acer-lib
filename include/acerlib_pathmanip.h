#ifndef ACERLIB_PATHMANIP_H_
#define ACERLIB_PATHMANIP_H_

#include <string>

namespace acer::path
{
    bool ends_with_separator(const std::string& path);
    
    std::string file_to_directory(std::string path, char sep = '/');
    
    std::string fix_separators(std::string path, char sep = '/');
        
    std::string join_paths(std::initializer_list<const std::string> paths, char sep = '/');
    
    std::string parent_of(const std::string& dir, int depth = 1, char sep = '/');

    std::string parent_of(const std::string& dir, char sep);

    std::string get_binary_dir(int len = 128);
};

#endif // ACERLIB_PATHMANIP_H_