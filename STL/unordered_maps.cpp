#include <bits/stdc++.h>

using namespace std;

// All the things are same except only these of the following: 

// 1. Inbuilt Implmentation
// 2. Time complexity
// 3. valid keys datatype

// It takes O(1) for accessing, insertion, deletion because it uses hash table implementation instead of RBT


int main(){

    unordered_map<int,string> mp;
    mp[2]="bc";
    mp[3]="cd";
    mp[1]="ab";
    
    for(auto value: mp){
        cout<<value.first<<" "<< value.second<< endl;
    }
    
    // We can add duplicate keys in multimap that we cannot do in maps, to avoid use multimap we use as following: -

    map<int,vector<string>> mmp;


    return 0;
}
