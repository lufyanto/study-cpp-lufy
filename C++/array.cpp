#include <iostream>
#include <array>
#include <string>

using namespace std;

int daftarBarang() {

    string daftarBarang[5] = {"Laptop", "Mouse" , "Keyboard", "Monitor", "Mousepad"};

    cout << "Barang Pertama => " << daftarBarang[0] << endl;

    // Mengubah Barang
    daftarBarang[1] = "Mouse Wireless";
    cout << "Mouse diganti menjadi => " << daftarBarang[1] << endl;

    return 0;
}

int daftarMahasiswa() {

    string mahasiswa[10] = {"Andi", "Budi", "Caca", "Dedi", "Eka", "Fajar", "Gita", "Hadi", "Indra", "Joko"};
    int angkaAbsen[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int IPK[10] = {3, 2, 3, 4, 3, 2, 3, 4, 3, 2};

    cout << "===== ABSEN MAHASISWA =====" << endl;
    cout << "Prodi : TEKNOLOGI INFORMASI" << endl;

    for (int i = 0; i < 10; i++) {

        cout << "Nama : " << mahasiswa[i] << " \t| Absen : " << angkaAbsen[i] << " \t| IPK : "<< IPK[i] << endl;

    }

    return 0;
}

int hahKosong() {
    string buah_buahan[] = {"Apel", "Jeruk", "Mangga", "Pisang", "Semangka"};

    for (int i = 0; i < 5; i++) {
        cout << buah_buahan[i] << endl;
    }
    return 0;
}

int nilaiUjian() {

    int nilaiUjian[] = {100, 100, 96, 100, 98, 100, 88, 90, 100, 100};
    string daftarNama[10] = {"Andi", "Budi", "Caca", "Dedi", "Eka", "Fajar", "Gita", "Hadi", "Indra", "Joko"};

    //Menghitung panjang array
    int panjangArray = sizeof(nilaiUjian) / sizeof(nilaiUjian[0]);
    int panjangArrayNama = sizeof(daftarNama) / sizeof(daftarNama[0]);

    cout << "Total byte array : " << sizeof(nilaiUjian) << endl;
    cout << "Panjang array : " << panjangArray << endl;

    cout << "Total byte array : " << sizeof(daftarNama) << endl;
    cout << "Panjang array : " << panjangArrayNama << endl;

    return 0;
}

int reservasiKapal() {

    int denahKapal[10][4] = {
        {1, 0, 0, 1},
        {0, 1, 1, 0},
        {1, 1, 0, 0},
        {0, 0, 1, 1},
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 1, 1, 0},
        {0, 0, 0, 1},
        {1, 0, 0, 0},
        {0, 1, 1, 1}
    };

    cout << "===== STATUS DENAH KAPAL =====" << endl;

    for (int baris = 0; baris < 10; baris++){
        for (int kolom = 0; kolom < 4; kolom++){
            if (denahKapal[baris][kolom] == 1) {
                cout << " [ X ] ";
                
            } else {
                cout << " [ O ] ";
            }
        }
        cout << endl;
    }

    return 0;
}

int main() {
    // daftarBarang();
    // daftarMahasiswa();
    // hahKosong();
    // nilaiUjian();
    reservasiKapal();
    return 0;
}