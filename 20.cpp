#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int decimal;
    cout << "Input a decimal number: ";
    cin >> decimal;

    cout << "The hexadecimal number is: ";
    cout << hex << uppercase << decimal << endl;

    return 0;
}