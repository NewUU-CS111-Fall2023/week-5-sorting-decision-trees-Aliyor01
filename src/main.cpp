/*
 * Author: Ergashev Aliyorjon
 * Date: 16.11.2023
 * Name: main.cpp
 */
#include <iostream>
#include <vector>
#include <string>
#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_4.h"
#include "task_5.h"

int main() {
    std::cout << "Task 1" << std::endl;
    // call for task 1
    std::cout << "Task 2" << std::endl;
    // call for task 2
    std::cout << "Task 3" << std::endl;
    // call for task 3
    std::cout << "Task 4" << std::endl;
    
    int arr[] = {5, 2, 8, 1, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Count elements where both neighboring elements are smaller
    int result = countElementsWithSmallerNeighbors(arr, size);

    // Display the result
    std::cout << "Count of elements with both smaller neighbors: " << result << std::endl;

    return 0;
}

    std::cout << "Task 5" << std::endl;
    // call for task 5
    return 0;
}
