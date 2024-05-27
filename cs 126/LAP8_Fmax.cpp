#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
double bunlong_fmax(double x, double y)
{
    double result;
    result = fmax(x, y);
    return result;
}
int main()
{
    string word1;
    string word2;
    double x, y;
    while (true)
    {
        cout << "Enter first number : ";
        getline(cin, word1);
        try
        {
            for (char c1 : word1)
            {
                if (isdigit(c1) == 1 || c1 == '.')
                {
                    continue;
                    cout << "correct input ";
                }
                else
                {
                    throw 0; // throw erro
                }
            }
            break;
        }
        catch (int error1)
        {
            cout << "please input first as number" << endl;
        }
    }
    while (1)
    {

        cout << "Enter second number : ";
        getline(cin, word2);
        try
        {
            for (char c2 : word2)
            {
                if (isdigit(c2) == 1 || c2 == '.')
                {
                    continue;
                    cout << "correct input ";
                }
                else
                {
                    throw 0;
                }
            }
            break;
        }
        catch (int error2)
        {
            cout << "please input second as number " << endl;
        }
    }
    cout << "The largest number is: " << bunlong_fmax(stod(word1), stod(word2)) << endl;
}