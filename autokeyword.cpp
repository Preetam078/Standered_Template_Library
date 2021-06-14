#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 5, 6, 7};
    for (auto itr = v.begin(); itr != v.end(); itr++)
    {
        cout << (*itr) << " ";
    }
    cout << endl;
    vector<pair<int, int>> vp = {{1, 3}, {3, 5}, {5, 7}, {8, 9}};
    for (auto it = vp.begin(); it != vp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;

    return 0;
}