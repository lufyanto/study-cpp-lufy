#include <iostream>
#include <string>
using namespace std;

int kelasKang() {

    class Motor {
    public:
        string merk;
        int tahun;
    };

    Motor motor1;
    motor1.merk = "Yamaap NMAX 250CC";
    motor1.tahun = 2026;

    Motor motor2;
    motor2.merk = "Yamaap Mio/X-Ride 125CC";
    motor2.tahun = 2027;

    Motor motor3;
    motor3.merk = "Yamaap Jupiter New Gen 150CC";
    motor3.tahun = 2027;

    cout << "===== SUB PLANNING PT. YAMAAP =====" << endl;
    cout << "Motor 1: " << motor1.merk << " (" << motor1.tahun << ")" << endl;
    cout << "Motor 2: " << motor2.merk << " (" << motor2.tahun << ")" << endl;
    cout << "Motor 3: " << motor3.merk << " (" << motor3.tahun << ")" << endl;

    return 0;
}

int rekeningBank () {
    class akunBank {
    public:
        int saldo = 0;

        void setorUang(int jumlah) {
            saldo += jumlah;
            cout << "Berhasil setor: Rp." << jumlah << endl;
        }

        void cekSaldo() {
            cout << "Saldo saat ini: Rp." << saldo << endl;
        }
    };

    akunBank akun1;
    akun1.setorUang(3000000);
    akun1.cekSaldo();

    return 0;
}

int main () {

    kelasKang();
    rekeningBank();

    return 0;
}