#include <iostream>
using namespace std;

void displayFactors(int n)
{
    cout << "The factors of " << n << " are : ";
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << ", ";
    }
    cout << "\b\b  ";
}

int main()
{
    int n;
    cin >> n;

    displayFactors(n);

    return 0;
}