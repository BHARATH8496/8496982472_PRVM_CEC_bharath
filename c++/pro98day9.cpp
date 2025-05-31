//find leap years in a range//
#include <iostream>
using namespace std;

int main() 
{
    int start, end;
    cout << "Enter the start year: ";
    cin >> start;
    cout << "Enter the end year: ";
    cin >> end;

    cout << "Leap years between " << start << " and " << end << " are:" << endl;
    for (int year = start; year <= end; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            cout << year << " ";
        }
    }
    cout << endl;

    return 0;
}