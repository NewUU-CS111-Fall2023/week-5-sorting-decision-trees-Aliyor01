/*
 * Author: Ergashev Aliyorjon
 * Date: 16.11.2023
 * Name: main.cpp
 */

#include "task_4.h"

int countElementsWithSmallerNeighbors(int arr[], int size) {
    int count = 0;

    for (int i = 1; i < size - 1; ++i) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            count++;
        }
    }

    return count;
}
