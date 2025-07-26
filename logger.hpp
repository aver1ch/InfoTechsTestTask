#ifndef logger_hpp
#define logger_hpp

#include <string>
#include <iostream>
#include <chrono>
#include <ctime>
#include <iomanip>
#include <sstream>
#include "importance.hpp"

/**
 * @brief Абстрактный базовый класс логгера.
 */
class Logger {
public:
    /**
     * @brief Конструктор.
     * @param importance Уровень логирования.
     */
    Logger(ImportanceLevel importance = ImportanceLevel::SECOND) : importance(importance) {}

    /**
     * @brief Чисто виртуальный метод логирования.
     */
    virtual void log(const std::string& message, ImportanceLevel level) const = 0;

    /**
     * @brief Установка уровня важности логгера.
     */
    void setImportanceLevel(ImportanceLevel importance) {
        this->importance = importance;
    }

    /**
     * @brief Получение текущего времени в строковом виде.
     */
    std::string getCurrentDateTime() const {
        auto now = std::chrono::system_clock::now();
        std::time_t now_time = std::chrono::system_clock::to_time_t(now);
        std::tm* local_tm = std::localtime(&now_time);

        std::ostringstream oss;
        oss << std::put_time(local_tm, "%Y-%m-%d %H:%M:%S");
        return oss.str();
    }

    /**
     * @brief Получение текущего уровня логгирования.
     */
    ImportanceLevel getImportanceLevel() const {
        return importance;
    }

    virtual ~Logger() = default;

protected:
    ImportanceLevel importance; ///< Уровень важности логгера
};

#endif

