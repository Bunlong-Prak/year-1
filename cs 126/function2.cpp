#include <iostream>
using namespace std;

// Function to count uppercase, lowercase,
// special characters and numbers
void Count(string str)
{
    int upper = 0, lower = 0, number = 0, special = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            ++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            lower++;
        else if (str[i] >= '0' && str[i] <= '9')
            number++;
        else
            special++;
    }
    cout << "lowercase : " << lowercase << endl;
    cout << "Lower case letters : " << lower << endl;
    cout << "Number : " << number << endl;
    cout << "Special characters : " << special << endl;
}

// Driver function
int main()
{
    string str;
    cout << "Enter a String";
    getline(cin, str);
    Count(str);
    return 0;
}