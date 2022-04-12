#include <bits/stdc++.h>

using namespace std;

int main(){

    float init_bal, withdrawl, rem_bal;
    cin >> withdrawl >> init_bal;
    if((init_bal-withdrawl-0.5 >= 0 ) && ((int)withdrawl % 5 == 0) ){
        rem_bal = init_bal-withdrawl;
        
    }else{
        rem_bal= init_bal;
    }
    ios_base::sync_with_stdio(false);
    
    cin.tie(0);
    ios::clear;
    cout << setprecision(2)<< rem_bal << endl;

    return 0;
}
