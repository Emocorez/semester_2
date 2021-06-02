#pragma once
#include <iostream>
#include "Node.h"

template <typename T>
class List
{
private:
	Node<T>* head; // "head" of linked list
public:

	List() 
	{
		head == NULL;
	}

	template <typename T>
	Node<T>* init(T* item)  // à - value of first node
	{
		Node<T>* lst;
		// memory allocation for list
		lst = (Node<T>*)malloc(sizeof(Node<T>));

		lst->Data = item;
		lst->Next = NULL; // pointer to the next node
		lst->Prev = NULL; // pointer to the previous node

		head = lst;

		return lst;
	}


	template<typename T>
	void print()
	{
		Node<T>* current = head;

		while (current != NULL)
		{
			std::cout << (*current->Data) << std::endl;
			current = current->Next;
		}
	}

	template <typename T>
	Node<T>* addElemEnd(T* item)
	{
		Node<T>* newElem;
		newElem = (Node<T>*)malloc(sizeof(Node<T>));
		newElem->Data = item; // save new node
		newElem->Next = NULL;
	
		if (head == NULL)     // if creating the new node
		{
			head = newElem;
		}
		else {
			Node<T>* current = head;
	
			// search for previous before last node
			while (current->Next != NULL)
			{
				current = current->Next;
			}			
	
			// previous points to the last
			current->Next = newElem;
		}	
	
		return newElem;
	}

	template <typename T>
	T* operator[] (const int index)
	{
		Node<T>* current = head;
	
		for (int i = 0; i <= index; i++)
		{		
			if (i != index)
				current = current->Next;
			else
				return current->Data;
		}   
	}
};