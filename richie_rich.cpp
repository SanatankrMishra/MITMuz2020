#include <iostream>
using namespace std;

int main(){
    //This is the code I changed.
    long int T;
    cin>>T;

    while(T--){
        int a,b,x,n;
        cin>>a>>b>>x;
        n=(b-a)/x;
        cout<<"It will take"<<n<<"Years to complete."<<endl;
    }
    
    return 0;
}