//6. Object with Multiple Functions Create a class Circle with a private radius and public functions to input the radius and calculate the area.//
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
        cout << "Area: " << 3.14 * radius * radius << endl;
    }
};

int main() {
    Circle c;
    c.setRadius(5);
    c.area();
    return 0;
}