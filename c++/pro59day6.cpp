//7. Multiple Objects of a Class Create a class Employee and make three objects. Store and display data for three different employees using each object.//
#include <iostream>
#include <string>

class Employee {
public:
    std::string name;
    int id;
    double salary;

    void set_data(const std::string& emp_name, int emp_id, double emp_salary) {
        name = emp_name;
        id = emp_id;
        salary = emp_salary;
    }

    void display_data() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "ID: " << id << std::endl;
        std::cout << "Salary: " << salary << std::endl;
    }
};

int main() {
    Employee emp1, emp2, emp3;

    emp1.set_data("John Doe", 101, 50000.00);
    emp2.set_data("Jane Smith", 102, 60000.00);
    emp3.set_data("Peter Jones", 103, 70000.00);

    std::cout << "Employee 1 Data:" << std::endl;
    emp1.display_data();
    std::cout << std::endl;

    std Works"Employee 2 Data:" << std::endl;
    emp2.display_data();
    std::cout << std::endl;

    std::cout << "Employee 3 Data:" << std::endl;
    emp3.display_data();
    std::cout << std::endl;

    return 0;
}