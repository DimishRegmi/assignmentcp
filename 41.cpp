#include <iostream>
using namespace std;

// Function to calculate the sum of an array using recursion
int sumArray(int arr[], int n)
{
    // Base case: if n is 0, return 0
    if (n == 0)
    {
        return 0;
    }

    // Recursive case: return the current element plus the sum of the rest of the array
    return arr[0] + sumArray(arr + 1, n - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int sum = sumArray(arr, n);
    cout << "Sum of array elements: " << sum << endl;

    return 0;
}