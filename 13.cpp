#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int countPrimes(int n) {
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime(i)) count++;
    }
    return count;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num <= 0) {
        cout << "Error: Input should be a positive integer." << endl;
        return 1;
    }

    int primeCount = countPrimes(num);
    cout << "Number of prime numbers less than " << num << " is " << primeCount << endl;

    return 0;
}