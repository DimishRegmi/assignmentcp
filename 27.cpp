#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input number of terms to display: ";
    cin >> n;

    cout << "Here is the Fibonacci series upto to " << n << " terms:" << endl;

    int t1 = 0, t2 = 1;
    cout << t1 << " " << t2 << " ";

    for (int i = 3; i <= n; i++)
    {
        int nextTerm = t1 + t2;
        cout << nextTerm << " ";
        t1 = t2;
        t2 = nextTerm;
    }

    cout << endl;

    return 0;
}