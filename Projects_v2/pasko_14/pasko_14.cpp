// pasko_14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int structSize = 2;

struct House
{
   string name;
   int number;
};

struct Parser
{
    int delimeterPosition;
    string line;
};

void write() {
    std::ofstream out;          // ����� ��� ������
    out.open("D:\\text_out.txt"); // �������� ���� ��� ������
    if (out.is_open())
    {
        out << "Hello World!" << std::endl;
    }
}

string lineShift(string line, int pos, string delimiter) 
{
    int delimeterPosition = pos + delimiter.length();
    line.erase(0, delimeterPosition); // �������� �� ������ ������� �� ���� �� ������ ��������
    return line; // 4,......
}

Parser getItem(string line, string delimiter) {
    Parser parser;

    // ����� ���������� �������
    parser.delimeterPosition = line.find(delimiter);
    // �������� ��� ������� �� 0-�� �� n-�� 
    // �������� �� 0 �� 3 -> (Big)
    parser.line = line.substr(0, parser.delimeterPosition); // ��� �������� ������ (Big -> 4 -> ...) ����� ��� ����

    return parser;
}

House parseStruct(string line) // ��������� �������� line: Big,4,Leon,132
{ 
    string delimiter = ",";
    House house;    

    // �������� ���  
    Parser data = getItem(line, delimiter);   
    house.name = data.line;

    line = lineShift(line, data.delimeterPosition, delimiter);
   
    // �������� �����
    data = getItem(line, delimiter);  // 4
    house.number = stoi(data.line);

    return house;
}

House* read() {
    string delimiter = ",";
    House* houses = new House[structSize];
       
    ifstream in("D:\\house.txt"); //< �������� ���� ��� ������
    if (in.is_open())
    {
        House tempHouse;
        int housesCounter = 0;
        string line;

        while (getline(in, line))
        {            
            std::cout << line << std::endl;

            if (line == "$") 
            {
                houses[housesCounter] = tempHouse;
                housesCounter++;
            }
            else {
                tempHouse = parseStruct(line);

                   /* size_t pos = line.find(delimiter);
                tempHouse.name  = line.substr(0, pos);
                    line.erase(0, pos + delimiter.length());
                    auto item1 = line.substr(0, line.find(delimiter));
                tempHouse.number = stoi(item1);*/
            }
        }
    }

    in.close();     // ��������� ����

    return houses;
}

int main()
{
    write();
    auto res = read();

    for (size_t i = 0; i < structSize; i++)
    {
        cout << res[i].name << " " << res[i].number << endl;
    }

    system("pause");
    return 0;
}
