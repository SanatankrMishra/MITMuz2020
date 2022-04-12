#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n,k,t;
    int count = 0;
    cin >> n >> k;
    while(n--){
        cin >> t;
        if(t % k == 0){
            count ++ ;
        }
        else{
            continue;
        }
    }
    cout << count << endl;


    return 0;
}
