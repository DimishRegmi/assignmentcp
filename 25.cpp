#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

void listNonPrimes(int upperBound)
{
    cout << "The non-prime numbers are: ";
    for (int i = 2; i <= upperBound; i++)
    {
        if (!isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int upperLimit;
    cout << "Input the upper limit: ";
    cin >> upperLimit;
    listNonPrimes(upperLimit);
    return 0;
}