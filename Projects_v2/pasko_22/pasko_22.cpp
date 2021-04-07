// pasko_22.cpp : This file contains the 'main' function. Program execution begins and ends there.
// ^[A-Z]([a-zA-z])+ (only from capital letter)
// 
// Html parsing: https://stackoverflow.com/questions/1732348/regex-match-open-tags-except-xhtml-self-contained-tags

#include <iostream>
#include <string>
#include <regex>

using namespace std;

void regexp() 
{
    const string input = "ABC:1->   PQR:2;;;   XYZ:3<<<"s;
    const regex r(R"((\w+):(\w+);)");
    smatch m;

    if (regex_search(input, m, r)) {

        for (size_t i = 0; i < m.size(); i++)
        {
            cout << m[i] << endl;
        }
    }
}



int main()
{
    regexp();
}