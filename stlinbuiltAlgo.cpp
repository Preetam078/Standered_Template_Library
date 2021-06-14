#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v = {1,3,4,5,7};
    auto max = *max_element(v.begin(),v.end());
    cout<<max<<endl;
    int min = *min_element(v.begin(),v.end());
    cout<<min<<endl;
    auto sum = accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;
    auto ct = count(v.begin(),v.end(),2);
    cout<<ct<<endl;
    reverse(v.begin(),v.end());
    for(auto &value : v){
        cout<<value<<" ";
    }
    cout<<endl;
    return 0;
}