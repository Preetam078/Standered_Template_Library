#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }
    for (auto &value : m)
    {
        cout << value.first << " " << value.second << endl;
    }
    cout << endl;

    return 0;
}