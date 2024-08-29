#include <iostream>
using namespace std;

int singleDigit(int n) {
    while (n > 9) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    return n;
}

int main() {
    int num;
    cout << "Enter a non-negative number: ";
    cin >> num;

    if (num < 0) {
        cout << "Error: Input should be a non-negative number." << endl;
    } else {
        int result = singleDigit(num);
        cout << "Single digit result: " << result << endl;
    }

    return 0;
}