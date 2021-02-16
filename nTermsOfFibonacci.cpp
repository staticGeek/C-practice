#include <iostream>
using namespace std;

void fib(int n)
{
    cout << "The first " << n << " terms of fibonacci are : ";
    int firstTerm = 0, secondTerm = 1;
    for (int i = 0; i < n; i++)
    {
        cout << firstTerm << ", ";
        int nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }
    cout << "\b\b  ";
}

int main()
{
    int n;
    cin >> n;

    fib(n);

    return 0;
}