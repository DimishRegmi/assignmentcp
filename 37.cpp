#include <iostream>
#include <string>
using namespace std;

// Function to convert a single digit into English word
string digitToWord(int digit)
{
    switch (digit)
    {
    case 0:
        return "Zero";
    case 1:
        return "One";
    case 2:
        return "Two";
    case 3:
        return "Three";
    case 4:
        return "Four";
    case 5:
        return "Five";
    case 6:
        return "Six";
    case 7:
        return "Seven";
    case 8:
        return "Eight";
    case 9:
        return "Nine";
    default:
        return "";
    }
}

// Function to convert a number from 10 to 19 into English word
string teenToWord(int num)
{
    switch (num)
    {
    case 10:
        return "Ten";
    case 11:
        return "Eleven";
    case 12:
        return "Twelve";
    case 13:
        return "Thirteen";
    case 14:
        return "Fourteen";
    case 15:
        return "Fifteen";
    case 16:
        return "Sixteen";
    case 17:
        return "Seventeen";
    case 18:
        return "Eighteen";
    case 19:
        return "Nineteen";
    default:
        return "";
    }
}

// Function to convert a number from 20 to 99 into English word
string tensToWord(int num)
{
    switch (num / 10)
    {
    case 2:
        return "Twenty";
    case 3:
        return "Thirty";
    case 4:
        return "Forty";
    case 5:
        return "Fifty";
    case 6:
        return "Sixty";
    case 7:
        return "Seventy";
    case 8:
        return "Eighty";
    case 9:
        return "Ninety";
    default:
        return "";
    }
}

// Function to convert a non-negative integer into English words
string intToWord(int num)
{
    if (num < 10)
    {
        return digitToWord(num);
    }
    else if (num < 20)
    {
        return teenToWord(num);
    }
    else if (num < 100)
    {
        string tens = tensToWord(num);
        if (num % 10 != 0)
        {
            return tens + " " + digitToWord(num % 10);
        }
        else
        {
            return tens;
        }
    }
    else
    {
        // Handle numbers greater than 100
        // For simplicity, this example only handles numbers up to 999
        if (num < 1000)
        {
            string hundreds = digitToWord(num / 100) + " Hundred";
            if (num % 100 != 0)
            {
                return hundreds + " " + intToWord(num % 100);
            }
            else
            {
                return hundreds;
            }
        }
        else
        {
            return "Number out of range";
        }
    }
}

int main()
{
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Please enter a non-negative integer." << endl;
    }
    else
    {
        cout << "English word: " << intToWord(num) << endl;
    }

    return 0;
}