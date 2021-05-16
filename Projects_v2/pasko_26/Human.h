#include <string>
#include <iostream>
#include "List.h"

using namespace std;

class Human {
protected:
    int weight;
    int height;
    string name;
    int hourlyWage;

public:

    List* workPlaces;

    // Конструктор
    Human() 
    {
        weight = 0;
        height = 0;
        hourlyWage = 0;
        name = "No name yet";
        workPlaces = new List();
    }

    // Конструктор с параметрами
    Human(int setWeight, int setHeight, string setName)
    {
        weight = setWeight;
        height = setHeight;
        hourlyWage = 0;
        name = setName;
        workPlaces = new List();
    }

    // Конструктор с параметрами
    Human(int setWeight, int setHeight, string setName, List* setPlaces)
    {
        weight = setWeight;
        height = setHeight;
        hourlyWage = 0;
        name = setName;
        workPlaces = setPlaces;
    }

    // Конструктор копирования
    Human(Human &human)
    : weight(human.weight), height(human.height)
    {
        hourlyWage = 0;
    }

    // Деструктор
    ~Human() 
    {
        //Очистка памяти: delete ...
    }    

    // Геттер (объявление)
    int getHourlyWage();

    // Сеттер (объявление)
    void setHourlyWage(int hoursToSet);

    void work();

    void addWorkPlace(WorkPlace* place);

    void printWorkPlaces();

    // Перегрузка оператора вывода (объявление)
    friend ostream& operator<< (ostream& out, const Human& human);
    
    // Перегрузка оператора ввода (объявление)
    friend istream& operator>> (std::istream& in, Human& human);
};
