#include "List.h"
#include <iostream>

using namespace std;

Node* List::init(WorkPlace* item)  // � - �������� ������� ����
{
	Node* lst;
	// ��������� ������ ��� ������ ������
	lst = (Node*)malloc(sizeof(Node));

	lst->Data = item;
	lst->Next = NULL; // ��������� �� ��������� ����
	lst->Prev = NULL; // ��������� �� ���������� ����

	head = lst;

	return lst;
}

Node* List::addElemEnd(WorkPlace* item)
{
	Node* newElem;
	newElem = (Node*)malloc(sizeof(Node));
	newElem->Data = item; // ���������� ���� ������ ������������ ����	
	newElem->Next = NULL;

	if (head == NULL)     //���� ������� ������ ����
	{
		head = newElem;
	}
	else {
		Node* current = head;

		//���� � ����� �������������� ���������� ����
		while (current->Next != NULL)
		{
			current = current->Next;
		}			

		//�������������� ��������� �� ���������
		current->Next = newElem;
	}	

	return newElem;
}

void List::print()
{
	Node* current = head;

	while (current != NULL)
	{
		cout << (*current->Data) << endl;
		current = current->Next;
	}
}

WorkPlace* List::operator[] (const int index)
{
	Node* current = head;

	for (int i = 0; i <= index; i++)
	{		
		if (i != index)
			current = current->Next;
		else
			return current->Data;
	}   
}