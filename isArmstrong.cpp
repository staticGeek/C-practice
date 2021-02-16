#include <iostream>
using namespace std;

int isArmstrong(int n)
{
    int sum = 0;
    int num = n;
    while (n)
    {
        int lastdigit = n % 10;
        sum += lastdigit * lastdigit * lastdigit;
        n /= 10;
    }
    return (num == sum);
}

int main()
{
    int n;
    cout << "Enter a +ve number : ";
    cin >> n;

    if (isArmstrong(n))
        cout << "it is an armstrong number";
    else
        cout << "it is not an armstrong number";

    return 0;
}