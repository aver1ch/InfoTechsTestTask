#ifndef logger_hpp
#define logger_hpp

#include <string>
#include <iostream>
#include <chrono>
#include "importance.hpp"
#include <ctime>
#include <iomanip>

class Logger {
public:
    Logger(ImportanceLevel importance = ImportanceLevel::SECOND) : importance(importance) {}
    
    virtual void log(const std::string& message, ImportanceLevel level) const = 0;
    
    void setImportanceLevel(ImportanceLevel importance) {
        this->importance = importance;
    }
    
    std::string getCurrentDateTime() const {
        auto now = std::chrono::system_clock::now();
        std::time_t now_time = std::chrono::system_clock::to_time_t(now);
        std::tm* local_tm = std::localtime(&now_time);
        std::ostringstream oss;
        
        oss << std::put_time(local_tm, "%Y-%m-%d %H:%M:%S");

        return oss.str();
    }
    
    ImportanceLevel getImportanceLevel() const {
        return importance;
    }
    
    virtual ~Logger() = default;
    
protected:
    ImportanceLevel importance;
};

#endif
