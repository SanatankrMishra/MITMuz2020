#include <bits/stdc++.h>

using namespace std;

void printVect(vector<pair<int,int>> & vec){
    cout<<"size: "<<vec.size()<<endl;
    for(int i=0; i<3; i++){
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }
}

int main(){

    vector<pair<int,int>> v;
    v = {{1,2},{2,3},{3,4}};
    printVect(v);

    int n;
    cin>>n;
    vector<pair<int,int>> v1;
    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
        // v.push_back(make_pair(x,y));            We can also use this instead.
    }
    printVect(v1);

    return 0;
}
