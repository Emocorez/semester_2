#include <string>
#include "Human.h"

// Получение имени человека (реализация)
int Human::getTime()
{
    return Human::hours;
}

// Установка имени человека (реализация)
void Human::setTime(int hoursToSet)
{
    Human::hours = hoursToSet;
}

// Перегрузка оператора вывода (реализация)
ostream& operator<< (ostream& out, const Human& human)
{
    out << "Human: " << human.weight << ", " << human.height << ", " << human.name << ", " << human.hours << endl;

    return out;
}

// Перегрузка оператора ввода (реализация)
istream& operator>> (istream& in, Human& human)
{
    in >> human.weight;
    in >> human.height;
    in >> human.name;
    in >> human.hours;

    return in;
}