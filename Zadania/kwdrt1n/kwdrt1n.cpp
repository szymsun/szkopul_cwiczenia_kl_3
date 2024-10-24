//
// Created by szymo on 10/24/2024.
//
#include "iostream"
#include "kwdrt1n.h"


int kwdrt1n::Init() {

    int sx = 1;

    std::cin >> sx;

    for (int y = 0; y < sx; y++) { // wysokość
        for (int x = 1; x <= sx; x++) { // szerokość

            if(x == sx-y){
                std::cout << 'X';
            }
            else{
                std::cout << '@';
            }

            // alternatywnie można refactorować do tego: :333
            // x == sx - y ? std::cout << 'X' : std::cout << '@';
        }
        std::cout << std::endl;
    }
    return 0;
}

