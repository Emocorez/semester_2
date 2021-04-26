// pasko_24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Human.h"
using namespace std;

int main()
{
    Human *human = new Human();
    human->setTime(10);
    cout << *human;

    Human inHuman;   
    cin >> inHuman; //¬вод с разделителем через пробел
    cout << "You entered: " << inHuman << '\n';
}
