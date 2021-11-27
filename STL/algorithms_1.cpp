#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n ; ++i){
        cin >> v[i];
    }
    // All these operations take O(log(n))
    int min = *min_element(v.begin(), v.end());
    cout << min << endl;
    int max = *max_element(v.begin(), v.end());
    cout << max << endl;
    int sum = accumulate(v.begin(), v.end(), 0);
    cout<< sum << endl;
    int g;
    cin >> g;
    int ct = count(v.begin(), v.end(), g);
    cout << ct << endl;
    int k;
    cin >> k;
    auto it = find(v.begin(), v.end(),k);
    if(it != v.end()){
        cout<< (*it)<< endl;
    }else{
        cout<< "Element Not Found"<< endl;
    }

    reverse(v.begin(), v.end());
    for(auto val : v){
        cout << val << " ";
    }
    return 0;
}
