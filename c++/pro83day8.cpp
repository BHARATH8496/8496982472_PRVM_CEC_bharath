/*A neon number is a number where the sum of digits of square of the number is equal to the number.

Input: 9

Output: Neon Number

Explanation: square is 99 81 and sum of the digits of the square is 9.

Input :12

Output: Not a Neon Number

Explanation: square is 12 12 144 and sum of the digits of the square is 9 (1 +4+4) which is not equal to 12.*/
#include <iostream>

int main() {
    int num, square, sum = 0;

    
    std::cout << "Enter a number: ";
    std::cin >> num;

    
    square = num * num;

   
    while (square != 0) {
        sum += square % 10;
        square /= 10;
    }

    
    if (sum == num) {
        std::cout << num << " is a neon number." << std::endl;
    } else {
        std::cout << num << " is not a neon number." << std::endl;
    }

    return 0;
}