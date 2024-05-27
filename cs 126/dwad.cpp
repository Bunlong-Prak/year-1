#include <iostream>
using namespace std;
int main()
{
    int c = 0; // flag
    string s;
    cin >> s;
    try
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (!isdigit(s[i]))
            {
                c = 1;
                break;
            }
        }
        if (c == 1)
        {
            throw c;
        }
    }
    catch (int ex)
    {
        cout << "Not numeric" << endl;
    }
    cout << "num" << endl;
}