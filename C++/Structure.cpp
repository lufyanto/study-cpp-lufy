#include <iostream>
#include <string>
using namespace std;

int strukturProduk() {

    struct Produk {
        int id;
        string nama;
        int harga;
    };

    Produk p1 = {67435, "Lenovo Thinkpad : X13 gen 1 | i5-10210u 16/256", 4500000};
    Produk p2 = {67436, "Lenovo Thinkpad : X13 gen 1 | i5-10210u 16/512", 5000000};

    cout << "---------- DATA PRODUK ----------" << endl;
    cout << "ID Produk \t:" << p1.id << endl;
    cout << "Nama Produk \t:" << p1.nama << endl;
    cout << "Harga Produk \t:" << p1.harga << endl;

    cout << "---------- DATA PRODUK ----------" << endl;
    cout << "ID Produk \t:" << p2.id << endl;
    cout << "Nama Produk \t:" << p2.nama << endl;
    cout << "Harga Produk \t:" << p2.harga << endl;
    return 0;
}

int pesanStatusPesanan() {
    
    enum statusPesanan {
        DISIAPKAN, // Nilai 0
        DIPROSES, // Nilai 1
        DIKIRIM, // Nilai 2
        MENUJU, // Nilai 3
        TIBA // Nilai 4
    };

    statusPesanan statusSaatIni =  DIKIRIM;

    cout << "---------- STATUS PESANAN ----------" << endl;
    cout << "STATUS : " << statusSaatIni << endl;

    switch (statusSaatIni) {
        case DISIAPKAN:
            cout << "Pesanan anda sedang disiapkan oleh penjual, Paket akan dikirimkan ke pickup terdekat." << endl;
            break;
        case DIPROSES:
            cout << "Pesanan anda sudah tiba di pickup terdekat, pesanan anda sedang proses penyortiran untuk dikirimkan ke sub-pickup." << endl;
            break;
        case DIKIRIM:
            cout << "Pesanan anda sedang dikirimkan ke sub-pickup terdekat, pesanan anda akan segera sampai." << endl;
            break;
        case MENUJU:
            cout << "Pesanan anda sedang menuju ke alamat tujuan, pesanan anda akan segera sampai." << endl;
            break;
        case TIBA:
            cout << "Pesanan anda sudah tiba di alamat tujuan, silahkan ambil pesanan anda." << endl;
            break;
    }

    return 0;
}

int mauMakan() {

    string makanan = "Mie Gacoan Level 8";
    string &refMakanan = makanan;

    cout << "Isi Variabel Awal => " << makanan << endl;
    cout << "Isi Alamat memori (RAM) => " << &makanan << endl;

    refMakanan = "Bubur Tambun";
    cout << "Isi Variabel Setelah diubah => " << makanan << endl;
    cout << "Isi Alamat memori (RAM) => " << &makanan << endl;
    return 0;
}

int perpustakaan() {

    string judulBuku = "1001 cara untuk mencintai Mashiro Kurata";
    string* ptr = &judulBuku;

    cout << "---------- PERPUSTAKAAN MORFONICA ----------" << endl;
    cout << "Judul Buku \t\t: " << judulBuku << endl;
    cout << "Alamat Memori (RAM) \t: " << ptr << endl;
    cout << "Isi via Pointer \t: " << *ptr << endl;

    *ptr = "JUDUL SKRIPSI : Analisa suara dari vokalis Mashiro Kurata tahun 2020 dengan 2025";
    cout << "Setelah diubah \t: " << judulBuku << endl;


    return 0;
}

int memoriManajemen() {

    int jumlahData;
    cout << "Masukkan jumlah data : ";
    cin >> jumlahData;

    int* dataArr = new int[jumlahData];

    for (int i = 0; i < jumlahData; i++) {
        dataArr[i] = (i + 1)* 20;
    }

    cout << "Data yang tersimpan: ";
    for (int i = 0; i < jumlahData; i++) {
        cout << dataArr[i] << "[ " << i << " ] ";
    }

    cout << endl;

    delete[] dataArr;
    dataArr = nullptr;

    return 0;
}




int main() {

    // strukturProduk();
    // pesanStatusPesanan();
    // mauMakan();
    // perpustakaan();
    memoriManajemen();


    return 0;
}