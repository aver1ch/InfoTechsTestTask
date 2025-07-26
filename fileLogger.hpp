#ifndef fileLogger_hpp
#define fileLogger_hpp

#include "logger.hpp"

/**
 * @brief Класс для логирования сообщений в файл.
 */
class FileLogger : public Logger {
public:
    /**
     * @brief Конструктор логгера.
     * @param fileName Имя файла для записи логов.
     * @param importance Уровень важности, начиная с которого сообщения будут логироваться.
     */
    FileLogger(const std::string& fileName, ImportanceLevel importance = ImportanceLevel::SECOND);

    /**
     * @brief Логирование сообщения в файл.
     * @param message Текст сообщения.
     * @param importanceOfMessage Важность сообщения.
     */
    void log(const std::string& message, ImportanceLevel importanceOfMessage) const override;

private:
    std::string fileName; ///< Имя файла для логов
};

#endif

