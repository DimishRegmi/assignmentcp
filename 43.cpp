#include <iostream>
#include <string>
using namespace std;

// Function to check if all letters in str2 appear in str1
bool checkLetters(string str1, string str2)
{
    // Convert both strings to lowercase
    for (int i = 0; i < str1.length(); i++)
    {
        str1[i] = tolower(str1[i]);
    }
    for (int i = 0; i < str2.length(); i++)
    {
        str2[i] = tolower(str2[i]);
    }

    // Iterate over each character in str2
    for (int i = 0; i < str2.length(); i++)
    {
        // Check if the character appears in str1
        bool found = false;
        for (int j = 0; j < str1.length(); j++)
        {
            if (str2[i] == str1[j])
            {
                found = true;
                break;
            }
        }
        // If the character does not appear in str1, return false
        if (!found)
        {
            return false;
        }
    }
    // If all characters in str2 appear in str1, return true
    return true;
}

int main()
{
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    cout << "Original String elements: " << str1 << " " << str2 << endl;

    bool result = checkLetters(str1, str2);
    cout << "Check - First string contains all letters from second string: " << (result ? "true" : "false") << endl;

    return 0;
}