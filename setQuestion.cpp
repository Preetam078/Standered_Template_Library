#include<iostream>
#include<unordered_set>
using namespace std;
 
 int main(){
    unordered_set<string>st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        st.insert(s);
    }
    cout<<endl;
    for(auto value : st){
        cout<<value<<endl;
    }
     return 0;
 }