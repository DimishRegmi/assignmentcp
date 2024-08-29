#include <iostream>
using namespace std;

int main() {
    int year, month;
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month (1-12): ";
    cin >> month;

    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            cout << "Number of days of the year " << year << " and month " << month << " is: 29" << endl;
        else
            cout << "Number of days of the year " << year << " and month " << month << " is: 28" << endl;
    } else if (month == 4 || month == 6 || month == 9 || month == 11)
        cout << "Number of days of the year " << year << " and month " << month << " is: 30" << endl;
    else
        cout << "Number of days of the year " << year << " and month " << month << " is: 31" << endl;

    return 0;
}