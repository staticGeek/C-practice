
//                  1   
//                1   1
//              1   2   1   
//            1   3   3   1
//          1   4   6   4   1 

#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * fact(n - 1);
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n-i; j++)
            cout << "  ";

        for (int j = 0; j <= i; j++)
            cout << fact(i) / (fact(j) * fact(i - j)) << "   ";

        cout << '\n';
    }

    return 0;
}