#include<iostream>
#include<set>
using namespace std;

int main(){
    multiset<string>s;
    s.insert("abc");
    s.insert("dfg");
    s.insert("tyu");
    s.insert("abc");
    s.insert("tyu");
    for(auto value : s){
        cout<<value<<endl;
    }
    auto it = s.find("abc");
    if(it!=s.end()){
        s.erase(it);
    }
    cout<<endl;
     for(auto value : s){
        cout<<value<<endl;
    }
    return 0;
}
