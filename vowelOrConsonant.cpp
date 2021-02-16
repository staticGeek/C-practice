#include <iostream>
using namespace std;

int isVowel(char c)
{
    int isLowerCaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    int isUpperCaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    return isLowerCaseVowel || isUpperCaseVowel;
}

int main()
{
    char c;
    cin >> c;

    if (isVowel(c))
        cout << "it is a vowel";
    else
        cout << "it is a consonant";

    return 0;
}