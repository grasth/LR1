include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.12.1
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
    lr1_tests
    lr1_test.cpp
)

target_link_libraries(
    lr1_tests
    lr1_lib
    GTest::gtest_main
)

# ”казываем путь к заголовочным файлам только здесь
target_include_directories(lr1_tests PUBLIC ${PROJECT_SOURCE_DIR}/lib)

include(GoogleTest)
gtest_discover_tests(lr1_tests)
