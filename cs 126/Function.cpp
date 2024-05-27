#include <iostream>

using namespace std;

int bunlong_uppercase(string str)
{
    int uppercase = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            uppercase++;
        }
    }
    return uppercase;
}

int bunlong_lowercase(string str)
{
    int lowercase = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            lowercase++;
        }
    }
    return lowercase;
}

int bunlong_digits(string str)
{
    int digits = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
    }
    return digits;
}

int bunlong_others(string str)
{
    int uppercase = 0, lowercase = 0, digits = 0, others = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            uppercase++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            lowercase++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else
            others++;
    }
    return others;
}
string bunlong_reverse(string str)
{
    string rev = str;
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = rev[str.length() - i - 1];
    }

    return str;
}

int main()
{
    int uppercase = 0, lowercase = 0, digits = 0, others = 0;
    string str, reverse;
    cout << "Enter a string: ";
    getline(cin, str);
    uppercase = bunlong_uppercase(str);
    lowercase = bunlong_lowercase(str);
    digits = bunlong_digits(str);
    others = bunlong_others(str);
    reverse = bunlong_reverse(str);
    cout << "lowercase : " << lowercase << endl;
    cout << "uppercase : " << uppercase << endl;
    cout << "digits : " << digits << endl;
    cout << "Others : " << others << endl;
    cout << "The reversed of the string is: " << reverse << endl;
    return 0;
}