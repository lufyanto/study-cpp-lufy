#include "core/MathEngine.hpp"
#include <stdexcept>

namespace Core::Math {

    unsigned long long MathEngine::calculateFactorial(int n) {
        if (n < 0) {
            throw std::invalid_argument("Nilai n tidak boleh negatif !");
        }
        if (n == 0 || n == 1) return 1;

        unsigned long long result = 1;
        for (int i = 2; i <= n; ++i) {
            result *= i;
        }
        return result;
    }

    bool MathEngine::isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) return false;
        }
        return true;
    }
} // namespace Core::Math