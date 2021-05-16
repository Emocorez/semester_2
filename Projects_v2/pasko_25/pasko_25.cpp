// pasko_25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "List.h"

int main()
{
	Human* human = new Human(10, 15,"Andrii");
	Human* human1 = new Human(10, 20, "Oleg");

	List* lst = new List();
	lst->init(human);

	lst->addElemEnd(human1);

	Human* first = (*lst)[1];

	cout << "Second item hourly wage: " << (*first) << endl;

	cout << "\nAll items:" << endl;
	lst->print();

	return 0;
}
