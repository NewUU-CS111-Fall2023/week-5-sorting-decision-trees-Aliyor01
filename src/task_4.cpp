/*
 * Author: Ergashev Aliyorjon
 * Date: 16.11.2023
 * Name: main.cpp
 */

#include <iostream>

// Function to count elements where both neighboring elements are smaller
int countElementsWithSmallerNeighbors(int arr[], int size) {
    int count = 0;

    for (int i = 1; i < size - 1; ++i) {
        // Check if the current element is greater than both neighboring elements
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            count++;
        }
    }

    return count;
}

int main() {
    // Example usage
    int arr[] = {5, 2, 8, 1, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Count elements where both neighboring elements are smaller
    int result = countElementsWithSmallerNeighbors(arr, size);

    // Display the result
    std::cout << "Count of elements with both smaller neighbors: " << result << std::endl;

    return 0;
}

