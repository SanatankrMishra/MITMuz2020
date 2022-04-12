#include <bits/stdc++.h>

using namespace std;

int main(){

    int t,fd,ld, sum;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ld = n % 10;
        while(n >= 10){
            n /= 10;
        }
        fd = n;
        sum = fd + ld;
        cout << sum << endl;
    }


    return 0;
}
