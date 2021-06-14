#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>a , pair<int,int>b){
    if(a.first>b.first) return false;
    else return true;
}

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a.push_back(make_pair(x,y));
    }
    sort(a.begin(),a.end(),cmp);

    for(auto &value : a){
        cout<<value.first<<" "<<value.second<<endl;
    }
    return 0;
}