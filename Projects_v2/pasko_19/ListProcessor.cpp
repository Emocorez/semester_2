#include <stdlib.h>

#include "ListProcessor.h"


List* init(int a)  // � - �������� ������� ����
{
	List* lst;
	// ��������� ������ ��� ������ ������
	lst = (List*)malloc(sizeof(List));

	lst->Field = a;
	lst->Next = NULL; // ��������� �� ��������� ����
	lst->Prev = NULL; // ��������� �� ���������� ����

	return lst;
}

List* addElemStart(List* lst, int number)
{
	List* temp, * p;

	temp = (List*)malloc(sizeof(List));
	p = lst->Next; // ���������� ��������� �� ��������� ����

	lst->Next = temp; // ���������� ���� ��������� �� �����������
	temp->Field = number; // ���������� ���� ������ ������������ ����
	temp->Next = p; // ��������� ���� ��������� �� ��������� ����
	temp->Prev = lst; // ��������� ���� ��������� �� ���������� ����

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

	newElem->Field = number; // ���������� ���� ������ ������������ ����
	newElem->Prev = lst; // ��������� ���� ��������� �� ���������� ����
	newElem->Next = NULL;

	return newElem;
}