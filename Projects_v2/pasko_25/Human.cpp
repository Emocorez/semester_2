#include <string>
#include "Human.h"

// ��������� ����� �������� (����������)
int Human::getTime()
{
    return Human::hours;
}

// ��������� ����� �������� (����������)
void Human::setTime(int hoursToSet)
{
    Human::hours = hoursToSet;
}

// ���������� ��������� ������ (����������)
ostream& operator<< (ostream& out, const Human& human)
{
    out << "Human: " << human.weight << ", " << human.height << ", " << human.name << ", " << human.hours << endl;

    return out;
}

// ���������� ��������� ����� (����������)
istream& operator>> (istream& in, Human& human)
{
    in >> human.weight;
    in >> human.height;
    in >> human.name;
    in >> human.hours;

    return in;
}