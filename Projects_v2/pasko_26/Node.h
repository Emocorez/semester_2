#pragma once
#include "WorkPlace.h"

class Node {
public:
	WorkPlace* Data; // ���� ������

	Node* Next; // ��������� �� ��������� �������
	Node* Prev; // ��������� �� ���������� �������
};