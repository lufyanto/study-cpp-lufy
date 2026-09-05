#include <iostream>
#include "core/TaskManager.hpp"

using namespace Core::System;

int main() {
    TaskManager manager;

    std::cout << "=== TASK MANAGEMENT ENGINE (C++17) ===\n\n";

    manager.addTask(1, "Belajar Matematika", Priority::HIGH);
    manager.addTask(2, "Belajar Bahasa Inggris", Priority::HIGH);
    manager.addTask(3, "Belajar PTIK", Priority::HIGH);
    manager.addTask(4, "Belajar Bahasa Pemrograman", Priority::MEDIUM);
    manager.addTask(5, "Rapat Organisasi", Priority::MEDIUM);
    manager.addTask(6, "Konten Tikotok", Priority::LOW);
    manager.addTask(7, "Olahraga santuy", Priority::LOW);
    manager.addTask(8, "Merangkum Materi BASIS DATA", Priority::MEDIUM);
    manager.addTask(9, "Main Efutboll", Priority::LOW);

    manager.displayAllTasks();

    std::cout << "\n--- PENCARIAN TASK ---\n";
    auto task = manager.getTaskById(8);
    if (task.has_value()) {
        std::cout << "MESSAGE >> Tugas ditemukan: " << task->title << "\n";
    }

    std::cout << "\n--- COMPLETE TASK ---\n";
    manager.completeTask(1);
    manager.displayAllTasks();

    return 0;

}