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
     vector<int> vec;
        for(int i=0; i<=n ; ++i){
            int x;
            cin>>x;
            vec.push_back(x);
    }
    printVec(vec);
    
    


    
    
    
    return 0;

}