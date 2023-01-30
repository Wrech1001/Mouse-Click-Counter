// MouseClickCounter.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Was created in 29/1/23 morning

#include <iostream>
#include <windows.h>
using namespace std; 

int main()
{
    int as = 0;
    int maks = 50
    while (true) {
        if (GetAsyncKeyState(VK_LBUTTON) & 3) {
            system("CLS");
            as++;
            cout << as;
            cout << "cukup";
        }
    }    
        if (as==maks)
        {
            cout << "anda telah mencapai batas maksimum";
            return;
        }

}
