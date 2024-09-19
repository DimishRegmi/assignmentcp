// Find the largest number in the array using a user defined func
#include <iostream>
using namespace std;

float findLargest(float arr[], int n)
{
    float max = arr[0];
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    float arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Number " << i + 1 << " : ";
        cin >> arr[i];
    }

    float largest = findLargest(arr, n);
    cout << "Largest element = " << largest << endl;

    return 0;
}