#include <iostream>
#include "WorkPlace.h"

using namespace std;

// Output operator overload (implementation)
ostream& operator<< (ostream& out, const WorkPlace& place)
{
    out << "Work place: " << place.name << ", " << place.salary << endl;

    return out;
}