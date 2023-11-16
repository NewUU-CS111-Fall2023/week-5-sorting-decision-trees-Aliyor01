/*
 * Author: Ergashev Aliyorjon
 * Date: 16.11.2023
 * Name: main.cpp
 */

#include "task_1.h"
#include <algorithm> // Include the algorithm header for swap
#include <vector>
#include <iostream> // Include the iostream header for output

using namespace std;

// Function to perform Bubble Sort on a vector of strings
void bubbleSort(vector<string> &books) {
    int n = books.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare adjacent book titles and swap if they are in the wrong order
            if (books[j] > books[j + 1]) {
                swap(books[j], books[j + 1]);
            }
        }
    }
}

// Function to display the sorted vector of strings
void displaySortedBooks(const vector<string> &books) {
    for (const auto &book : books) {
        cout << book << endl;
    }
}

int main() {
    // Example usage
    vector<string> books = {"C Programming", "Java Basics", "Python Mastery", "Algorithm Design"};
    
    // Sort the vector of strings using Bubble Sort
    bubbleSort(books);

    // Display the sorted books
    displaySortedBooks(books);

    return 0;
}

