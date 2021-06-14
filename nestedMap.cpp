#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    map<pair<string,string>,vector<int>>mp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string a,b;
        cin>>a>>b;
        cout<<"enter the array size :";
        int ct;
        cin>>ct;
        for(int i=0;i<ct;i++){
            int x;
            cin>>x;
            mp[make_pair(a,b)].push_back(x);
        }
    }
    for(auto &hole :mp){
        auto &map = hole.first;
        auto &vec = hole.second;
        cout<<map.first<<" "<<map.second<<endl;
        for(auto &print : vec){
            cout<<print<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}