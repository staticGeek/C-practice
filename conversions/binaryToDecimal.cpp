#include <iostream>
using namespace std;

int binaryToDecimal(int n)
{
    int ans = 0, x = 1;
    while (n)
    {
        int lastdigit = n % 10;

        if (lastdigit > 1)
            return -1;

        ans += lastdigit * x;
        x *= 2;
        n /= 10;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    cout << binaryToDecimal(n);

    return 0;
}