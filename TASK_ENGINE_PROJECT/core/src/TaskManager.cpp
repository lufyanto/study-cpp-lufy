#include "core/TaskManager.hpp"
#include <iostream>
#include <iomanip>

namespace Core::System {

    bool TaskManager::addTask(int id, std::string title, Priority priority){
        if (m_taskLookup.find(id) != m_taskLookup.end()) {
            std::cout << "Message >> ERROR : TASK ID " << id << "SUDAH ADA! \n";
            return false;
        }

        auto newTask = std::make_unique<Task>(id, std::move(title), priority);

        m_taskLookup[id] = newTask.get();

        m_tasks.push_back(std::move(newTask));

        std::cout << "Message << SUCCES! : Tasks Berhasil ditambahkan! \n";
        return true;
    }

    std::optional<Task> TaskManager::getTaskById(int id) const {
        auto it = m_taskLookup.find(id);
        if (it != m_taskLookup.end()) {
            return *(it->second);
        }
        return std::nullopt;
    }

    bool TaskManager::completeTask(int id) {
        auto it = m_taskLookup.find(id);
        if (it == m_taskLookup.end()){
            std::cout << "Message >> ERROR : Task ID  " << id << " TIDAK DITEMUKAN! \n";
            return false;
        }
        m_taskLookup.erase(it);

        for (auto vecIt = m_tasks.begin(); vecIt != m_tasks.end(); ++ vecIt) {
            if ((*vecIt)->id == id) {
                m_tasks.erase(vecIt);
                break;
            }
        }

        std::cout << "Message >> DONE : Task ID " << id << " Selesai dan dihapus dari memori.\n";
        return true;

    }

    void TaskManager::displayAllTasks() const {
        if (m_tasks.empty()){
            std::cout << "INFO << Antrean task kosong.\n";
            return;
        }

        std::cout << "\n======================================================\n";
        std::cout << std::left << std::setw(10) << "ID"
                  << std::setw(25) << "NAMA TASK"
                  << std::setw(15) << "PRIORITAS" << "\n";
        std::cout << "\n======================================================\n";

        for (const auto& taskPtr : m_tasks) {
            std::string prioStr = (taskPtr->priority == Priority::HIGH) ? "HIGH" :
                                  (taskPtr->priority == Priority::MEDIUM) ? "MEDIUM" : "LOW" ;

            std::cout << std::left << std::setw(10) << taskPtr->id
                      << std::setw(25) << taskPtr->title
                      << std::setw(15) << prioStr << "\n";


        }
        std::cout << "\n======================================================\n";
    }
} // namespace Core::System