#pragma once
#include <string>

namespace Core::Utils {
    class StringProcessor {
    public:
        //Mengubah string menjadi huruf kapital
        static std::string toUpper(const std::string& input);

        //Membalikkan urutan karakter string
        static std::string reverse(const std::string& input);
    };
} //namespace Core::Utils