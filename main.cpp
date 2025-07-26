#include "fileLogger.hpp"
#include "importance.hpp"

#include <iostream>
#include <string>
#include <sstream>
#include <thread>
#include <mutex>

std::mutex logMutex; ///< Мьютекс для синхронизации потоков

/**
 * @brief Потокобезопасная запись лог-сообщения.
 */
void logInThread(FileLogger& logger, const std::string& message, ImportanceLevel level) {
    std::lock_guard<std::mutex> lock(logMutex);
    logger.log(message, level);
}

/**
 * @brief Главная функция, читающая ввод и логирующая сообщения.
 */
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
    while (std::getline(std::cin, input)) {
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
    
