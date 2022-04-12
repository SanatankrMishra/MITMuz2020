#include <bits/stdc++.h>

using namespace std;

int main(){

    int t,rev;
    long long n;
    cin >> t;
    while(t--){
        n = 0;
        rev = 0;
        cin >> n;
        while(n){
            rev = rev * 10 + n % 10 ;
            n = n / 10;
            
        }
        cout << rev << endl;
    }


    return 0;
}
