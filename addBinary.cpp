#include <iostream>
#include <algorithm>
using namespace std;

string addBinary(string a, string b)
{
    string ans = "";
    int carry = 0;

    int i = a.size() - 1, j = b.size() - 1;
    while (i >= 0 || j >= 0)
    {
        int sum = carry;
        if (i >= 0)
            sum += a[i--] - '0';
        if (j >= 0)
            sum += b[j--] - '0';

        carry = sum > 1;
        ans += to_string(sum % 2);
    }
    if (carry)
        ans += to_string(carry);
    
    reverse(ans.begin(), ans.end());

    return ans;
}

int main()
{
    string a, b;
    cin >> a >> b;

    cout << addBinary(a, b);

    return 0;
}
