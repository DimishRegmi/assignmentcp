#include <iostream>
using namespace std;

int main()
{
    int num, reversedNum = 0;
    cout << "Input a number: ";
    cin >> num;

    int originalNum = num;

    while (num != 0)
    {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    cout << "The number " << originalNum << " in reverse order is: " << reversedNum << endl;

    return 0;
}