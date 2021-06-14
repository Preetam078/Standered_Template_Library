#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<[](int x, int y){return (x+y);}(4,6)<<endl; //lambda function
    auto value = [](int x, int y){return (x*y);};
    cout<<value(4,8)<<endl;
    vector<int>v ={3,4,5};
    cout<<all_of(v.begin(),v.end(),
             [](int x){return x>0;})<<endl;
    cout<<any_of(v.begin(),v.end(),
             [](int x){return x>0;})<<endl;
    cout<<none_of(v.begin(),v.end(),
             [](int x){return x>0;})<<endl;
    return 0;
}