#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main(){

    int n;
    cin>>n;
    int num[n];

    cout<<"Input the array elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>num[i];
    }
    cout << "See your input before sorting"<<endl;
    for(int i=0; i<n; i++){
        cout<<num[i]<<" ";
    }
    cout<<endl<<"This is the sorted array"<<endl;
    
    sort(num,num+n);
    for(int i=0; i<n; i++){
        cout<<num[i]<<" ";
    }
    return 0;
}