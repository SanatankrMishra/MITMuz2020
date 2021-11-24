#include <bits/stdc++.h>
using namespace std;
int main(){


    pair<int,string> p , p1, p2;
    p = make_pair(2,"abc");
    p1 = {2, "abcd"};
    cout<< p.first << " " << p.second <<endl;
    pair<int,string> & p2 = p;
    p2.first = 3;
    cout<< p.first << " " << p.second <<endl;

    pair<int,int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    


    return 0;
}