#include <string>
#include "Student.h"

// ��������� ����� ��������
std::string Student::getName()
{
    return Student::_name;
}

// ��������� ����� ��������
void Student::setName(std::string name)
{
    Student::_name = name;
}