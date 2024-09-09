#include <iostream>
#include <vector>
using namespace std;

void findRepeatingElements(int arr[], int n)
{
    vector<int> repeatingElements;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j] && find(repeatingElements.begin(), repeatingElements.end(), arr[i]) == repeatingElements.end())
            {
                repeatingElements.push_back(arr[i]);
                if (repeatingElements.size() == 2)
                {
                    break;
                }
            }
        }
        if (repeatingElements.size() == 2)
        {
            break;
        }
    }

    cout << "First repeating element: " << repeatingElements[0] << endl;
    cout << "Second repeating element: " << repeatingElements[1] << endl;
}

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

    findRepeatingElements(arr, n);

    return 0;
}