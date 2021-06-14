#include <iostream>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> mp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        cout << mp[s] << endl;
    }
    return 0;
}