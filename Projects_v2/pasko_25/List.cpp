#include "List.h"


Node* List::init(Human* a)  // � - �������� ������� ����
{
	Node* lst;
	// ��������� ������ ��� ������ ������
	lst = (Node*)malloc(sizeof(Node));

	lst->Data = a;
	lst->Next = NULL; // ��������� �� ��������� ����
	lst->Prev = NULL; // ��������� �� ���������� ����

	head = lst;

	return lst;
}

Node* List::addElemEnd(Human* human)
{
	Node* newElem;
	newElem = (Node*)malloc(sizeof(Node));
	newElem->Data = human; // ���������� ���� ������ ������������ ����	
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

Human* List::operator[] (const int index)
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