// function to find max
#include <iostream>

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
int main()
{
    double x, y;
    cout << "Enter you number: ";
    cin >> x;
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
    else
        cout << "The 2 numbers are the same";
}