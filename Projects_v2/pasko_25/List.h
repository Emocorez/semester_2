#pragma once
#include "Node.h"

class List
{
private:
	Node* head; //"������" ���������� ������ 
public:
	List() 
	{
		head == NULL;
	}

	Node* init(Human* a);

	void print();

	Node* addElemEnd(Human* human);

	Human* operator[] (const int index);
};