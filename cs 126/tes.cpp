#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x = 56.13, result;
    int y = 89;

    result = fmax(x, y);
    cout << "fmax(x, y) = " << result << endl;

    return 0;
}