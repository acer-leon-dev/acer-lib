#ifndef BAF36828_1B3D_475D_B177_885C8F5AE21E
#define BAF36828_1B3D_475D_B177_885C8F5AE21E

#include "acerlib_strmanip.h"
#include <algorithm>

template<typename InputIterator> bool acer::strmanip::is_any_in(InputIterator first, InputIterator last, std::string str)
{
    return std::any_of(
        first, 
        last, 
        [&](std::string s) {
            return str.find(s) != std::string::npos; 
        }
    );
}


template<typename InputIterator>bool acer::strmanip::is_any_string_in_string(InputIterator first, InputIterator last, std::string str, bool case_sensitive)
{
    if (!case_sensitive) {
        str = to_lower(str);
    }

    return std::any_of(
        first, 
        last, 
        [&](std::string s) {            
            s = to_lower(s);
            return str.find(s) != std::string::npos; 
        }
    );
}

#endif /* BAF36828_1B3D_475D_B177_885C8F5AE21E */
