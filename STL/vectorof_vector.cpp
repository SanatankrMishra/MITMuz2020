#include <bits/stdc++.h>

using namespace std;

void printVec(vector<int> v){
    for(int i=0; i<v.size(); ++i){
        cout<<v[i]<<endl;
    }
}

int main(){
    int N;
    cin >> N;
    vector<vector<int>> v;
    for(int i=0; i<N; i++){
        int n;
        cin>>n;
        for(int j=0; i<n; j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    vector<int> v1;
    v.push_back(v1);
    v[0].push_back(10);

    for(int i=0; i<v.size(); i++){
        printVec(v[i]);
    }

    return 0;
}
