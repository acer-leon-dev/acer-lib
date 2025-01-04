#ifndef BBF25B8A_FDED_447F_9EA6_BB9E2AC95D31
#define BBF25B8A_FDED_447F_9EA6_BB9E2AC95D31


#include "acerlib_pathmanip.h"
#include <type_traits>

void _join_paths_internal(char sep, std::string& _path);

template<std::convertible_to<std::string>... Args>
void _join_paths_internal(char sep, std::string& _path, std::string _next, Args... paths)
{
    if (!_path.empty()) {
        _path += sep;
    }
    _path += _next;
    _join_paths_internal(sep, _path, paths...);
}

template<std::convertible_to<std::string>... Args>
std::string acer::path::join_paths(char sep, Args... paths)
{
    std::string result;
    _join_paths_internal(sep, result, "", paths...);

    return fix_separators(result, sep);
}

template<std::convertible_to<std::string>... Args>
std::string acer::path::join_paths(Args... paths)
{
    return join_paths('/', paths...);
}


#endif /* BBF25B8A_FDED_447F_9EA6_BB9E2AC95D31 */
