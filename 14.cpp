#include <iostream>
using namespace std;

int productOfDigits(int num) {
    int product = 1;
    while (num != 0) {
        int digit = num % 10;
        product *= digit;
        num /= 10;
    }
    return product;
}

int main() {
    int num;
    cout << "Input a number: ";
    cin >> num;

    int product = productOfDigits(num);
    cout << "The product of digits of " << num << " is: " << product << endl;

    return 0;
}