#ifndef socketLogger_hpp
#define socketLogger_hpp

#include "logger.hpp"

class SocketLogger : public Logger {
public:
    SocketLogger(const std::string& ip, int port, ImportanceLevel level = ImportanceLevel::SECOND);
    void log(const std::string& message, ImportanceLevel importanceOfMessage) const override;

private:
    std::string ip;
    int port;
};


#endif
