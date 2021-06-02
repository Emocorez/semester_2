#pragma once

template <typename T>
class Node {
public:
	T* Data; // data field

	Node<T>* Next; // pointer to the next node
	Node<T>* Prev; // pointer to the previous node
};