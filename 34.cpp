#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Input number of rows : ";
    cin >> rows;

    for (int i = rows; i >= 1; i--)
    {
        int num = 1;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j <= i)
            {
                cout << num << "";
                num++;
            }
            else
            {
                cout << num - 2 << "";
                num--;
            }
        }
        cout << endl;
    }

    return 0;
}