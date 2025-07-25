#include "fileLogger.hpp"
#include "importance.hpp"

#include <iostream>
#include <string>
#include <sstream>
#include <thread>
#include <mutex>

// Общий мьютекс для защиты логгера
std::mutex logMutex;

void logInThread(FileLogger& logger, const std::string& message, ImportanceLevel level) {
    std::lock_guard<std::mutex> lock(logMutex); // защита доступа
    logger.log(message, level);
}

int main(int argc, const char * argv[]) {
    
    if (argc < 3) {
        std::cerr << "There is not enough parameters\n";
        return 1;
    }
    
    const std::string& fileName = argv[1];
    const std::string& importanceArgument = argv[2];
    ImportanceLevel importance = StringtoImportanceLevel(importanceArgument);
    FileLogger logger(fileName, importance);
    
    std::string input;
    
    while(std::getline(std::cin, input)) {
        if (input.empty()) continue;
        
        std::istringstream iss(input);
        
        std::string importanceInput, message;
        iss >> importanceInput;
        std::getline(iss, message);
        ImportanceLevel level = StringtoImportanceLevel(importanceInput);
        
        if (level == UNKOWN) {
            std::cerr << "Unrecognized importance level. Message skipped.\n";
            continue;
        }
        
        std::thread(logInThread, std::ref(logger), message, level).detach();
    }
    
}
