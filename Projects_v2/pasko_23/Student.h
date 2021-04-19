#include <string>

using namespace std;

class Student {
private:
    string _name;
    string _lastName;
    int _scores[5];
    float _averageScrore;
    string _secretWord;

public:
    string getName();           // геттер для name
    void setName(string name);  // сеттер для name
};

class Human {
protected:
    string humanInfo;

public:

    // Конструктор
    Human() 
    {
        weight = 0;
        height = 0;
        hours = 0;
    }

    // Конструктор с параметрами
    Human(int setWeight, int setHeight) 
    {
        weight = setWeight;
        height = setHeight;
        hours = 0;
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

    int weight;
    int height;
    string name;

    int hours;

    // Геттер
    virtual int getTime() {
        return hours;
    }

    // Сеттер
    void setTime(int hoursToSet)
    {
        hours = hoursToSet;
    }
};

class Worker : public Human {
public:

    Worker(int setWeight, int setHeight) 
        : Human(setWeight, setHeight)
    {
    }

    int getTime() {
        return hours * 2;
    }
};

class UnrealWorker : public Human {
public:

    UnrealWorker(int setWeight, int setHeight)
        : Human(setWeight, setHeight)
    {
    }

    int getTime() {
        return hours * 3;
    }
};