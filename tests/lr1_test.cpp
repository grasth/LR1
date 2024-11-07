#include <gtest/gtest.h>
#include "lr1.h"

// Тесты на размеры массива

TEST(CountConsecutivePositivePairsTest, EmptyArray) {
    std::vector<double> array = {};
    EXPECT_EQ(countConsecutivePositivePairs(array), 0);
}

TEST(CountConsecutivePositivePairsTest, SingleElementArray) {
    std::vector<double> array = { 1.0 };
    EXPECT_EQ(countConsecutivePositivePairs(array), 0);
}

TEST(CountConsecutivePositivePairsTest, ArraySize52) {
    std::vector<double> array(53, 1.0);  // массив из 53 положительных элементов
    EXPECT_EQ(countConsecutivePositivePairs(array), 52);  // 52 пары
}

// Дополнительные тесты с увеличением размера массива

TEST(CountConsecutivePositivePairsTest, ArraySize105) {
    std::vector<double> array(105, 1.0);  // массив из 105 положительных элементов
    EXPECT_EQ(countConsecutivePositivePairs(array), 104);  // 104 пары
}

// Тесты на эквивалентные области данных

TEST(CountConsecutivePositivePairsTest, MinBoundary) {
    std::vector<double> array = { -DBL_MAX, -DBL_MAX };  // минимальные границы
    EXPECT_EQ(countConsecutivePositivePairs(array), 0);  // нет положительных пар
}

TEST(CountConsecutivePositivePairsTest, WithinBounds) {
    std::vector<double> array = { -1.0, 2.0, 3.0, -2.0, 4.0, 5.0 };
    EXPECT_EQ(countConsecutivePositivePairs(array), 2);  // 2 положительные пары
}

TEST(CountConsecutivePositivePairsTest, MaxBoundary) {
    std::vector<double> array = { DBL_MAX, DBL_MAX };  // максимальные границы
    EXPECT_EQ(countConsecutivePositivePairs(array), 1);  // 1 положительная пара
}

// Тесты с ключевыми элементами

TEST(CountConsecutivePositivePairsTest, KeyElementAtStart) {
    std::vector<double> array = { 1.0, 1.0, -1.0, -2.0 };
    EXPECT_EQ(countConsecutivePositivePairs(array), 1);
}

TEST(CountConsecutivePositivePairsTest, KeyElementInMiddle) {
    std::vector<double> array = { -1.0, 1.0, 1.0, -2.0 };
    EXPECT_EQ(countConsecutivePositivePairs(array), 1);
}

TEST(CountConsecutivePositivePairsTest, KeyElementAtEnd) {
    std::vector<double> array = { -1.0, -2.0, 1.0, 1.0 };
    EXPECT_EQ(countConsecutivePositivePairs(array), 1);
}

TEST(CountConsecutivePositivePairsTest, NoPositiveElements) {
    std::vector<double> array = { -1.0, -2.0, -3.0, -4.0 };
    EXPECT_EQ(countConsecutivePositivePairs(array), 0);
}
