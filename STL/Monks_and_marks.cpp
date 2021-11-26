#include <bits/stdc++.h>

using namespace std;

int main(){

    map<int,multiset<string>> m;
    int n;
    cin >> n;
    for(int i=0; i<n ; i++){
        int marks;
        string name;
        cin >> name >> marks;
        m[marks].insert(name);
    }

    auto cur_it = (--m.end());
    while(true){
        int marks = (*cur_it).first;
        auto &students = (*cur_it).second;
        for(auto &stud : students){
            cout << stud << " " << marks << endl;
        }
        if(cur_it == m.begin()) break;
        cur_it--;
    }


    return 0;
}
