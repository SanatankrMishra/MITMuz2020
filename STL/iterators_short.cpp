#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int> v = {8,6,7,9};
    for(int i=0; i<v.size(); ++i){
        cout<<v[i]<<" ";
    }

    for(int value: v){
        cout<< value <<" ";
    }

    vector<pair<int,int>> v_p = {{1,2}, {2,3}, {3,4}};
    for(pair<int,int> &value : v_p ){               // To Avoid Copying, we pass actual references
        cout<<value.first << " " << value.second<<endl;
    }
    swap(v_p[0],v_p[2]);
    vector<pair<int,int>>  vp = v_p; 
    for(auto & value: vp){     // Auto keyword does find dynamically datatypes of the containers
        cout<< value.first<<" "<< value.second<< endl;
    }

    return 0;
}
