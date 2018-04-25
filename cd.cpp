// ConsoleApplication7.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    int y = 0;
    while (cin >> x >> y) {
        if (x == 0 && y == 0) {
            break;
        }
        else {
            int* xarray = new int[x];
            int* yarray = new int[y];

            for (int i = 0; i < x; i++) {
                cin >> xarray[i];
            }

            for (int i = 0; i < y; i++) {
                cin >> yarray[i];
            }

            int match = 0;
            int a = 0;
            int b = 0;
            //cout << x<<" "<<y << " x and y\n";
            while (a < x && b < y) {
                //cout << xarray[a] << " " << yarray[b] << " xarr and yarr\n";
                if (xarray[a] > yarray[b]) {
                    b++;
                }
                else if (xarray[a] < yarray[b]) {
                    a++;
                }
                else {
                    match++;
                    a++;
                    b++;
                }
            }

            cout<<match<<"\n";
        }
    }
    
    return 0;
}