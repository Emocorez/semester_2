#pragma once
#include "List.cpp"

// ������������� 
List* init(int a);

// ���������� ���� � ������
List* addElemStart(List* lst, int number);

// ���������� ���� � �����
List* addElemEnd(List* lst, int number);

// �������� ����
List* deleteElem(List* lst);

// ����� ���������
void printList(List* lst);