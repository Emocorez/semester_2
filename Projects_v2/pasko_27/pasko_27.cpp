// pasko_27.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// Base class
class Shape {
public:
    // virtual function
    virtual int getArea() = 0;

    void setWidth(int w) {
        width = w;
    }

    void setHeight(int h) {
        height = h;
    }

protected:
    int width;
    int height;
};

// Derived classes
class Rectangle : public Shape {
public:
    int getArea() {
        return (width * height);
    }
};

class Triangle : public Shape {
public:
    int getArea() {
        return (width * height) / 2;
    }
};

int main()
{
    Rectangle Rect;
    Triangle  Tri;

    Rect.setWidth(5);
    Rect.setHeight(7);

    // Print the area of the Rectangle
    cout << "Total Rectangle area: " << Rect.getArea() << endl;

    Tri.setWidth(5);
    Tri.setHeight(7);

    // Print the area of the Triangle
    cout << "Total Triangle area: " << Tri.getArea() << endl;
}
