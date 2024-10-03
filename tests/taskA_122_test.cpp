#include <gtest/gtest.h>
#include "../taskA_122.h"


TEST(getFractionalPartTest, SimpleTest) {
  EXPECT_EQ(365, getFractionalPart(10.365, 3));
  EXPECT_EQ(36, getFractionalPart(10.365, 2));
  EXPECT_EQ(3, getFractionalPart(10.365, 1));
}

TEST(task1, SimpleTest) {
  EXPECT_EQ(true, task1(10.305));
  EXPECT_EQ(false, task1(0.365));   
}

TEST(task2, SimpleTest) {
  EXPECT_EQ(true, task2(11.550));
}

TEST(task3, SimpleTest) {
  EXPECT_EQ(1, task3(13.1));
}

TEST(task4, SimpleTest) {
  EXPECT_EQ(5, task4(13.555));
}

TEST(task5, SimpleTest) {
  EXPECT_EQ(true, task5(13.999));
}

TEST(task6, SimpleTest) {
  EXPECT_EQ(27, task6(13.999));
}

TEST(task7, SimpleTest) {
  EXPECT_EQ(true, task7(10.9999));
}

TEST(task9, SimpleTest) {
  EXPECT_EQ(true, task9(10.999));
}