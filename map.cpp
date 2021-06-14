#include <bits/stdc++.h>
using namespace std;

void print_map(map<int, string> &m)
{
    cout << "size of the map is : " << m.size() << endl;
    for (auto &value : m)
    {
        cout << value.first << " " << value.second << endl;
    }
}
int main()
{
    map<int, string> mp;
    mp[1] = "abc";
    mp[5] = "dfd";
    mp.insert(make_pair(8, "sdsd"));
    mp.insert({4, "dsds"});
    mp[5] = "tuuu";

    for (auto &value : mp)
    {
        cout << value.first << " " << value.second << endl;
    }
    print_map(mp);
    auto it = mp.find(5);
    if (it == mp.end())
    {
        cout << "NO VALUE" << endl;
    }
    else
    {
        cout << it->first << " " << it->second << endl;
    }

    auto itr = mp.find(5);
    if (itr != mp.end())
    {
        mp.erase(itr);
    }
    cout << endl;
    print_map(mp);
    mp.clear();
    cout << endl;
    print_map(mp);
    return 0;
}