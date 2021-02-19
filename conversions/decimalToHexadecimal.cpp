#include <iostream>
using namespace std;

string decimalToHexadecimal(int n)
{
    string ans = "";
    int x = 1;
    while (x <= n)
        x *= 16;
    x /= 16;

    while (x)
    {
        int q = n / x;
        if (q > 15)
            return "-1";
        n -= q * x;
        x /= 16;

        if (q <= 9)
            ans += to_string(q);
        else
            ans.push_back('A' + q - 10);
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    cout << decimalToHexadecimal(n);

    return 0;
}