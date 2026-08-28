#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int latihanString() {

    string sapaSaya = "Selamat Datang, Lufyanto";

    cout << sapaSaya << endl;

    string userDepan = "CIHUYID001";
    string userBelakang = "JOKOSUSILO";
    string announce = "Cuma Latihan cuy....";

    cout << userDepan+userBelakang << endl;
    cout << userDepan.append(userBelakang) << endl;

    string loremIpsum = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
    cout << loremIpsum << endl;
    cout << "Berapakah Panjang Kalimat diatas...." << endl;
    cout << "Panjangnya adalah ....... >>  " << loremIpsum.length() <<endl;
    cout << "Panjangnya adalah ....... >>  " << loremIpsum.size() << endl;

    string namaSaya = "Lufyanto Eka Fahrezi";
    cout << namaSaya[3] << endl;
    cout << namaSaya[namaSaya.length() - 1] << endl;

    //ngubah
    namaSaya[2] = 'P';
    cout << namaSaya << endl;

    // fungsi AT
    string namaSayaa = "Kasumi";
    cout << "Nama Awalah = " << namaSayaa << endl;

    cout << "huruf depan = " << namaSayaa.at(0) << endl;
    cout << "Kita Ubah = " << (namaSayaa.at(0) = 'Q') << endl;
    cout << namaSayaa << endl;

    // kata spesial

    string kasumiToyama = "Kasumi Toyama adalah gadis berkepribadian ceria dan penuh semangat yang selalu mengejar kilauan bintang \"kira-kira\" lewat musik dan kecintaannya pada gitar bersama band Poppin'Party.";
    cout << kasumiToyama << endl;

    // Kasus input
    string siapaNamamu;
    cout << "Masukkan nama anda " << endl;
    getline(cin, siapaNamamu);
    cout << "Nama Anda = " << siapaNamamu << endl;

    // math
    int dataBase[] = {84291, 739402, 12584, 950134, 482019, 61734, 829501, 310492, 574839, 194820};

    cout << "Nilai terbesar => " << *max_element(dataBase, dataBase + 10) << endl;
    cout << "Nilai terkecil => " << *min_element(dataBase, dataBase + 10) << endl;
    



    return 0;
}

int main() {
    latihanString();

    return 0;
}