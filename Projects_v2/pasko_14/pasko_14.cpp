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
    std::ofstream out;          // поток для записи
    out.open("D:\\text_out.txt"); // окрываем файл для записи
    if (out.is_open())
    {
        out << "Hello World!" << std::endl;
    }
}

string lineShift(string line, int pos, string delimiter) 
{
    int delimeterPosition = pos + delimiter.length();
    line.erase(0, delimeterPosition); // отрезает от строки начиная от нуля до номера элемента
    return line; // 4,......
}

Parser getItem(string line, string delimiter) {
    Parser parser;

    // Здесь начинается запятая
    parser.delimeterPosition = line.find(delimiter);
    // получаем все символы от 0-го до n-го 
    // например от 0 до 3 -> (Big)
    parser.line = line.substr(0, parser.delimeterPosition); // Все значения строки (Big -> 4 -> ...) могут тут быть

    return parser;
}

House parseStruct(string line) // примерное значение line: Big,4,Leon,132
{ 
    string delimiter = ",";
    House house;    

    // Получаем имя  
    Parser data = getItem(line, delimiter);   
    house.name = data.line;

    line = lineShift(line, data.delimeterPosition, delimiter);
   
    // Получаем номер
    data = getItem(line, delimiter);  // 4
    house.number = stoi(data.line);

    return house;
}

House* read() {
    string delimiter = ",";
    House* houses = new House[structSize];
       
    ifstream in("D:\\house.txt"); //< окрываем файл для чтения
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

    in.close();     // закрываем файл

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
