#include <bits/stdc++.h>
using namespace std;
void print_vec(vector<pair<int, int>> v)
{
    cout << "size of vector : " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
}
int main()
{
    vector<pair<int, int>> v = {{1, 2}, {4, 6}, {6, 8}};
    print_vec(v);
    vector<pair<int, int>> v1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cout << "enter x and y value : ";
        cin >> x >> y;
        v1.push_back(make_pair(x, y));
        print_vec(v1);
    }
    return 0;
}
