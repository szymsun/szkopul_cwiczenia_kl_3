//
// Created by szymo on 10/24/2024.
//
//
//
#include "iostream"
#include "anm.h"


int anm::Init(){

    std::string input;
    std::cin >> input;
    std::cin >> input;

    int output = 0;

    // deklaracja tablic sluzacych za slownik ktory char do ktorej liczby
    char theList[10] = {'0','1','2','3','4','5','6','7','8','9'};
    int theOtherList[10] = { 0,1,2,3,4,5,6,7,8,9 };


    for (size_t i = 0; i < input.length(); i++)
    {
        for (size_t j = 0; j < 10; j++)
        {

            if (input[i] == theList[j]) { // sprawdza ktora jest cyfra
                output += (int)theOtherList[j];
                break;
            }
        }
    }

    std::cout << output;

    return 0;
}
