#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(auto &value : v){
        cout<<value<<" "; 
    }
    cout<<endl;
    return 0;
}