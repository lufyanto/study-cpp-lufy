#include "core/StringProcessor.hpp"
#include <algorithm>
#include <cctype>

namespace Core::Utils {

    std::string StringProcessor::toUpper(const std::string& input){
        std::string result = input;
        std::transform(result.begin(), result.end(), result.begin(),
            [](unsigned char c) { return std::toupper(c);});
        return result;
    }

    std::string StringProcessor::reverse(const std::string& input){
        std::string result = input;
        std::reverse(result.begin(), result.end());
        return result;
    }
} //namespace Core::Utils