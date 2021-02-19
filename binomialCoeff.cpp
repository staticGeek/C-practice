#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 1 || n == 0)
        return 1;

    return n * fact(n - 1);
}

int main()
{
    int n, r;
    cin >> n >> r;

    int binomialCoeff = fact(n) / (fact(r) * fact(n - r));
    cout << n << "C" << r << " = " << binomialCoeff;

    return 0;
}