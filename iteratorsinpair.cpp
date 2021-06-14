#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<pair<int, int>> v = {{1, 2}, {2, 5}, {5, 7}, {6, 9}};
    vector<pair<int, int>>::iterator itr = v.begin();
    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << endl;
    }
    cout << endl;
    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }
    cout << endl;
    for (auto &value : v)
    {
        cout << value.first << " " << value.second << endl;
    }
    return 0;
}