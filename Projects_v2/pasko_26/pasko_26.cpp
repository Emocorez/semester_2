// pasko_26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "List.h"
#include "Human.h"

using namespace std;

int main()
{
	// Create work places and print them

	WorkPlace* place = new WorkPlace("Job 1", 100);
	WorkPlace* place1 = new WorkPlace("Job 2", 500);

	List* lst = new List(); 
	lst->init(place);

	lst->addElemEnd(place1);

	WorkPlace* first = (*lst)[1];

	cout << "Second place: " << (*first) << endl;

	cout << "\nAll items:" << endl;
	lst->print();

	// Create human and print work places

	Human* human = new Human(5, 10, "Jake", lst);
	cout << "\nHuman workplaces:" << endl;
	human->printWorkPlaces();

	return 0;
}
