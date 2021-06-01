// pasko_28.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fileName;
    cout << "Enter the file name:";
    cin >> fileName;

    try 
    {
        // Error while opening the file
        throw runtime_error("Could not open file");
    }
    catch (exception& ex)
    {
        cout << "Error message: " << ex.what() << endl;
    }
}
