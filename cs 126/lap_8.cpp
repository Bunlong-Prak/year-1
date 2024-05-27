// function to find max
#include <iostream>
#include <string>
#include <limits>

using namespace std;
bool bunlong_maximun(double x, double y)
{
    if (x > y)
    {
        return true;
    }
    else
        return false;
}
bool bunlong_smaller(double x, double y)
{
    if (x < y)
    {
        return true;
    }
    else
        return false;
}
double bunlong_equal(double x, double y)
{
    if (x = y)
    {
        cout << "The 2 numbers are the same" << endl;
        return 1;
    }
}
// string bunlong_string(string s)
// {
//     int c = 0;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (!isdigit(s[i]))
//         {
//             c = 1;
//             break;
//         }
//     }
//     if (c == 1)
//         cout << "Not numeric" << endl;
// }
int main()
{
    double x, y;
    int c;

    cout << "Enter first number\n";
    cin >> x;
    while (1)
    {

        if (cin.fail())
        {

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "You have entered wrong input" << endl;
            break;
        }
        if (!cin.fail())
        {

            cout << "Enter your second number: ";
            cin >> y;
            if (bunlong_maximun(x, y))
            {
                cout << x << " is greater than " << y << endl;
                cout << "So,the maximun is : " << x << endl;
            }
            else if (bunlong_smaller(x, y))
            {
                cout << y << " is greater than " << x << endl;
                cout << "So,the maximun is : " << y << endl;
            }
            else if (bunlong_equal(x, y))
                ;
        }
        break;

        // try
        // {
        //     for (int i = 0; i < s.size(); i++)
        //     {
        //         if (!isdigit(s[i]))
        //         {
        //             c = 1;
        //             break;
        //         }
        //     }
        //     if (c == 1)
        //     {
        //         throw c;
        //     }
        // }
        // // result = numenator / demomenator;
        // catch (int ex)
        // {
        //     cout << "Not numeric" << endl;
        // }
    }
}