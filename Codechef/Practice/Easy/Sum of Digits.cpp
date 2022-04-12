#include <bits/stdc++.h>

using namespace std;

int main(){

    int t, sum=0;
    cin >> t;
    long long n;

    while(t--){
        cin >> n;
        do{
            sum += n%10;
        }while(n/10 == 0);
        cout << sum << endl;
    }


    return 0;
}
