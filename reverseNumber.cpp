#include <iostream>
using namespace std;

int reverseNum(int n)
{
    int ans = 0;
    while (n)
    {
        ans = ans * 10 + n % 10;
        n /= 10;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << "The reversed number is : " << reverseNum(n);

    return 0;
}