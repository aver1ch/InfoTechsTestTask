cmake_minimum_required(VERSION 3.10)
project(InfoTechsLoggerProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Логгер как библиотека (статическая/динамическая)
option(BUILD_SHARED_LIBS "Build shared libraries" ON)

# Источники библиотеки
set(LOGGER_SOURCES
    fileLogger.cpp
    importance.cpp
    socketLogger.cpp
)

add_library(logger ${LOGGER_SOURCES})

# Указание include-директории (для public headers)
target_include_directories(logger PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Приложение
add_executable(test_app main.cpp)

# Ссылка на библиотеку
target_link_libraries(test_app PRIVATE logger)

