#include <iostream>
using namespace std;

int main()
{
    char vowels[]{'a', 'e', 'i', 'o', 'u'};
    const string output[]{"vowel", "consonant"};
    char letter;
    cin >> letter;
    letter = tolower(letter);
    bool flag = false;

    for (int i = 0; i < sizeof(vowels) / sizeof(vowels[0]); i++)
    {
        if (letter == vowels[i])
        {
            flag = true;
            break;
        }
    }

    cout << (flag ? output[0] : output[1]) << endl;

    return 0;
}