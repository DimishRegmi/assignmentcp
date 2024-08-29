#include <iostream>
using namespace std;

int main() {
    int start, end, sum = 0;
    cout << "Enter the start and end numbers: ";
    cin >> start >> end;

    for (int i = start; i <= end; i++) {
        int num = i;
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
    }

    cout << "The sum of all digits between " << start << " and " << end << " is: " << sum << endl;

    return 0;
}