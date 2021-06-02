// pasko_30.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    // Cyrillic support in Windows console
    setlocale(LC_ALL, "");

    // Creating a vector from strings
    vector<string> students;

    // Buffer for entering student surname
    string buffer = "";

    cout << "Enter the students names. "
         << "At the end enter the empty line." << endl;

    do {
        getline(cin, buffer);
        if (buffer.size() > 0) 
        {
            // Adding an element to the end of a vector
            students.push_back(buffer);
        }
    } while (buffer != "");


    // Store the number of elements in the vector
    unsigned int vector_size = students.size();

    // Displaying the filled vector on the screen
    cout << "Your vector:" << endl;

    for (int i = 0; i < vector_size; i++) 
    {
        cout << students[i] << endl;
    }

    return 0;
}
