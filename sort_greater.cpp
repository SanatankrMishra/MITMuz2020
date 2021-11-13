#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main(){

    int num[]={1,8,2,7,3,4};
    sort(num,num+6);
    for(int i=0; i<6; i++){
        cout<<num[i]<<" ";
    }
    return 0;
}