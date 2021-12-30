#include <bits/stdc++.h>

using namespace std;

void printBinary(int num){
        for(int i=31; i>=0; --i){
            cout << ((num>>i) & 1);
        }
        cout << endl;
    }

int main(){
    //Trick No. 1: Checking Odd or Even
    int a;
    cin>>a;
    printBinary(a);
    if(a&1){
        cout<<"Odd\n";
    }else{
        cout<<"Even\n";
    }

    //Trick No. 2: Multiplying and Dividing by 2

    int n=5;
    cout<< (n>>2) << endl;
    cout<< (n<<2) << endl;

    //Trick No. 3: UpperCase to LowerCase and Vice Versa

    char a = ('A' | (1<<5));
    // char a = ('A' | ' ');
    cout<<a<<endl;
    char B = ('b' & ~(1<<5));
    // char b = ('b' & '_');
    cout<<B<<endl;


    //Trick No. 4: Clear LSB's

    int noa = 73;
    int n = 5;
    int clsb = (noa & (~(1>>(n+5)) - 1));

    //Trick No. 5: Clear MSB's

    int j=3;
    int cmsb = (a & ((1<<(j+1))-1));


    //Trick No. 6: Check Power of 2

    int no = 16;
    if(n & (n-1)){
        cout<<"not power of 2"<<endl;
    }else{
        cout<<"Power of 2"<<endl;
    }



    return 0;
}
