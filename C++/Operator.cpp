#include <iostream>
using namespace std;


int operatorcpp(){
    // variabel
    int bilA = 10;
    int bilB = 15;

    // Operator Matematika
    cout << (bilA + bilB) << endl;
    cout << (bilA - bilB) << endl;
    cout << (bilA * bilB) << endl;
    cout << float((bilA / bilB)) << endl;
    cout << (bilA % bilB) << endl;

    // Operator Decrement
    int bilDec = 9;
    bilDec++;
    cout << bilDec << endl;
    bilDec--;
    cout << bilDec << endl;
    
    // Pembagian Double
    double bilanganA = 20;
    double bilanganB = 3;
    cout << bilanganA/bilanganB << endl;
    
    // Analogi Lift
    int orangLift = 1;
    
    // lantai 1 nambah
    orangLift++;
    // lantai 2 kurang 2
    orangLift--;
    orangLift--;
    // lantai 2 nambah 3
    orangLift++;
    orangLift++;
    orangLift++;
    // lantai 3 nambah 2 kurang 1;
    orangLift++;
    orangLift++;
    orangLift--;
    // berapakah total orangLift dilantai keempat?
    cout << "Orang lift dilantai keempat berjumlah => " << orangLift << endl;

    cout << "Operator Aljabar" << endl;

    int x = 8;

    x += 4;
    cout << x << endl;

    int y = 20;
    y -= 5;
    cout << y << endl;

    int uangSaatIni = 120000;
    uangSaatIni -= 75000;
    cout << "Sisa Uang =>   Rp." << uangSaatIni << endl;

    return 0;
}

int perbandingan(){
    int umur = 19;

    cout << (umur >= 20) << endl;
    cout << (umur <= 20) << endl;

    int passwdLenght = 8;

    cout << (passwdLenght >= 8) << endl;
    cout << (passwdLenght <= 5) << endl;
    


    return 0;
}




int main() {

    operatorcpp();
    perbandingan();
    return 0;
}
