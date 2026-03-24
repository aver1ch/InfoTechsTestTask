Многопоточный логгер на C++

Зачем этот проект

Это учебный пример архитектуры логирования:
- есть абстракция `Logger`, которую можно менять без переписывания приложения
- есть уровни важности, чтобы фильтровать шум
- запись выполняется в отдельных потоках и защищена мьютексом

Сейчас консольное приложение использует `FileLogger`. Реализация `SocketLogger` есть в библиотеке и может быть подключена в `main.cpp` при необходимости.

Что делает приложение

1. Запускается с именем файла и порогом важности.
2. Читает строки из stdin в формате `<LEVEL> <message>`.
3. Пишет только те сообщения, чей уровень не ниже заданного.

Структура проекта

.
├── CMakeLists.txt
├── README.md
├── logger.hpp
├── fileLogger.hpp / fileLogger.cpp
├── socketLogger.hpp / socketLogger.cpp
├── importance.hpp / importance.cpp
└── main.cpp

Сборка

Общий вариант (shared libs по умолчанию):

cmake -S . -B build
cmake --build build

Статическая библиотека:

cmake -S . -B build-static -DBUILD_SHARED_LIBS=OFF
cmake --build build-static

Исполняемый файл: `build/test_app` или `build-static/test_app`.

Использование

./test_app <file_name> <importance_level>

Пример запуска:

./test_app log.txt SECOND

Пример ввода:

FIRST System started
SECOND Subsystem initialized
THIRD Minor details

Пример содержимого log.txt:

System started | FIRST | 2025-07-23 17:44:21 |
Subsystem initialized | SECOND | 2025-07-23 17:44:23 |

Компоненты (кратко)

`logger.hpp` — абстрактный базовый класс логгера.  
`fileLogger.*` — запись в файл.  
`socketLogger.*` — отправка по TCP (в приложении не используется).  
`importance.*` — перечисление уровней и преобразование из/в строку.  
`main.cpp` — консольный ввод, порог важности, потокобезопасная запись.

Уровни важности

FIRST — критические события  
SECOND — важные события  
THIRD — информационные события  
UNKOWN — нераспознанный ввод

Возможные ошибки

Failed to open log file — не удалось открыть файл (права/путь).  
Unrecognized importance level — неизвестный уровень важности.  
Connection failed — при использовании SocketLogger.
