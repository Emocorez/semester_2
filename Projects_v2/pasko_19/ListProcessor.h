#pragma once
#include "List.cpp"

// Инициализация 
List* init(int a);

// Добавление узла в начало
List* addElemStart(List* lst, int number);

// Добавление узла в конец
List* addElemEnd(List* lst, int number);

// Удаление узла
List* deleteElem(List* lst);

// Вывод элементов
void printList(List* lst);