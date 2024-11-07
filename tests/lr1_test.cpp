#include <gtest/gtest.h>
#include <vector>

using namespace std;

// Объявление функции
int countConsecutivePositivePairs(const std::vector<double>& array);

// Тестовый класс
class ConsecutivePositivePairsTest : public ::testing::Test {
protected:
    std::vector<double> arr;
    int result;

    void SetUp() override {
        arr = { 1.2, -2.5, 3.4, 4.5, -1.2, 6.7, 8.9 };
    }
};

// Пример теста 1
TEST_F(ConsecutivePositivePairsTest, TestWithPositivePairs) {
    result = countConsecutivePositivePairs(arr);
    EXPECT_EQ(result, 3); // Ожидаем 3 пары подряд положительных чисел
}

// Пример теста 2
TEST_F(ConsecutivePositivePairsTest, TestWithNoPositivePairs) {
    arr = { -1.2, -2.5, -3.4, -4.5 };
    result = countConsecutivePositivePairs(arr);
    EXPECT_EQ(result, 0); // Ожидаем 0 пар подряд положительных чисел
}

// Пример теста 3
TEST_F(ConsecutivePositivePairsTest, TestWithSingleElement) {
    arr = { 1.0 };
    result = countConsecutivePositivePairs(arr);
    EXPECT_EQ(result, 0); // Ожидаем 0 пар, так как только один элемент
}

// Пример теста 4
TEST_F(ConsecutivePositivePairsTest, TestWithAllPositivePairs) {
    arr = { 1.0, 2.0, 3.0, 4.0 };
    result = countConsecutivePositivePairs(arr);
    EXPECT_EQ(result, 3); // Ожидаем 3 пары, так как все числа положительные
}
