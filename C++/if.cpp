#include <iostream>
using namespace std;

int ifstatetment(){

    int umur;
    string nama;

    cout << "==== DUKCAPIL BEKASI ====" << endl;
    cout << "Masukkan Nama Anda = " << endl ;
    getline(cin, nama);
    cout << "Masukkan Umur Anda = " << endl ;
    cin >> umur ;
    cout << endl;
    cout << endl;

    cout << "==== DUKCAPIL BEKASI ====" << endl;
    cout << "NAMA = " << nama << endl;
    cout << "UMUR = " << umur << endl;

    if (umur >=18){
        cout << "Anda sudah bisa membuat KTP" << endl;
        return 0;
    }
    return 0;
}

int elsestatetment(){

    string namaPelamar;
    int umurPelamar;
    int tinggiBadan;
    int nilaiIjazahSMA;

    cout << "++++++ JOB PORTAL PT. PTPTAN +++++" << endl;
    cout << "Nama :" << endl;
    getline(cin, namaPelamar);
    cout << "Umur :" << endl;
    cin >> umurPelamar;
    cout << "Tinggi Badan" << endl;
    cin >> tinggiBadan;
    cout << "Nilai US/Ijazah" << endl;
    cin >> nilaiIjazahSMA;
    
    cout << endl;
    cout << endl;
    
    cout << "++++++ JOB PORTAL PT. PTPTAN +++++" << endl;
    if (nilaiIjazahSMA >= 80) {
        cout << "Selamat Anda LULUS seleksi berkas" << endl;
        cout << "Tahap Berikutnya TEST TULIS" << endl;
    } else {
        cout << "Mohon Maaf anda TIDAK LULUS seleksi berkas" << endl;
        cout << "Silahkan berjuang di tempat lain" << endl;
    }




    return 0;
}

int ifnested(){


    cout << "---------- JOB PORTAL PT. PTPTPT ----------" << endl;
    string namaCalonPelamar;
    int nilaiIjazah;
    int tinggiBadanCalonPelamar;
    cout << "Masukkan Nama Anda" << endl;
    getline(cin, namaCalonPelamar);
    cout << "Masukkan Nilai Ijazah Anda" << endl;
    cin >> nilaiIjazah;
    cout << "Masukkan Tinggi Badan Anda" << endl;
    cin >> tinggiBadanCalonPelamar;
    
    if (nilaiIjazah >=87){
        cout << "---------- JOB PORTAL PT. PTPTPT ----------" << endl;
        cout << "NAMA = " << namaCalonPelamar << endl;
        cout << "NILAI IJAZAH = " << nilaiIjazah << endl;
        cout<<"=============================================" << endl;
        cout<<"Selamat anda LULUS"<< endl;
        
    } else if(tinggiBadanCalonPelamar >=165) {
        cout << "---------- JOB PORTAL PT. PTPTPT ----------" << endl;
        cout << "NAMA = " << namaCalonPelamar << endl;
        cout << "TINGGI BADAN = " << tinggiBadanCalonPelamar << endl;
        cout<<"=============================================" << endl;
        cout<<"Selamat anda LULUS"<< endl;
        
    } if (nilaiIjazah<88 && tinggiBadanCalonPelamar<165) {
        cout << "Mohon maaf anda gagal" << endl;
    }

    return 0;
}

int fakultasKampus(){

    cout << "========== UNIVERSITAS APA AJA ==========" << endl;
    cout << "Mau mencari fakultas apa =>" << endl;
    cout << "1. FAKULTAS TEKNIK DAN INFORMATIKA" << endl;
    cout << "2. FAKULTAS EKONOMI DAN BISNIS" << endl;
    cout << "3. FAKULTAS KOMUNIKASI DAN BAHASA" << endl;
    cout << "4. FAKULTAS HUKUM" << endl;
    int kode;
    cout << "Masukkan angka 1-4" << endl;
    cin >> kode;

    switch (kode){
        case 1:
        cout << "Teknologi Informasi - Sistem Informasi - Rekayasa Perangkat Lunak - Teknik Elektro - Teknik Industri" << endl;
        break;
        case 2:
        cout << "Manajemen - Akuntansi";
        break;
        case 3:
        cout << "Sastra Inggris - Ilmu Komunikasi";
        break;
        case 4:
        cout << "Hukum - Bisnis Internasional - Hukum Internasional" << endl;
        default:
        cout<< "Fakultas yang kamu cari tidak ada..." << endl;

    }





    return 0;
}

int main () {
    fakultasKampus();
    // ifnested();
    // elsestatetment();
    // ifstatetment();
    return 0;
}