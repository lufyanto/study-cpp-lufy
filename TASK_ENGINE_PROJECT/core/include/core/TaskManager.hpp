#ifndef TASK_MANAGER_HPP
#define TASK_MANAGER_HPP

#include <string>
#include <vector>
#include <map>
#include <memory>
#include <optional>

namespace Core::System {

    enum class Priority { LOW, MEDIUM, HIGH};

    struct Task {
        int id;
        std::string title;
        Priority priority;

        Task(int t_id, std::string t_title, Priority t_priority)
            : id(t_id), title(std::move(t_title)), priority(t_priority) {}
    };

    class TaskManager {
        private:
            std::vector<std::unique_ptr<Task>> m_tasks;

            std::map<int, Task*> m_taskLookup;

        public:
         TaskManager() = default;
         ~TaskManager() = default;

         TaskManager(const TaskManager&) = delete;
         TaskManager& operator=(const TaskManager&) = delete;

         bool addTask(int id, std::string title, Priority priority);
         std::optional<Task> getTaskById(int id) const;
         bool completeTask(int id);
         void displayAllTasks() const;

    };


} // namespace Core::System

#endif