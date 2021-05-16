#include <string>
#include "Human.h"

// ��������� ���������� ������ (����������)
int Human::getHourlyWage()
{
    return Human::hourlyWage;
}

// ��������� ���������� ������(����������)
void Human::setHourlyWage(int hoursToSet)
{
    Human::hourlyWage = hoursToSet;
}

// ���������� ��������� ������ (����������)
ostream& operator<< (ostream& out, const Human& human)
{
    out << "Human: " << human.weight << ", " << human.height << ", " << human.name << ", " << human.hourlyWage << endl;

    return out;
}

// ���������� ��������� ����� (����������)
istream& operator>> (istream& in, Human& human)
{
    in >> human.weight;
    in >> human.height;
    in >> human.name;
    in >> human.hourlyWage;

    return in;
}

void Human::work() {
    cout << "I'm working";
}

void Human::addWorkPlace(WorkPlace* place) 
{
    workPlaces->addElemEnd(place);
}

void Human::printWorkPlaces() {
    workPlaces->print();
}