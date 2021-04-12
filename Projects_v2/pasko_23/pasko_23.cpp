// pasko_23.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Student.h"

// Заменили методы ниже (наследование)
void showHumanHours(Human* human) {
    cout << human->getTime() << endl; // разный способ возврата времени через одну функцию (полиморфизм)
}

//void showHours(Worker* worker) {
//    cout << worker->getTime() << endl;
//}

//void showHours(UnrealWorker* unWork) {
//    cout << unWork->getTime() << endl;
//}


int main()
{
    //=================== Пример 1 ====================

    Worker* worker = new Worker(150, 160);
    worker->setTime(8);

    UnrealWorker* unWorker = new UnrealWorker(40, 160);
    unWorker->setTime(8);

    showHumanHours(worker);
    showHumanHours(unWorker);

    //=================== Пример 2 ====================
    
    Student* student = new Student;

    string name;
    string last_name;

    // Ввод имени с клавиатуры
    cout << "Name: ";
    getline(std::cin, name);

    // Сохранение имени и фамилии в объект класса Students
    student->setName(name);

    cout << student->getName();
}