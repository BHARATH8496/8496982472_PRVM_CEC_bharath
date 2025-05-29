/*1.1. Shape Area Calculator Using Inheritance:
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
#include <cmath> // For M_PI constant

using namespace std;

// Base class
class Shape {
public:
    virtual void calculateArea() {
        cout << "Area not defined for generic shape." << endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void calculateArea() override {
        double area = M_PI * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    void calculateArea() override {
        double area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};

// Derived class: Triangle
class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    void calculateArea() override {
        double area = 0.5 * base * height;
        cout << "Area of Triangle: " << area << endl;
    }
};

// Main function
int main() {
    Shape shape;
    Circle circle(5.0);         // radius = 5.0
    Rectangle rectangle(4.0, 6.0); // length = 4.0, width = 6.0
    Triangle triangle(3.0, 7.0);   // base = 3.0, height = 7.0

    cout << "Generic Shape:" << endl;
    shape.calculateArea();
    cout << "\nCircle:" << endl;
    circle.calculateArea();
    cout << "\nRectangle:" << endl;
    rectangle.calculateArea();
    cout << "\nTriangle:" << endl;
    triangle.calculateArea();

    return 0;
}
