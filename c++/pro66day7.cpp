/*1. Shape Area Calculator Using Inheritance:
===========================================
Create a base class named "Shape"
Include a method named calculateArea() that outputs a general message like:
"Area not defined for generic shape."

2. Create the following derived classes:
Circle:
=======
Data member(private): radius
Override calculateArea() to compute area using π × radius²

Rectangle:
==========
Data members(private): length, width
Override calculateArea() to compute area using length × width

Triangle:
=========
Data members(private): base, height
Override calculateArea() to compute area using 0.5 × base × height

3. Constructor(public):
Each derived class must include a constructor to initialize its data members.

4. In the main() function:
Create one object of each shape.
Call their calculateArea() method to print the area.*/
#include <iostream>
using namespace std;
class Circle {
private:
    float radius;
public:
    void setRadius(float r) {
        radius = r;
    }
    void area() {
        cout << "area of circle: " << 3.14 * radius * radius << endl;
    }
};
class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    double CalculateArea() {
        return length * width;
    }
};

class Triangle {
private:
    double base;
    double height;
public:
    Triangle(double b, double h) {
        base = b;
        height = h;
    }
    double CalculateArea() {
        return 0.5 * base * height;
    }
};

int main() {
    Circle c;
    c.setRadius(5);
    c.area();
    Rectangle r(5, 4);
    Triangle t(6, 8);
    cout << "area of rectangle: " << r.CalculateArea() << endl;
    cout << "area of triangle: " << t.CalculateArea() << endl;
 return 0;
}