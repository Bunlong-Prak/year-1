#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>
using namespace std;

int main()
{
    /* ------------------------- 1. Sequential Container ------------------------ */
    int arr[] = {5, 7, 3, 16, 9};

    for (auto &i : arr)
    {
        cout << i << ' ';
    }
    cout << '\n';

    vector<int> vec = {1, 7, 4, 8, 10};
    vec.size();
    vec.push_back(11);
    vec.end();
    for (auto &i : vec)
    {
        cout << i << ' ';
    }

    cout << '\n';
    cout << vec.size() << endl;

    list<int> l = {6, 2, 8, 3, 5};
    for (auto &i : l)
    {
        cout << i << ' ';
    }
    cout << '\n';

    /* ----------------------------- 2. Associative ----------------------------- */
    set<int> s = {6, 4, 2, 5, 1};
    for (auto &i : s)
    {
        cout << i << ' ';
    }
    cout << '\n';

    map<char, int> m = {
        {'e', 10},
        {'a', 50},
        {'c', 70},
        {'d', 40},
    };
    // for (auto& [key, value] : m) {
    //     cout << key << ':' << value << ' ';
    // }
    // cout << '\n';

    for (auto &i : m)
    {
        cout << i.first << ':' << i.second << ' ';
    }
    cout << '\n';
}
