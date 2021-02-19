#include <iostream>
using namespace std;

int decimalToBinary(int n)
{
    int ans = 0, x = 1;
    while (x <= n)
        x *= 2;
    x /= 2;

    while (x)
    {
        int q = n / x;
        ans = ans * 10 + q;
        n -= x * q;
        x /= 2;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    cout << decimalToBinary(n);

    return 0;
}