#pragma once
#include "Node.h"
#include "WorkPlace.h"

class List
{
private:
	Node* head; //"������" ���������� ������ 
public:

	List() 
	{
		head == NULL;
	}

	Node* init(WorkPlace* item);

	void print();

	Node* addElemEnd(WorkPlace* item);

	WorkPlace* operator[] (const int index);
};