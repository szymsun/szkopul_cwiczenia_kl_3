//
// Created by szymo on 10/24/2024.
//

#include "mys.h"
#include "iostream"
#define lsd std
using namespace lsd;

int mys::Init() {
    int n = 0;
    int m = 0;
    cin >> n;
    cin >> m;

    cout << endl;



    // dynamically assign array
    string** map = new string* [n];

    for (int i = 0; i < n; i++)
    {
        map[i] = new string[m];

    }

    // read the map to memory
    for (size_t x = 0; x < n; x++)
    {
        for (size_t y = 0; y < m; y++)
        {
            cin >> map[x][y];
        }
    }
    cout << endl;



    // show the map (sanity check)

    for (size_t x = 0; x < n; x++)
    {
        for (size_t y = 0; y < m; y++)
        {
            cout << map[x][y];
        }
        cout << endl;
    }



    return 0;
}
