#include <bits/stdc++.h>

using namespace std;

int main(){

    map<int,string> m;
    m[3]="cde";
    m[2]="bcd";
    m[1]="abc";
    m.insert({4, "def"});
    // m.insert(make_pair(4, "def"));

    // map<int,string> :: iterator it;
    // for(it= m.begin(); it != m.end(); ++it){
    //     cout<< (*it).first << " "<< (*it).second<< endl;
    // }

       for(auto & value : m ){              // To avoid copying
           cout << value.first << " " << value.second<< endl;
       }
       m[4] = "efg"; // Values will be overwritten as map contain unique keys in sorted order
    // It takes both O(n) for both accessing and insertion.

    auto it = m.find(2);
    if(it == m.end()){
        cout<<"No Value";
    }
    else{
        cout<< (*it).first << " " << (*it).second<< endl;
    }

    //  auto jt= m.find(3);
    // m.erase(jt);
    // m.erase(3);
    

    // For string keys, time complexity = string.size() * O(n)
    return 0;
}
