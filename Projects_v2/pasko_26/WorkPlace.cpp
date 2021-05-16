#include <iostream>
#include "WorkPlace.h"

using namespace std;

// Перегрузка оператора вывода (реализация)
ostream& operator<< (ostream& out, const WorkPlace& place)
{
    out << "Work place: " << place.name << ", " << place.salary << endl;

    return out;
}