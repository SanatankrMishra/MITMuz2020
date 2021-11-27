#include <bits/stdc++.h>

using namespace std;
unordered_map<char,int> um = {{'[', -1}, {'{', -2}, {'(', -3},{']', 1}, {'}', 2}, {')', 3}};
stack<char> stk;
string strbal(string &st){
    for(auto br : st){
        if(um[br] < 0){
            stk.push(br);
        }
        else{
            if(stk.empty()) return "NO";
            char top = stk.top();
            stk.pop();
            if(um[top]+ um[br] != 0) return "NO";
        }
    }
    if(stk.empty()) return "YES";
    return "NO";
}

int main(){

    int T; 
    cin >> T;
    while (T--){
        string str;
        cin >> str;
        cout << strbal(str) << endl;
    }


    return 0;
}
