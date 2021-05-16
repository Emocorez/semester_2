#include <string>
#include <iostream>

using namespace std;

class Human {
protected:
    int weight;
    int height;
    string name;
    int hours;

public:

    // Конструктор
    Human() 
    {
        weight = 0;
        height = 0;
        hours = 0;
        name = "No name yet";
    }

    // Конструктор с параметрами
    Human(int setWeight, int setHeight, string setName) 
    {
        weight = setWeight;
        height = setHeight;
        hours = 0;
        name = setName;
    }

    // Конструктор копирования
    Human(Human &human)
    : weight(human.weight), height(human.height)
    {
        hours = 0;
    }

    // Деструктор
    ~Human() 
    {
        //Очистка памяти: delete ...
    }    

    // Геттер (объявление)
    int getTime(); 

    // Сеттер (объявление)
    void setTime(int hoursToSet);

    // Перегрузка оператора вывода (объявление)
    friend ostream& operator<< (ostream& out, const Human& human);
    
    // Перегрузка оператора ввода (объявление)
    friend istream& operator>> (std::istream& in, Human& human);

    Human& operator= (const Human& human)
    {
        // Выполняем копирование значений
        weight = human.weight;
        height = human.height;
        name = human.name;
        hours = human.hours;
      
        return *this;
    }
};
