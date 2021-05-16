#pragma once
#include "Human.h"

class Node {
public:
	Human* Data; // поле данных

	Node* Next; // указатель на следующий элемент
	Node* Prev; // указатель на предыдущий элемент
};