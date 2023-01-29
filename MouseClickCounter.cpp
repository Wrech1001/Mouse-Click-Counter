// MouseClickCounter.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Was created in 29/1/23 morning

#include <iostream>
#include <windows.h>

int main()
{
    int as = 0;
    while (true) {
        if (GetAsyncKeyState(VK_LBUTTON) & 1) {
            system("CLS");
            as++;
            std::cout << as;
        }
    }
}
