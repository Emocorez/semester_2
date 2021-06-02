#pragma once

#include <string>
using namespace std;

class WorkPlace {
public:
	string name;
	int salary;

	WorkPlace() 
	{
		name = "";
		salary = 0;
	}

	WorkPlace(string setName, int setSalary) 
	{
		name = setName;
		salary = setSalary;
	}

	// Output operator overload (declaration)
	friend ostream& operator<< (ostream& out, const WorkPlace& place);
};