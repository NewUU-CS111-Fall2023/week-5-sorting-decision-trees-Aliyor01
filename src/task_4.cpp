/*
 * Author: Ergashev Aliyorjon
 * Date: 16.11.2023
 * Name: main.cpp
 */

#include "task_4.h"

int countElementsWithSmallerNeighbors(int array[], int length) {
    int count = 0;

    for (int i = 1; i < length - 1; ++i) {
        if (array[i] > array[i - 1] && array[i] > array[i + 1]) {
            count++;
        }
    }

    return count;
}
