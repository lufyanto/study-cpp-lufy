#include <iostream>
#include "core/StudentManager.hpp"

using namespace std;
using namespace Core::Academic;

int main () {

    cout << "=====================================" << endl;
    cout << " STUDENT MANAGEMENT SYSTEM - C++17 STL" << endl;
    cout << "=====================================" << endl;

    StudentManager manager;

    manager.addStudent(2617001, "Lufyanto Eka Fahrezi", 3.90);
    manager.addStudent(2617002, "Muhammad Iskandar", 3.77);
    manager.addStudent(2617003, "Siti Rahmadani", 3.76);
    manager.addStudent(2617004, "Agus Rahmat Hedi", 3.55);
    manager.addStudent(2617005, "Raisa Rahma Aulia", 3.80);
    
    
    manager.addStudent(2617001, "Lufyanto Eka Fahrezi 2", 4.00);

    manager.displayAllStudents();

    cout << "\nRATA-RATA IPK SELURUH MAHASISWA\n" << manager.calculateAverageGPA() << endl;

    int searchId = 2617004;
    cout << "PENCARIAN MAHASISWA ID => " << searchId << "|" << endl;
    auto result = manager.getStudentById(searchId);

    if (result.has_value()) {
        cout << "-----> Status \t\t: DITEMUKAN" << endl;
        cout << "-----> Nama \t\t: " << result->name << endl;
        cout << "-----> IPK \t\t: " << result->gpa << endl;
    } else {
        cout << "MAHASISWA TIDAK DITEMUKAN" << endl;
    }

    return 0;

}