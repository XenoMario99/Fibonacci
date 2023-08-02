#include "fibonacci.h"

#include <algorithm>
#include <iostream>
#include <stdexcept>

uint64_t fib::fibonacci(uint8_t n, uint8_t k) {
    if (k <= n) {
        std::vector<std::vector<uint64_t>> vec{std::vector<std::vector<uint64_t>>(n + 1, std::vector<uint64_t>(k + 1, 0))};

        for (uint8_t i = 0; i <= n; i++) {
            for (uint8_t j = 0; j <= std::min(i, k); j++) {
                if (i == j || j == 0) {
                    vec[i][j] = 1;
                } else {
                    vec[i][j] = vec[i - 1][j - 1] + vec[i - 1][j];
                }
            }
        }

        return vec[n][k];
    } else {
        throw std::invalid_argument("k argument must be less or equal to n argument!");
    }
}