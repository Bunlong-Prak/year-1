[In reply to Zhou Bovisal Cellcard]
#include <iostream>

    using namespace std;

bool isVowel(char c)
{
    if (c == 'a' c == 'e' c == 'i' c == 'o' c == 'u' c == 'A' c == 'E' c == 'I' c == 'O' c == 'U')
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

// check if a character is a consonant or vowel

int main()
{
    char c;
    cout << "Enter a character: ";
    cin >> c;

    if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
    {
        if (isVowel(c))
        {
            cout << "" << c << " is a vowel.";
        }
        else
        {
            cout << "" << c << " is a consonant.";
        }
    }

    else
    {
        cout << "Invalid input." << endl;
    }

    return 0;
}