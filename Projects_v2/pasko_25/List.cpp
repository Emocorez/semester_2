#include "List.h"


Node* List::init(Human* a)  // а - значение первого узла
{
	Node* lst;
	// выделение памяти под корень списка
	lst = (Node*)malloc(sizeof(Node));

	lst->Data = a;
	lst->Next = NULL; // указатель на следующий узел
	lst->Prev = NULL; // указатель на предыдущий узел

	head = lst;

	return lst;
}

Node* List::addElemEnd(Human* human)
{
	Node* newElem;
	newElem = (Node*)malloc(sizeof(Node));
	newElem->Data = human; // сохранение поля данных добавляемого узла	
	newElem->Next = NULL;

	if (head == NULL)     //если создаем первый узел
	{
		head = newElem;
	}
	else {
		Node* current = head;

		//ищем в цикле предшествующий последнему узел
		while (current->Next != NULL)
		{
			current = current->Next;
		}			

		//предшествующий указывает на последний
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