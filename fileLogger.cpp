#include "fileLogger.hpp"
#include "importance.hpp"
#include <fstream>

/**
 * @brief Конструктор FileLogger.
 */
FileLogger::FileLogger(const std::string& fileName, ImportanceLevel importance)
    : Logger(importance), fileName(fileName) {}

/**
 * @brief Метод записи лог-сообщения в файл.
 */
void FileLogger::log(const std::string& message, ImportanceLevel importanceOfMessage) const {
    if (importanceOfMessage < importance) return;

    std::ofstream out(fileName, std::ios::app);

    if (!out) {
        std::cerr << "Failed to open log file: " << fileName << std::endl;
        return;
    }

    out << message << " | " << ImportanceLeveltoString(importanceOfMessage)
        << " | " << getCurrentDateTime() << " | " << std::endl;
}



    



