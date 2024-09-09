#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Input number of terms: ";
    cin >> num;

    int sum = 0;
    cout << "The series is: ";
    for (int i = 1; i <= num; i++)
    {
        int term = 0;
        for (int j = 0; j < i; j++)
        {
            term = term * 10 + 1;
        }
        sum += term;
        cout << term;
        if (i < num)
        {
            cout << " + ";
        }
    }
    cout << endl;
    cout << "The sum of the series is: " << sum << endl;

    return 0;
}