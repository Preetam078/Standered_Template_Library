#include <iostream>
#include <vector>
using namespace std;
void print_vec(vector<int> v)
{
    cout << "size of vector : " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    int N;
    cin >> N;
    vector<int> v[N];
    for (int i = 0; i < N; i++)
    {
        int n;
        cout << "enter the size of the array :";
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cout << "enter the element in the array :";
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    for (int i = 0; i < N; i++)
    {
        print_vec(v[i]);
    }
    return 0;
}