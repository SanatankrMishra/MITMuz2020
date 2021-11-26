#include <bits/stdc++.h>

using namespace std;


// Monk and Candy Problem



int main(){

    int T;
    cin >> T;
    int n,k;
    cin >> n>> k; 
    multiset<int> bags;
    for(long long int i=0; i<n ; i++){
        int x;
        cin>>x;
        bags.insert(x);
    }

    int total_candy = 0;
    for(int j=0; j<k; j++ ){
        auto last_iter = (--bags.end());
        int candy_ct = (*last_iter);
        total_candy+=candy_ct;
        bags.erase(last_iter);
        bags.insert(candy_ct);
    }
        cout<<total_candy<<endl;

    return 0;
}
