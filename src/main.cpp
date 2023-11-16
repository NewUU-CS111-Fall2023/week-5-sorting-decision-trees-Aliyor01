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
    int main() {
    // Example usage
    std::vector<std::string> books = {"C Programming", "Java Basics", "Python Mastery", "Algorithm Design"};
    
    // Sort the vector of strings using Bubble Sort
    bubbleSort(books);

    // Display the sorted books
    displaySortedBooks(books);

    return 0;
}

    std::cout << "Task 2" << std::endl;
    int main() {
    // Example usage
    std::vector<int> denominations = {99, 19, 11};

    // Call the function from task_2.cpp
    selectionSort(denominations);

    // Display the sorted list of denominations
    std::cout << "Sorted list of denominations:" << std::endl;
    for (const int &denomination : denominations) {
        std::cout << denomination << " ";
    }

    return 0;
}

    std::cout << "Task 3" << std::endl;
    int main() {
    // Example usage
    std::vector<std::string> soldiers = {"Alpha", "Bravo", "Charlie", "Delta", "Echo"};

    // Call the function from task_3.cpp
    rearrangeSoldiers(soldiers);

    // Display the rearranged list of soldiers
    std::cout << "Rearranged list of soldiers:" << std::endl;
    for (const std::string &soldier : soldiers) {
        std::cout << soldier << std::endl;
    }

    return 0;
}

    std::cout << "Task 4" << std::endl;
    int main() {
    // Sample input
    int numbers[] = {5, 2, 8, 1, 4, 6};
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);

    // Call the function from task_4.cpp
    int result = countElementsWithSmallerNeighbors(numbers, arraySize);

    // Display the result
    std::cout << "Count of elements with both smaller neighbors: " << result << std::endl;

    return 0;
}

    std::cout << "Task 5" << std::endl;
    int main() {
    // Example usage
    std::vector<std::vector<char>> matrix = {
        {'b', 'b', 'w', 'b', 'b', 'y', 'w', 'w', 'w'},
        {'b', 'b', 'w', 'w', 'b', 'y', 'y', 'b', 'b'},
        {'y', 'y', 'y', 'w', 'w', 'b', 'b', 'b', 'b'},
        {'y', 'e', 'y', 'e', 'y', 'w', 'w', 'b', 'b'},
        {'w', 'b', 'b', 'w', 'w', 'b', 'w', 'w', 'w'},
        {'b', 'b', 'w', 'w', 'w', 'w', 'w', 'y', 'w'}  // Corrected 'B' to 'b'
    };

    // Call the function from task_5.cpp
    displayColors(matrix);

    return 0;
}

    return 0;
}
