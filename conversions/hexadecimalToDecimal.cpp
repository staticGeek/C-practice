#include <iostream>
using namespace std;

int hexadecimalToDecimal(string n)
{
    int ans = 0, x = 1;

    int length = n.size();
    for (int i = length - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
            ans += x * (n[i] - '0');
        else if (n[i] >= 'A' && n[i] <= 'F')
            ans += x * (n[i] - 'A' + 10);
        else
            return -1;

        x *= 16;
    }

    return ans;
}

int main()
{
    string n;
    cin >> n;

    cout << hexadecimalToDecimal(n);

    return 0;
}