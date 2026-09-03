#pragma once

namespace Core::Math {

    class MathEngine {
    public:
        //Menghitung faktorial secara rekursif
        static unsigned long long calculateFactorial(int n);

        //Memeriksa apakah suatu bilangan adalah prima
        static bool isPrime(int n);
    };
} // namespace Core::Math
