#include <stdlib.h>

#include "ListProcessor.h"


List* init(int a)  // а - значение первого узла
{
	List* lst;
	// выделение памяти под корень списка
	lst = (List*)malloc(sizeof(List));

	lst->Field = a;
	lst->Next = NULL; // указатель на следующий узел
	lst->Prev = NULL; // указатель на предыдущий узел

	return lst;
}

List* addElemStart(List* lst, int number)
{
	List* temp, * p;

	temp = (List*)malloc(sizeof(List));
	p = lst->Next; // сохранение указателя на следующий узел

	lst->Next = temp; // предыдущий узел указывает на создаваемый
	temp->Field = number; // сохранение поля данных добавляемого узла
	temp->Next = p; // созданный узел указывает на следующий узел
	temp->Prev = lst; // созданный узел указывает на предыдущий узел

	if (p != NULL)
	{
		p->Prev = temp;
	}

	return temp;
}

List* addElemEnd(List* lst, int number)
{
	List* newElem;
	newElem = (List*)malloc(sizeof(List));

	newElem->Field = number; // сохранение поля данных добавляемого узла
	newElem->Prev = lst; // созданный узел указывает на предыдущий узел
	newElem->Next = NULL;

	return newElem;
}