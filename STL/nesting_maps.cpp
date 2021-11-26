#include <bits/stdc++.h>

using namespace std;

int main(){

    map<pair<string,string>, vector<int>> m;
    string fn,ln;
    int val;
    for(auto &pr : m){
        cin >> fn >> ln >> val;
        for(int i=0; i<val; i++){
            int x;
            cin >> x;
            m[{fn, ln }].push_back(x);
        }
        

    }

    for(auto &pr : m){
        auto full_name = pr.first;
        auto &list = pr.second;
        for(auto it = list.begin(); it != list.end(); ++it ){
            cout << (*it)<<endl;
        }
    }

    return 0;
}
