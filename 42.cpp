#include <iostream>
#include <string>
using namespace std;

// Function to reverse a string using recursion
void reverseString(string str, int start, int end)
{
    // Base case: if start is greater than or equal to end, return
    if (start >= end)
    {
        return;
    }

    // Swap the characters at start and end indices
    swap(str[start], str[end]);

    // Recursive call with updated start and end indices
    reverseString(str, start + 1, end - 1);
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int start = 0;
    int end = str.length() - 1;

    cout << "Original string: " << str << endl;

    // Call the reverseString function
    reverseString(str, start, end);

    cout << "Reversed string: " << str << endl;

    return 0;
}