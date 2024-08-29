#include <iostream>
using namespace std;

int sqrtInteger(int n) {
    if (n < 0) {
        throw runtime_error("Input should be a non-negative integer.");
    }

    int sqrt = 0;
    while ((sqrt + 1) * (sqrt + 1) <= n) {
        sqrt++;
    }
    return sqrt;
}

int main() {
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;

    try {
        int result = sqrtInteger(num);
        cout << "Square root of " << num << " = " << result << endl;
    } catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}