#include <iostream>
using namespace std;

int main(){

    long int T;
    cin>>T;

    while(T--){
        int a,b,x,n;
        cin>>a>>b>>x;
        n=(b-a)/x;
        cout<<n;
    }
    
    return 0;
}