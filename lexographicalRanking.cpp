#include<iostream>
#include<map>
#include<set>
using namespace std;
int main(){
    map<int,multiset<string>>rank;
    int n;
    cout<<"\n how many inputs you want: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int marks;
        cout<<"\n enter the marks: ";
        cin>>marks;
        cout<<"\n enter the name: ";
        string name;
        cin>>name;
        rank[-1*marks].insert(name);
    }
    for(auto &value: rank){
        auto &student_name = value.second;
        auto &student_marks = value.first;
        for(auto student : student_name){
            cout<<student<<" "<<(-1*student_marks)<<endl;
        }
    }
    return 0;
}