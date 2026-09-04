#pragma once
#include <string>
#include <vector>
#include <map>
#include <optional>

namespace Core::Academic {

    struct Student {
        int id;
        std::string name;
        double gpa;
    };

    class StudentManager {
        private:
            std::vector<Student> m_students;
            std::map<int, Student> m_studentMap;

        public:
            void addStudent(int id, const std::string& name, double gpa);
            std::optional<Student> getStudentById(int id) const;
            const std::vector<Student>& getAllStudents() const;
            double calculateAverageGPA() const;
            void displayAllStudents() const;
    };
} // namespace Core::Academic