#include <iostream>
#include <vector>

using namespace std;

void printVec(vector<int> v){
    cout<<"size"<<v.size()<<endl;
    for(int i=0; i<=v.size(); i++){
        cout<<v[i]<<" ";
    }
}



int main(){
    int n;
    cin>>n;
    cout<<"Input the No."<<endl;
     vector<int> vec;
        for(int i=0; i<n ; ++i){
            int x;
            cin>>x;
            vec.push_back(x);
    }
    printVec(vec);
    
    
    vector<int>vec1(6,3);    //Fills 6 size vector with 3's
    vector<int>vec3;         // By default it's elements are 0's.
    vector <int> & vec3 = vec1 ; //We should pass reference(&) instead because it creates copy which takes O(n)

    
    
    
    return 0;

}