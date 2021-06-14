#include <iostream>
#include <vector>
using namespace std;

void print_vec(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    print_vec(v);
    vector<int> v1(10, 3);
    v1.push_back(7);
    print_vec(v1);
    v1.pop_back();
    print_vec(v1);
    vector<int> &v2 = v1;
    v2.pop_back();
    print_vec(v2);
    print_vec(v1);

    return 0;
}