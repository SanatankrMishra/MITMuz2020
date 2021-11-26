#include <bits/stdc++.h>

using namespace std;

void print(set<string> &st){
    for(auto value: st){
        cout<<value<<" "<<endl;
    }
    for(auto it = st.begin(); it != st.end(); ++it){
        cout<<(*it)<<endl;
    }
}

int main(){

    set<string> s;
    s.insert("abc"); // log(n)
    s.insert("bcd");
    s.insert("cde"); 
    auto it = s.find("abc"); //log(n)
    if(it != s.end()){
        // cout<< (*it)<< endl;
        s.erase(it);
    }
    print(s);

    return 0;
}
