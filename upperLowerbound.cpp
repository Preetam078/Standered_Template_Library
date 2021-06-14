#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 4, 5, 6, 7, 9};
    sort(v.begin(), v.end());
    auto it = lower_bound(v.begin(), v.end(), 5);
    cout << (*it) << endl;
    auto itr = upper_bound(v.begin(), v.end(), 5);
    cout << (*itr) << endl;
    return 0;
}