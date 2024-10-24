//
// Created by szymo on 10/24/2024.
//

#include "tmp.h"
#include "iostream"

using namespace std;

int tmp::init() {
    int m_days = 0;

    int* measurements = new int[m_days];

    int what_temp = 0;


    // collect data
    std::cin >> m_days;

    for (int i = 0; i < m_days; i++)
    {
        std::cin >> measurements[i];
    }

    std::cin >> what_temp;

    // check for temperature

    int counter = 0;

    bool* whatdays = new bool[m_days];

    for (size_t i = 0; i < m_days; i++)
    {
        whatdays[i] = 0;
    }


    for (size_t i = 0; i < m_days; i++)
    {
        if (measurements[i] == what_temp) {
            counter++;
            whatdays[i] = true;
        }
    }

    std::cout << counter << " ";

    for (size_t i = 0; i < m_days; i++)
    {
        if (whatdays[i]) {
            std::cout << i + 1<< " ";
        }
    }
    return 0;
}
