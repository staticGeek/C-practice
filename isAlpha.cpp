// without using isalpha()
#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;

    int ascii = int(c);

    if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122))
        cout << "it is an alphabet";
    else
        cout << "it is not an alphabet";

    return 0;
}