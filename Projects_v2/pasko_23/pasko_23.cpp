// pasko_23.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Student.h"

// �������� ������ ���� (������������)
void showHumanHours(Human* human) {
    cout << human->getTime() << endl; // ������ ������ �������� ������� ����� ���� ������� (�����������)
}

//void showHours(Worker* worker) {
//    cout << worker->getTime() << endl;
//}

//void showHours(UnrealWorker* unWork) {
//    cout << unWork->getTime() << endl;
//}


int main()
{
    //=================== ������ 1 ====================

    Worker* worker = new Worker(150, 160);
    worker->setTime(8);

    UnrealWorker* unWorker = new UnrealWorker(40, 160);
    unWorker->setTime(8);

    showHumanHours(worker);
    showHumanHours(unWorker);

    //=================== ������ 2 ====================
    
    Student* student = new Student;

    string name;
    string last_name;

    // ���� ����� � ����������
    cout << "Name: ";
    getline(std::cin, name);

    // ���������� ����� � ������� � ������ ������ Students
    student->setName(name);

    cout << student->getName();
}