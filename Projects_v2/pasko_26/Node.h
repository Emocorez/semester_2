#pragma once
#include "WorkPlace.h"

class Node {
public:
	WorkPlace* Data; // поле данных

	Node* Next; // указатель на следующий элемент
	Node* Prev; // указатель на предыдущий элемент
};