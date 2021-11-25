#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int> v = {8,6,7,9};
    for(int i=0; i<v.size(); ++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> :: iterator it;
    it = v.begin();
    for(it=v.begin(); it!=v.end(); ++it){
        cout<<(*it)<<endl;
    }
    vector<pair<int,int>> v_p = {{1,2}, {2,3}, {3,4}};
    vector<pair<int,int>> :: iterator iter = v_p.begin();
    for(iter=v_p.begin(); iter != v_p.end(); ++iter){
        cout<<(*iter).first<< " " << (*iter).second<<endl;
    }
    return 0;
}
