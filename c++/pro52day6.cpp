//person age , name//
#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;

    void set_values(std::string person_name, int person_age) {
        name = person_name;
        age = person_age;
    }

    void display() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

int main() {
    Person person1;
    person1.set_values("bk", 19);
    person1.display();
 return 0;
}