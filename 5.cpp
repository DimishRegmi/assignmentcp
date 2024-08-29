#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int num[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> num[i];
    }

    int max1 = num[0], max2 = num[0], max3 = num[0];
    for (int i = 1; i < n; i++) {
        if (num[i] > max1) {
            max3 = max2;
            max2 = max1;
            max1 = num[i];
        } else if (num[i] > max2 && num[i] != max1) {
            max3 = max2;
            max2 = num[i];
        } else if (num[i] > max3 && num[i] != max1 && num[i] != max2) {
            max3 = num[i];
        }
    }

    cout << "The three highest numbers are: " << max1 << " " << max2 << " " << max3 << endl;

    return 0;
}