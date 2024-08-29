#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Input a number to find the last prime number occurs before the number: ";
    cin >> num;

    int lastPrime = -1;
    for (int i = num - 1; i >= 2; i--) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            lastPrime = i;
            break;
        }
    }

    if (lastPrime != -1) {
        cout << lastPrime << " is the last prime number before " << num << endl;
    } else {
        cout << "No prime number found before " << num << endl;
    }

    return 0;
}