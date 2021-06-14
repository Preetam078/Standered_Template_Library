#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<string> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        st.insert(s);
    }
    int q;
    cin >> q;
    while (q--)
    {
        string sr;
        cin >> sr;
        if (st.find(sr) == st.end())
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "\n YES \n"
                 << endl;
        }
    }
    return 0;
}