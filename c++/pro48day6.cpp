//employee id , name, salary//
#include <iostream>
using namespace std;
class Employee {
public:
    int id;     
    string name; 
    float salary;

    Employee(int i, string n, float s) {
        id = i;
        name = n;
        salary = s;
    }

    void display() {
        cout << id << " " << name << " " << salary << endl;
    }
};
int main(void) {
    Employee e1 = Employee(101, "boom", 890000); 
    Employee e2 = Employee(102, "rohit", 59000);
    e1.display();
    e2.display();
return 0;
}