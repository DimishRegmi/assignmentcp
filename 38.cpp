#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Sort the array in ascending order
    sort(arr, arr + n);

    // Find the second lowest number
    int secondLowest = arr[1];

    // Find the second highest number
    int secondHighest = arr[n - 2];

    cout << "Second lowest number: " << secondLowest << endl;
    cout << "Second highest number: " << secondHighest << endl;

    return 0;
}