#include "../../../src/acerlib.h"
#include <print>
#include <string>
using namespace acer::strmanip;

int main()
{
    // Left justified
    std::string sample1 = "Lorem ipsum dolor sit amet";
    std::println("strmanip::ljust(\"{}\", 40):", sample1);
    std::println("    TEXT {} TEXT", ljust(sample1, 40));
    std::println();

    // Right justified
    std::string sample2 = "consectetur adipiscing elit.";
    std::println("strmanip::rjust(\"{}\", 50):", sample2);
    std::println("    TEXT {} TEXT", rjust(sample2, 50));
    std::println();

    // lowercase
    std::string sample3 = "XxXxXxXxXxXxXxXxXxXxXxXxX";
    std::println("strmanip::to_lower(\"{}\"):", sample3);
    std::println("    {}", to_lower(sample3));
    std::println();
    
    // UPPERCASE
    std::string sample4 = "oOoOoOoOoOoOoOoOoOoOoOoOo";
    std::println("strmanip::to_upper(\"{}\"):", sample4);
    std::println("    {}", to_upper(sample4));
    std::println();

    // Tokens
    std::string sample5 = "   std::vector<int> myVector = { 1, 2, 3, 4, 5 };    ";
    std::println("strmanip::to_upper(\"{}\"):", sample5);
    int num = 0;
    for (auto tok : string_to_tokens(sample5, " ")) {
        println("    {}. \"{}\"", num, tok); num++;
    }
}