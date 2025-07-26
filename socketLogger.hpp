#ifndef socketLogger_hpp
#define socketLogger_hpp

#include "logger.hpp"

/**
 * @brief Логгер, отправляющий сообщения по TCP-соединению.
 */
class SocketLogger : public Logger {
public:
    /**
     * @brief Конструктор.
     * @param ip IP-адрес сервера.
     * @param port Порт сервера.
     * @param level Минимальный уровень важности.
     */
    SocketLogger(const std::string& ip, int port, ImportanceLevel level = ImportanceLevel::SECOND);

    /**
     * @brief Отправка лог-сообщения через сокет.
     */
    void log(const std::string& message, ImportanceLevel importanceOfMessage) const override;

private:
    std::string ip;  ///< IP-адрес назначения
    int port;        ///< Порт назначения
};

#endif

