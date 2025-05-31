//To convert temperature from Celsius (°C) to Fahrenheit (°F), you can use the following formula://
#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9.0 / 5) + 32;

    cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;

    return 0;
}