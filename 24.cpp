#include <iostream>
using namespace std;

void printFibonacci(int n)
{
    int t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Here is the Fibonacci series upto " << n << " terms:" << endl;
    for (int i = 1; i <= n; ++i)
    {
        if (i == 1)
        {
            cout << t1 << " ";
            continue;
        }
        if (i == 2)
        {
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm << " ";
    }
    cout << endl;
}

int main()
{
    int num;
    cout << "Input number of terms to display: ";
    cin >> num;
    printFibonacci(num);
    return 0;
}