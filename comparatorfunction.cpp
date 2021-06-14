#include <iostream>
#include <vector>
using namespace std;

bool should_swap(int a, int b)
{
    if (a < b)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (should_swap(v[i], v[j]))
            {
                swap(v[i], v[j]);
            }
        }
    }
    for (auto &value : v)
    {
        cout << value << " ";
    }
    cout << endl;
    return 0;
}