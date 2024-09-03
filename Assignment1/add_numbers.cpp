#include <iostream>

int main() {
    int num1, num2, sum;

    // Input two integers
    std::cout << "Enter first integer: ";
    std::cin >> num1;

    std::cout << "Enter second integer: ";
    std::cin >> num2;

    // Add the two integers
    sum = num1 + num2;

    // Output the result
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
