#include <iostream>
using namespace std;

int isPrime(int n)
{
    if (n == 1)
        return 0;

    for (int i = 2; i * i < n; i++)
        if (n % i == 0)
            return 0;

    return 1;
}

int main()
{
    int n;
    cout << "Enter a +ve number: ";
    cin >> n;

    if (isPrime(n))
        cout << "it is a prime number";
    else
        cout << "it is a non-prime number";

    return 0;
}