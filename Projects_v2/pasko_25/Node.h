#pragma once
#include "Human.h"

class Node {
public:
	Human* Data; // ���� ������

	Node* Next; // ��������� �� ��������� �������
	Node* Prev; // ��������� �� ���������� �������
};