#include <iostream>
using namespace std;


int isPythagorean(int a, int b, int c)
{
    int hypotenuse = max(a,max(b,c));
    int sum = a*a + b*b + c*c - hypotenuse*hypotenuse;
    
    if(hypotenuse*hypotenuse == sum)
        return 1;
    else
        return 0;
}

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    if (isPythagorean(x, y, z))
        cout << "Pythagorean Triplet";
    else
        cout << "Not a Pythagorean Triplet";

    return 0;
}
