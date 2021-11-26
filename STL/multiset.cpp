#include <bits/stdc++.h>

using namespace std;

void print(multiset<string> &st){
    for(auto value: st){
        cout<<value<<" "<<endl;
    }
    // for(auto it = st.begin(); it != st.end(); ++it){
    //     cout<<(*it)<<endl;
    // }
}

int main(){

    multiset<string> s;
    s.insert("abc"); // log(n)
    s.insert("bcd");
    s.insert("cde"); 
    s.insert("abc");
    // 
    auto it = s.find("abc"); //log(n)
    if(it != s.end()){
        // cout<< (*it)<< endl;
        s.erase(it);
    }
    // s.erase("abc");                      Deletes all occuring values instead of first pointing iterator
    print(s);

    return 0;
}
