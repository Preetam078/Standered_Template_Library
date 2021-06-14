#include <bits/stdc++.h>
using namespace std;

bool should_swap(pair<int, int> a, pair<int, int> b)
{
    if (a.first > b.first)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        a.push_back(make_pair(x, y));
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (should_swap(a[i], a[j]))
            {
                swap(a[i], a[j]);
            }
        }
    }
    for (auto &value : a)
    {
        cout << value.first << " " << value.second << endl;
    }
    return 0;
}