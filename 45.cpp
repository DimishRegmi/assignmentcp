#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Function to find the second largest element in an array
int findSecondLargest(const vector<int> &arr)
{
    if (arr.size() < 2)
    {
        throw runtime_error("Array must have at least two elements");
    }

    // Initialize the maximum and second maximum values
    int max = arr[0];
    int secondMax = INT_MIN;

    // Iterate over the array
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }

    if (secondMax == INT_MIN)
    {
        throw runtime_error("Array must have at least two distinct elements");
    }

    // Return the second largest element
    return secondMax;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Array size must be greater than 0" << endl;
        return 1;
    }

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    try
    {
        int secondLargest = findSecondLargest(arr);
        cout << "The second largest element in the array is: " << secondLargest << endl;
    }
    catch (const exception &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}