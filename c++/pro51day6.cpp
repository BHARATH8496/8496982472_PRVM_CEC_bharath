#include <iostream>
using namespace std;
class Polygon// Declaration of base class.
{
public:
    int a;
    int b;
    void get_data(int n,int m)
    {
        a= n;
        b = m;
    }
};
class Rectangle: public Polygon // inheriting Polygon class
{
public:
    int area()
    {
        int result = a*b;
        return result;
    }
};
class Triangle: public Polygon // inheriting Polygon class
{
public:
    int area()
    {
    float result = 0.5*a*b; 
        return result;
    }
};
nt main() {
    Rectangle r;
    Triangle t;
    float length, breadth, base, height;

    std::cout << "Enter the length and breadth of a rectangle: " << std::endl;
    std::cin >> length >> breadth;
    r.set_data(length, breadth);
    float area_r = r.area();
    std::cout << "Area of the rectangle is: " << area_r << std::endl;

    std::cout << "Enter the base and height of the triangle: " << std::endl;
    std::cin >> base >> height;
    t.set_data(base, height);
    float area_t = t.area();
    std::cout << "Area of the triangle is: " << area_t << std::endl;

 return 0;
}