#include <iostream>
using namespace std;

int main() {
    int decimal;
    cout << "Input a decimal number: ";
    cin >> decimal;

    cout << "The binary number is: ";

    while (decimal > 0) {
        if (decimal % 2 == 0) {
            cout << 0;
        } else {
            cout << 1;
        }
        decimal /= 2;
    }

    cout << endl;

    return 0;
}