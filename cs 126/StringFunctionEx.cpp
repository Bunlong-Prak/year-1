#include <iostream>
#include <string>
#include <cstring>
#include <ctype.h>
#include <conio.h>
#include <algorithm>
using namespace std;
int main()
{
    string str1;
    string str2;
    cout << "Enter a string ";
    getline(cin, str1);
    str2 = str1;
    reverse(str2.begin(), str2.end());
    cout << "Reverse order: " << str2 << endl;
    str1.erase(remove(str1.begin(), str1.end(), ' '), str1.end());
    str2.erase(remove(str2.begin(), str2.end(), ' '), str2.end());
    if (str1 == str2)
    {
        cout << "The order of characters in both strings are the same.";
    }
    else
    {
        cout << "The order of characters in both strings are not the same.";
    }
}
