#include "fileLogger.hpp"

#include <fstream>

FileLogger::FileLogger(const std::string& fileName, ImportanceLevel importance) : Logger(importance), fileName(fileName) {}

void FileLogger::log(const std::string& message, ImportanceLevel importanceOfMessage) const {
    if (importanceOfMessage < importance) {
        return;
    }
    
    std::ofstream out(fileName, std::ios::app);
    if (out) {
        out << message << " | " << ImportanceLeveltoString(importanceOfMessage) << " | " << getCurrentDateTime() << " | " << std::endl;
    }
    
    std::cerr << "Failed to open log file: " << fileName << std::endl;
    return;
}
