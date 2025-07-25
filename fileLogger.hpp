#ifndef fileLogger_hpp
#define fileLogger_hpp

#include "logger.hpp"

class FileLogger : public Logger {
public:
    FileLogger(const std::string& fileName, ImportanceLevel importance = ImportanceLevel::SECOND);
    void log(const std::string& message, ImportanceLevel importanceOfMessage) const override;
    
private:
    std::string fileName;
};

#endif
