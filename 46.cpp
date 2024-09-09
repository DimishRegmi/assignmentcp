#include <iostream>
#include <string>

using namespace std;

// Function to remove a specific character from a string
string removeChar(const string &str, char c)
{
    string result;
    for (char ch : str)
    {
        if (ch != c)
        {
            result += ch;
        }
    }
    return result;
}

int main()
{
    // Test cases
    cout << removeChar("Filename", 'e') << endl;         // Output: "Filnam"
    cout << removeChar("Compilation Time", 'i') << endl; // Output: "Complaton Tme"

    return 0;
}