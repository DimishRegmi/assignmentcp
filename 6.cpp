#include <iostream>

using namespace std;

int main() {
    int num1, num2, sum;
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    sum = num1 + num2;

    cout << "The sum is: " << sum << endl;

    int count = 0;
    while (sum != 0) {
        sum /= 10;
        count++;
    }

    cout << "The number of digits in the sum is: " << count << endl;

    return 0;
}