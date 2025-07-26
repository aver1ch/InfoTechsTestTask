Многопоточный логгер на C++

Описание

Проект реализует **абстрактный логгер** с двумя реализациями:

- `FileLogger` — логгирование в файл
- `SocketLogger` — отправка логов по TCP

Программа принимает ввод с консоли и асинхронно записывает сообщения, если их важность соответствует установленному порогу.

Структура проекта

.
├── include/
│ ├── logger.hpp
│ ├── fileLogger.hpp
│ ├── socketLogger.hpp
│ └── importance.hpp
├── src/
│ ├── fileLogger.cpp
│ ├── socketLogger.cpp
│ ├── importance.cpp
│ └── main.cpp
├── CMakeLists.txt
└── README.md


Сборка

Динамическая:

cmake -S .. -B static -DBUILD_SHARED_LIBS=OFF
cmake --build static

Исполняемый файл будет находиться в static/test_app.

Статическая:

cmake -S .. -B shared -DBUILD_SHARED_LIBS=OFF
cmake --build shared

Использование

./test_app <file_name> <importance_level>
Пример:

./test_app log.txt SECOND
Ввод из терминала:

FIRST System started
SECOND Subsystem initialized
THIRD Minor details
Вывод в log.txt (пример):

System started | FIRST | 2025-07-23 17:44:21 |
Subsystem initialized | SECOND | 2025-07-23 17:44:23 |

Компоненты

logger.hpp
Абстрактный базовый класс логгера.

virtual void log(...) — логирование сообщения
getCurrentDateTime() — текущая дата/время
setImportanceLevel(...), getImportanceLevel()
  fileLogger.hpp / fileLogger.cpp
Логгирование в файл.

Хранит имя файла
Записывает сообщения с уровнем не ниже установленного
  socketLogger.hpp / socketLogger.cpp
Логгирование по сети (TCP).

Подключается к IP/порт
Отправляет форматированные строки
  importance.hpp / importance.cpp
Уровни важности сообщений:

FIRST, SECOND, THIRD
UNKOWN — если нераспознанный ввод
Преобразование из строки и обратно
 main.cpp
Основной файл:

Принимает аргументы fileName и importance
Читает ввод пользователя
Создаёт поток на каждое сообщение
Потокобезопасно вызывает logger.log(...)
  Примеры уровней важности

Уровень	Описание
FIRST	Критически важные события
SECOND	Важные события
THIRD	Информационные сообщения
  Потокобезопасность

Запись в лог происходит с использованием std::mutex, чтобы избежать гонки данных при многопоточном выводе.

std::lock_guard<std::mutex> lock(logMutex);
logger.log(...);
  Возможные ошибки

Failed to open log file — файл не открыт (нет доступа/не существует)
Unrecognized importance level — введён неизвестный уровень важности
Connection failed — при использовании SocketLogger
