Статическая библиотека:
cmake -B build-static -DBUILD_SHARED_LIBS=OFF
cmake --build build-static
Создаст liblogger.a

Динамическая библиотека:
cmake -B build-shared -DBUILD_SHARED_LIBS=ON
cmake --build build-shared
Создаст liblogger.so (Linux) или liblogger.dylib (macOS)
