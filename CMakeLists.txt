cmake_minimum_required(VERSION 3.10)
project(LoggerLib)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Источник библиотеки
set(SOURCES
    fileLogger.cpp
    importance.cpp
)

# Заголовки (для установки)
set(HEADERS
    fileLogger.hpp
    importance.hpp
)

# Опция выбора между статической и динамической библиотекой
option(BUILD_SHARED_LIBS "Build shared libraries" ON)

# Создание библиотеки (автоматически будет .so/.dylib или .a)
add_library(logger ${SOURCES})

# Путь установки заголовков
target_include_directories(logger PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Установка библиотеки и заголовков
install(TARGETS logger
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        RUNTIME DESTINATION bin)

install(FILES ${HEADERS} DESTINATION include)

