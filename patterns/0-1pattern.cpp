
//      1
//      0 1
//      1 0 1
//      0 1 0 1
//      1 0 1 0 1

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int k = i % 2;
        for (int j = 1; j <= i; j++)
        {
            cout << k << ' ';
            k = !k;
        }
        
        cout << '\n';
    }

    return 0;
}