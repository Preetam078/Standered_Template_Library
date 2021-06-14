#include<iostream>
#include<set>
using namespace std;

void print_Set(set<string>st){
    for(auto value : st){
        cout<<value<<endl;
    }
    cout<<endl;
}

int main(){
    set<string>st;
    st.insert("abc");
    st.insert("www");
    st.insert("ghj");
    st.insert("jkl");
    st.insert("tyu");
    st.insert("pew");
    print_Set(st);
    auto itr = st.find("ghj");
    if(itr!=st.end()){
        cout<<(*itr)<<endl;
    }
    st.erase("ghj");
    cout<<endl;
    print_Set(st);
    return 0;
}