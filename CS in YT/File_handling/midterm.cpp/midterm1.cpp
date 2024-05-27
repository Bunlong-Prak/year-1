#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], mult[10][10];
    int r1 = 2, c1 = 3;
    int r2 = 3, c2 = 2, i, j, k;
    int sum = 0;
    cout << endl
         << "Matrix 1: " << endl;
    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c1; ++j)
        {
            cin >> a[i][j];
        }
    }

    cout << endl
         << "Matrix 2:" << endl;
    for (i = 0; i < r2; ++i)
    {
        for (j = 0; j < c2; ++j)
        {
            cin >> b[i][j];
        }
    }

    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c2; ++j)
        {
            for (k = 0; k < r2; ++k)
            {
                sum += a[i][k] * b[k][j];
            }
            mult[i][j] = sum;
            sum = 0;
        }
    }

    cout << endl
         << "Output Matrix: " << endl;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            cout << " " << mult[i][j];
        }
        cout << endl;
    }
    return 0;
}
