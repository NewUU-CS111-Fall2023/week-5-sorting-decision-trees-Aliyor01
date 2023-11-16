#include <iostream>
#include <vector>
#include <algorithm> // Include the algorithm header for swap

using namespace std;

void selectionSort(vector<int> &denominations) {
    int n = denominations.size();

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            // Find the index of the minimum element in the remaining unsorted part
            if (denominations[j] < denominations[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        swap(denominations[i], denominations[minIndex]);
    }
}

int main() {
    // Example usage
    vector<int> denominations = {99, 19, 11};

    // Sort the vector of denominations using Selection Sort
    selectionSort(denominations);

    // Display the sorted list of denominations
    cout << "Sorted list of denominations:" << endl;
    for (const int &denomination : denominations) {
        cout << denomination << " ";
    }

    return 0;
}

