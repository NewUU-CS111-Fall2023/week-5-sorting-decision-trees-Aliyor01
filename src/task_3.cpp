/*
 * Author: Ergashev Aliyorjon
 * Date: 16.11.2023
 * Name: main.cpp
 */

#include "task_3.h"
#include <algorithm>

void rearrangeSoldiers(std::vector<std::string> &soldiers) {
    int n = soldiers.size();

    for (int i = 0; i < n - 1; i += 2) {
        std::swap(soldiers[i], soldiers[i + 1]);
    }
}

