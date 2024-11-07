cmake_minimum_required(VERSION 3.10)
project(LR1)

# Добавляем библиотеку lr1_lib
add_library(lr1_lib lib/lr1.cpp)

# Включаем путь к заголовочным файлам
target_include_directories(lr1_lib PUBLIC ${PROJECT_SOURCE_DIR}/lib)

# Подключаем CMakeLists.txt для тестов
option(test "Build all tests." ON)
if(test)
    enable_testing()
    add_subdirectory(tests)
endif()
