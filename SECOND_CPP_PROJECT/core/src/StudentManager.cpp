#include "core/StudentManager.hpp"
#include <iostream>
#include <iomanip>

namespace Core::Academic {

    void StudentManager::addStudent(int id, const std::string& name, double gpa) {
        if (m_studentMap.find(id) != m_studentMap.end()) {
            std::cout << "[WARNING]: Mahasiswa dengan ID " << id << " sudah terdaftar!\n";
            return;
        }

        m_students.push_back({id, name, gpa});
        m_studentMap[id] = {id, name, gpa};
    }

    std::optional<Student> StudentManager::getStudentById(int id) const {
        auto it = m_studentMap.find(id);
        if (it != m_studentMap.end()) {
            return it->second;
        }
        return std::nullopt;
    }

    const std::vector<Student>& StudentManager::getAllStudents() const {
        return m_students;
    }

    double StudentManager::calculateAverageGPA() const {
        if (m_students.empty()) return 0.0;

        double totalGPA = 0.0;
        for (const auto& student : m_students) {
            totalGPA += student.gpa;
        }
        return totalGPA / m_students.size();
    }

    void StudentManager::displayAllStudents() const {
        std::cout << "\n==================================================\n";
        std::cout << std::left << std::setw(10) << "ID" 
                  << std::setw(25) << "Nama Mahasiswa" 
                  << std::setw(10) << "IPK (GPA)" << "\n";
        std::cout << "--------------------------------------------------\n";

        for (const auto& student : m_students) {
            std::cout << std::left << std::setw(10) << student.id 
                      << std::setw(25) << student.name 
                      << std::fixed << std::setprecision(2) << student.gpa << "\n";
        }
        std::cout << "==================================================\n";
    }

} // namespace Core::Academic