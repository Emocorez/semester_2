#include <string>
#include <iostream>

using namespace std;

class Human {
protected:
    int weight;
    int height;
    string name;
    int hours;

public:

    // �����������
    Human() 
    {
        weight = 0;
        height = 0;
        hours = 0;
        name = "No name yet";
    }

    // ����������� � �����������
    Human(int setWeight, int setHeight) 
    {
        weight = setWeight;
        height = setHeight;
        hours = 0;
    }

    // ����������� �����������
    Human(Human &human)
    : weight(human.weight), height(human.height)
    {
        hours = 0;
    }

    // ����������
    ~Human() 
    {
        //������� ������: delete ...
    }    

    // ������ (����������)
    int getTime(); 

    // ������ (����������)
    void setTime(int hoursToSet);

    // ���������� ��������� ������ (����������)
    friend ostream& operator<< (ostream& out, const Human& human);
    
    // ���������� ��������� ����� (����������)
    friend istream& operator>> (std::istream& in, Human& human);
};
