#include <iostream>

using namespace std;

void printBinary(int num){
    for(int i=31; i>=0; --i){
        cout << ((num>>i) & 1);
    }
    cout << endl;
}


int main(){

    int a;
    cin>>a;
    printBinary(a);
    cout<<"\nChecking whether bit is set or unset..."<<endl;
    int i;
    cin>>i;
    if(((a & (1<<i)) != 0)){
        cout << "\nThis bit no. "<<i<< " is set."<<endl;
    }else{
        cout<<"\nThis bit is unset."<<endl;
    }

    // bit set

    printBinary(a | (1<<i) );

    //bit unset

    printBinary(a & ~(1<<i));


    //counting the no. of bit sets

    int ct;
    for(int i=31; i>=0; i++){

        if((a & (1>>i)) != 0){
            ct++;
        }

    }

    // toggling bits

    int d = (a ^ (1<<i));



    return 0;
}
