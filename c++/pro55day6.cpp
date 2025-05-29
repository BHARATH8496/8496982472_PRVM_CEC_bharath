// student roll name //
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    Student(string studentName, int rollNum) : name(studentName), rollNumber(rollNum) {}
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }

private:
    string name;
    int rollNumber;
};

int main() {
    Student student1("jani juli", 21);
    student1.display();
 return 0;
}
//the output of this code will be:
//name: jani jani
//roll number: 21
