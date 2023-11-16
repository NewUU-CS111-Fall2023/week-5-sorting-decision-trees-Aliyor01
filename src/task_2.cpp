/*
 * Author: Ergashev Aliyorjon
 * Date: 16.11.2023
 * Name: main.cpp
 */


#include "task_2.h"
#include <algorithm>

void selectionSort(std::vector<int> &denominations) {
    int n = denominations.size();

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (denominations[j] < denominations[minIndex]) {
                minIndex = j;
            }
        }

        std::swap(denominations[i], denominations[minIndex]);
    }
}
