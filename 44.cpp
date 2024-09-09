#include <iostream>
using namespace std;

// Function to create an n x n matrix
void createMatrix(int n)
{
    // Create an n x n matrix
    int matrix[n][n];

    // Initialize the matrix with a value
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = n;
        }
    }

    // Print the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Input: ";
    cin >> n;

    cout << "Input an integer value: Create an n x n matrix by said integer:" << endl;
    createMatrix(n);

    return 0;
}