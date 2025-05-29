//name age //
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person p;
    p.name = "Alice";
    p.age = 25;
    p.display();
 return 0;
}