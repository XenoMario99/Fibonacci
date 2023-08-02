#include "fibonacci.h"

#include <gtest/gtest.h>

TEST(FibonacciTest, fibonacciAlgorithm_ok) {
    ASSERT_EQ(657800, fib::fibonacci(26, 19));
    ASSERT_EQ(3003, fib::fibonacci(14, 8));
    ASSERT_EQ(5, fib::fibonacci(5, 4));
    ASSERT_EQ(4, fib::fibonacci(4, 3));
    ASSERT_EQ(1, fib::fibonacci(4, 4));
    ASSERT_EQ(1, fib::fibonacci(0, 0));
}