#include <iostream>
using namespace std;

int main() {
    int mark1, mark2, mark3, total;
    float average;
    char grade;

    cout << "*************************************************************************************************************************" << endl;
    cout << "                                          cec college                                                        " << endl;
    cout << "********************************************************************************************************************" << endl;
    cout << "Name: " << "bharath" << std::endl;
   cout << "Your Branch: " << "ise" << std::endl;
   cout << "year: " << "1st" << std::endl;
    cout << "Sem: " << "2nd" << std::endl;
    cout << "Collage: " << "cec" << std::endl;
    cout << "***************************************************************************************************************" << endl;
    cout << "Enter subject marks 1: ";
    cin >> mark1;
    cout << "Enter subject marks 2: ";
    cin >> mark2;
    cout << "Enter subject marks 3 : ";
   cin >> mark3;
    cout << "*****************************************************************************************************************" << endl;
     // Calculate total and average
    total = mark1 + mark2 + mark3;
    average = total / 3.0;

    // Determine grade
    if (average >= 90) {
        grade = 'A';
    } else if (average >= 70) {
        grade = 'B';
    } else if (average >= 50) {
        grade = 'C';
    } else {
        grade = 'F';
    }

    // Output results
    cout << "\nTotal Marks = " << total << endl;
    cout << "Average = " << average << endl;
    cout << "Grade = " << grade << endl;
    cout << "*************************************************************************************************************" << endl;
return 0;
}