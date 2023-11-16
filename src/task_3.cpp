/*
 * Author: Ergashev Aliyorjon
 * Date: 16.11.2023
 * Name: main.cpp
 */

#include <iostream>
#include <vector>
#include <algorithm> // Include the algorithm header for swap

void rearrangeSoldiers(std::vector<std::string> &soldiers) {
    int n = soldiers.size();

    for (int i = 0; i < n - 1; i += 2) {
        // Swap adjacent soldiers
        std::swap(soldiers[i], soldiers[i + 1]);
    }
}

int main() {
    // Example usage
    std::vector<std::string> soldiers = {"Alpha", "Bravo", "Charlie", "Delta", "Echo"};

    // Rearrange the list of soldiers
    rearrangeSoldiers(soldiers);

    // Display the rearranged list of soldiers
    std::cout << "Rearranged list of soldiers:" << std::endl;
    for (const std::string &soldier : soldiers) {
        std::cout << soldier << std::endl;
    }

    return 0;
}

