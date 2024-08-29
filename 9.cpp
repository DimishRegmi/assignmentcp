#include <iostream>
using namespace std;

int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int countDays(int year, int month, int day) {
    int days = 0;
    for (int i = 1; i < year; i++) {
        if (isLeapYear(i)) days += 366;
        else days += 365;
    }
    for (int i = 1; i < month; i++) {
        if (i == 2 && isLeapYear(year)) days += 29;
        else days += daysInMonth[i];
    }
    days += day;
    return days;
}

int main() {
    int year1, month1, day1, year2, month2, day2;
    cout << "Enter first date (YYYY-MM-DD): ";
    cin >> year1 >> month1 >> day1;
    cout << "Enter second date (YYYY-MM-DD): ";
    cin >> year2 >> month2 >> day2;

    int days = abs(countDays(year2, month2, day2) - countDays(year1, month1, day1));

    cout << "Days between two dates: " << days << endl;

    return 0;
}