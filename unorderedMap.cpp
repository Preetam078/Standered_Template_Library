#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, string> m;
    m[5] = "sds";
    m[1] = "www";
    m.insert(make_pair(7, "seww"));
    m.insert({2, "vfrrr"});
    for (auto &value : m)
    {
        cout << value.first << " " << value.second << endl;
    }
    return 0;
}