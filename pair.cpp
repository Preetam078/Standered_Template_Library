#include <iostream>
using namespace std;

int main()
{
    pair<int, string> p;
    p = make_pair(2, "preetam");
    cout << p.first << " " << p.second << endl;
    pair<int, string> &p1 = p;
    p1 = {4, "sjsj"};
    cout << p.first << " " << p.second << endl;

    pair<int, int> p_array[3];
    p_array[0] = make_pair(0, 1);
    p_array[1] = {9, 4};
    p_array[2] = make_pair(8, 6);
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }
    swap(p_array[0], p_array[2]);
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }
    return 0;
}