// to convert  Fahrenheit ('F) to celsius ('c), you can use the following formula:
#include <iostream>
using namespace std;

int main() {
    float fahrenheit, celsius;

    // Input from user
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    // Conversion logic
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    // Output result
    cout << "Temperature in Celsius: " << celsius << "°C" << endl;

    return 0;
}