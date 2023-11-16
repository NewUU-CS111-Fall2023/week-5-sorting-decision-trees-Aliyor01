/*
 * Author: Ergashev Aliyorjon
 * Date: 16.11.2023
 * Name: main.cpp
 */

#include "task_1.h"
#include <algorithm>
#include <iostream>

void bubbleSort(std::vector<std::string> &books) {
    int n = books.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (books[j] > books[j + 1]) {
                std::swap(books[j], books[j + 1]);
            }
        }
    }
}

void displaySortedBooks(const std::vector<std::string> &books) {
    for (const auto &book : books) {
        std::cout << book << std::endl;
    }
}
