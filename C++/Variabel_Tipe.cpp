#include <iostream>
using namespace std;

int variabel(){

    int nomorKu = 82;
    cout << nomorKu << "\n";
    int bilanganA = 15;
    bilanganA = 25;
    cout << bilanganA << endl;


    // MACAM MACAM VARIABEL

    int angkaKu = 100; // Integer
    cout << angkaKu << endl;
    double desimalKu = 4.99; // Desimal
    cout << desimalKu << endl;
    char hurufKu = 'L'; // Character
    cout << hurufKu << endl;
    string namaKu = "Lufyanto"; // string/text
    cout << namaKu << endl;
    bool asal = false; // boolean
    cout << asal << endl;

    string name = "Lufyanto";
    int age = 19;
    double height = 161.5;

    cout << "halo perkenalkan nama saya " << name << " Umur saya " << age << " tahun " << " Tinggi badan saya " << height << " cm"<< endl;

    // DEKLARASI VARIABEL DENGAN TIPE YANG SAMA
    int x = 10, y = 11, z = 12;
    cout << x+y+z << endl;

    int a,b,c;
    a = b = c = 100;
    cout << a + b + c << endl;

    // const TIDAK BISA DITIMPA 
    /* Ini yang salah
    const int nilaiMahasiswaA = 87;
    nilaimahasiswaA = 90*/
    //yang benar
    const int nilaiMahasiswaA = 87;
    cout << nilaiMahasiswaA << endl;

    
    return 0;
}

int selamatDatangCamaba() {
    //Menginput data mahasiswa

    string namaMahasiswa = "Lufyanto Eka Fahrezi";
    string prodi = "Teknologi Informasi";
    string fakultas = "Fakultas Teknik dan Informatika (FTI)";
    string namaKampus = "Universitas Bina Sarana Informatika cabang Cikarang";
    int nimMahasiswa = 272608900;
    float nilaiTes = 92.3;

    //template
    cout << "Selamat datang " << namaMahasiswa << " di " << namaKampus << " Prodi " << prodi << " Fakultas " << fakultas << " Dengan NIM : " << nimMahasiswa << " dan Nilai Tes : " << nilaiTes << endl;

    return 0;
}

int nilaiInputKampus() {
    //var penampung

    string nama,prodi ;
    double IPK ;

    //input cin
    cout << "Masukkan Nama anda....." << endl;
    cin >> nama;
    cout << "Masukkan Prodi anda....." << endl;
    cin >> prodi;
    cout << "Masukkan IPK anda....." << endl;
    cin >> IPK;

    //bukti penampung
    cout << "========== DATA KAMPUS-KAMPUS AN ==========" << endl;
    cout << "NAMA\t\t:" << nama << endl;
    cout << "PRODI\t\t:" << prodi << endl;
    cout << "IPK\t\t:" << IPK << endl;

    return 0;
}



int main(){
    // variabel();
    // selamatDatangCamaba();
    nilaiInputKampus();
    return 0;
}

