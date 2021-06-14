#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cout << "\n enter the test case: ";
    cin >> t;
    cout << endl;
    while (t--)
    {
        int n, k;
        cout << "\n enter the no. of bags: ";
        cin >> n;
        cout << "\n enter the minute: ";
        cin >> k;
        multiset<long long> bags;
        for (int i = 0; i < n; i++)
        {
            int candy;
            cin >> candy;
            bags.insert(candy);
        }
        long long total = 0;
        for (int i = 0; i < k; i++)
        {
            auto it = (--bags.end());
            int total_candy = (*it);
            total = total + total_candy;
            bags.erase(it);
            bags.insert(total_candy / 2);
        }
        cout << total << endl;
    }
    return 0;
}