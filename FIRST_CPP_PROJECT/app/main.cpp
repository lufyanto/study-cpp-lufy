#include <iostream>
#include <exception>
#include "core/StringProcessor.hpp"
#include "core/MathEngine.hpp"

using namespace std;
using namespace Core::Utils;
using namespace Core::Math;

int main() {

    cout << "============================================" << endl;
    cout << "LATIHAN ADVANCE CPP GPP CMAKE MODERN (DAY 1)" << endl;
    cout << "============================================" << endl;

    try {
        //pengujian MathEngine
        int angka = 7;
        cout << "\n[MATH ENGINE TEST]" << endl;
        cout << "Faktorial dari " << angka << " = " << MathEngine::calculateFactorial(angka) << endl;
        cout << "Apakah " << angka << " Adalah bilangan prima? " << (MathEngine::isPrime(angka) ? "YA" : "TIDAK") << endl;
        
        //pengujian StringProcessor
        string teks = "Teknologi Informasi Modern";
        cout << "\n[STRING PROCESSOR TEST]" << endl;
        cout << "Teks asli: " << teks << endl;
        cout << "UPPERCASE: " << StringProcessor::toUpper(teks) << endl;
        cout << "REVERSE: " << StringProcessor::reverse(teks) << endl;

        
        

    } catch (const std::exception& e) {
        cerr << "\n[ERROR COOOYYYYY.....]: " << e.what() << endl;
        return 1;
    }

    cout << "\n[PROGRAM SELESAI]" << endl;



    cout << "Developed by: Lufyanto" << endl;
    return 0;
}