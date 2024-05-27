#include <iostream>
using namespace std;
bool isPrimeNumber(int num)
{
    bool isPrimeFlag = true;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isPrimeFlag = false;
            break;
        }
    }
    return isPrimeFlag;
}
int function()
{
    int num;
    cout << "Enter your number: ";
    cin >> num;

    /*bool isPrimeFlag = true;
    for (int i = 2; i < num; i++)
    {
        if (num % 2 == 0)
        {
            isPrimeFlag = false;
            break;
        }
    }*/
    bool isPrimeFlag = isPrimeNumber(num);
    if (isPrimeFlag)
        cout << "Prime number" << endl;

    else
        cout << "Not prime number" << endl;
}
int main()
{
    function();
}
