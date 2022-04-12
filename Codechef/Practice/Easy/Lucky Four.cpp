#include <bits/stdc++.h>

using namespace std;

int main(){

    int t,count;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        count = 0;
        while(n >= 10 || n == 4 ){
            if(n % 10 == 4){
                count ++ ;
                n = n / 10;
            }
            else{
                n = n /10;
            }
            
        }
        
        cout << count << endl;
    }


    return 0;
}
