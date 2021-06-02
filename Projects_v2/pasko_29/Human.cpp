#include <string>
#include "Human.h"

// Getting an hourly salary (implementation)
int Human::getHourlyWage()
{
    return Human::hourlyWage;
}

// Setting the hourly salary (implementation)
void Human::setHourlyWage(int hoursToSet)
{
    Human::hourlyWage = hoursToSet;
}

// Output operator overloading (implementation)
ostream& operator<< (ostream& out, const Human& human)
{
    out << "Human: " << human.weight << ", " << human.height << ", " << human.name << ", " << human.hourlyWage << endl;

    return out;
}

// Input operator overloading (implementation)
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
    workPlaces->addElemEnd<WorkPlace>(place);
}

void Human::printWorkPlaces() {
    workPlaces->print<WorkPlace>();
}