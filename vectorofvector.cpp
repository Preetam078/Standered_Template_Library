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
    int N;
    vector<vector<int>> v;
    cout << "enter the row size: ";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int n;
        cout << "the coloumn size: ";
        cin >> n;
        vector<int> temp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for (int i = 0; i < v.size(); i++)
    {
        print_vec(v[i]);
    }

    return 0;
}