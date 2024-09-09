#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Input the number of terms: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        int cube = i * i * i;
        cout << "Number is: " << i << " and the cube of " << i << " is: " << cube << endl;
    }

    return 0;
}