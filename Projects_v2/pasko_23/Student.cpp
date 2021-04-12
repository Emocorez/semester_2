#include <string>
#include "Student.h"

// Получение имени студента
std::string Student::getName()
{
    return Student::_name;
}

// Установка имени студента
void Student::setName(std::string name)
{
    Student::_name = name;
}