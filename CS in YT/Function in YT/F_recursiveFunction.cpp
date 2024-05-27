#include <iostream>
using namespace std;
// sum numbers between m and n;
int recursive_sum(int m, int n)
{
    if (m == n)
        return m;
    return m + recursive_sum(m + 1, n);
}
int main()
{
    int m = 2, n = 4;
    cout << "Sum=" << recursive_sum(m, n);
}
// int main()
// {
//     int m = 2;
//     int n = 4;
//     int sum = 0;
//     for (int i = m; i <= n; i++)
//     {
//         sum += i;
//     }
//     cout << "Sum = " << sum;
// }