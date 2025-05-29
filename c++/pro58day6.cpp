//6. Object with Multiple Functions Create a class Circle with a private radius and public functions to input the radius and calculate the area.//
#include <iostream>
#include <cmath>

class Circle {
private:
    double radius;
public:
    void setRadius(double r) {
     radius = r;
    }
    double getArea() {
     return M_PI * radius * radius;
    }
};

int main() {
    Circle c;
    double r;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> r;
    c.setRadius(r);
    std::cout << "The area of the circle is: " << c.getArea() << std::endl;
    return 0;
}