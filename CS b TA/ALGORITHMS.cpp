#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

void print(vector<int> v)
{
    for (auto &i : v)
    {
        cout << i << ' ';
    }
    cout << '\n';
}

bool test(int a, int b)
{
    return a <= b;
}
int main()
{
    /* --------------------------------- 1. sort -------------------------------- */
    vector<int> v = {3, 5, 7, 1, 5};
    sort(v.begin(), v.end());
    print(v);
    sort(v.begin(), v.end(), std::greater<>());
    print(v);
    sort(v.begin(), v.end(), [](int a, int b)
         { return a != b; });
    print(v);
    sort(v.begin(), v.end(), test);
    print(v);
    /* ------------------------------- 2. reverse ------------------------------- */
    reverse(v.begin(), v.end());
    print(v);
    /* ------------------------------ 3. accumulate ----------------------------- */
    cout << accumulate(v.begin(), v.end(), 0) << '\n';
    cout << accumulate(v.begin(), v.end(), 1, [](int a, int b)
                       { return a * b; })
         << '\n';
    /* -------------------------------- 4. count -------------------------------- */
    cout << count(v.begin(), v.end(), 5) << '\n';
    cout << count_if(v.begin(), v.end(), [](int i)
                     { return i % 2 != 0; });
}