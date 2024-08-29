#include <iostream>
using namespace std;

int main() {
    int num, temp, digits = 0, firstDigit, lastDigit, multiplier = 1;

    // Get user input for a number
    cout << "Input any number: ";
    cin >> num;

    // Store the original number
    temp = num;

    // Count the number of digits
    while (temp != 0) {
        temp /= 10;
        digits++;
        multiplier *= 10;
    }

    // Calculate the first digit
    firstDigit = num / (multiplier / 10);

    // Calculate the last digit
    lastDigit = num % 10;

    // Remove the first and last digits
    num = num % (multiplier / 10);
    num = num / 10;

    // Swap the first and last digits
    num = num * 10 + lastDigit;
    num = num * (multiplier / 10) + firstDigit;

    // Print the result
    cout << "The number after swapping the first and last digits are: " << num << endl;

    return 0;
}