// Calling operator[] issue: https://stackoverflow.com/questions/9957936/c-array-subscript-operator-template
// More info:
// https://isocpp.org/wiki/faq/templates#templates-defn-vs-decl
// https://stackoverflow.com/questions/115703/storing-c-template-function-definitions-in-a-cpp-file

#include <iostream>
#include "List.h"
#include "Human.h"

using namespace std;

int main()
{
	WorkPlace* place = new WorkPlace("Job 1", 100);
	WorkPlace* place1 = new WorkPlace("Job 2", 500);

	List<WorkPlace>* lst = new List<WorkPlace>();
	lst->init(place);

	lst->addElemEnd(place1);

	WorkPlace* first = (*lst).operator[](1);

	cout << "Second place: " << (*first) << endl;

	cout << "\nAll items:" << endl;
	lst->print();

	// Create human and print work places

	Human* human = new Human(5, 10, "Jake", lst);
	cout << "\nHuman workplaces:" << endl;
	human->printWorkPlaces();
}

