#include "acerlib_strmanip.h"
#include "acerlib_strmanip.tpp"


std::string acer::strmanip::ljust(const std::string& str, size_t width, char fill) {
    if (str.size() >= width) {
        return str;
    }
    else {
        return str + std::string(width - str.size(), fill);
    }
}


std::string acer::strmanip::rjust(const std::string& str, size_t width, char fill) {
    if (str.size() >= width) {
        return str;
    }
    return std::string(width - str.size(), fill) + str;
}


std::string acer::strmanip::to_lower(std::string str)
{
    for (char& c : str) { 
        c = std::tolower(c); 
    }
    return str;
}


std::string acer::strmanip::to_upper(std::string str)
{
    for (char& c : str) { 
        c = std::toupper(c); 
    }
    return str;
}


bool acer::strmanip::is_any_of(std::string& str, std::string& chars, size_t pos)
{
    return str.find_first_of(chars, pos) != std::string::npos;
}


bool acer::strmanip::is_any_of(std::string& str, char c, size_t pos)
{
    return str.find_first_of(c, pos) != std::string::npos;
}


std::string acer::strmanip::stringtok(std::string::iterator& tokIt, const std::string& str, std::string delims)
{
    // Eat delimeters
    for (; tokIt != str.end(); tokIt++) {
        if (!is_any_of(delims, *tokIt)) {
            break;
        }
    }

    std::string tok;
    for (; tokIt != str.end(); tokIt++) {
        // Get next character in token
        if (is_any_of(delims, *tokIt)) {
            return tok;
        }
        tok += *tokIt;
    }
    return tok;
}


std::vector<std::string> acer::strmanip::string_to_tokens(std::string str, std::string delims)
{
    std::vector<std::string> res;
    for (auto it = str.begin(); it != str.end();)
    {
        res.push_back(stringtok(it, str, delims));
    }
    return res;
}


std::vector<std::string> acer::strmanip::string_to_tokens(std::string str, char delim)
{
    return string_to_tokens(str, std::string{delim});
}