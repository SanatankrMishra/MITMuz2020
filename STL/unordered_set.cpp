#include <bits/stdc++.h>

using namespace std;

void print(unordered_set<string> &st){
    for(auto value: st){
        cout<<value<<" "<<endl;
    }
    for(auto it = st.begin(); it != st.end(); ++it){
        cout<<(*it)<<endl;
    }
}

int main(){

    unordered_set<string> s;
    s.insert("abc"); // O(1);
    s.insert("bcd");
    s.insert("cde"); 
    auto it = s.find("abc"); //O(1);
    if(it != s.end()){
        // cout<< (*it)<< endl;
        s.erase(it);
    }
    print(s);

    return 0;
}
