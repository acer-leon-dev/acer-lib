#ifndef DACB816B_3F1E_4623_8BCD_B6EF2420EC5A
#define DACB816B_3F1E_4623_8BCD_B6EF2420EC5A

#include <string>
#include <vector>

namespace acer::strmanip
{
    std::string ljust(const std::string& str, size_t width, char fill = ' ');


    std::string rjust(const std::string& str, size_t width, char fill = ' ');


    std::string to_lower(std::string str);


    std::string to_upper(std::string str);

    //
    // @brief Returns true if any character in `chars` is located in `str`.
    //
    // Does the same as `str.find_first_of(chars, pos) != std::string::npos`.
    //
    // @param str   The string to search
    // @param chars The sequence of each character to search for
    // @return      Whether or not any of the characters in `chars` is located in `str`
    //
    bool is_any_of(std::string& str, std::string& chars, size_t pos = 0);

    //
    // @brief Returns true if `c` is located in `str`.
    //
    // Does the same as `str.find_first_of(chars, pos) != std::string::npos`.
    //
    // @param str   The string to search
    // @param c     The character to search for
    // @return      Whether or not `c` is located in `str`
    //
    bool is_any_of(std::string& str, char c, size_t pos = 0);


    template<typename InputIterator> bool is_any_in(InputIterator first, InputIterator last, std::string str);


    template<typename InputIterator>bool is_any_string_in_string(InputIterator first, InputIterator last, std::string str, bool case_sensitive = true);


    std::string stringtok(std::string::iterator& tokIt, const std::string& str, std::string delims);


    std::vector<std::string> string_to_tokens(std::string str, std::string delims);


    std::vector<std::string> string_to_tokens(std::string str, char delim);
}

#include "acerlib_strmanip.tpp"

#endif /* DACB816B_3F1E_4623_8BCD_B6EF2420EC5A */
