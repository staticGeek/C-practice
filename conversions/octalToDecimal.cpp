#include <iostream>
using namespace std;

int octalToDecimal(int n)
{
    int ans = 0, x = 1;
    while (n)
    {
        int lastdigit = n % 10;

        if (lastdigit > 8)
            return -1;

        ans += lastdigit * x;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    cout << octalToDecimal(n);

    return 0;
}