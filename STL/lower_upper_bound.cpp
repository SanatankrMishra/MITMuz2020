#include <bits/stdc++.h>

using namespace std;

int main(){

    // For array and vector to be used in upper bound and lower bound with O(log(n)) , they must be sorted.
    // Otherwise it will be of time complexity O(n);
cout << "********************************* For Arrays ***************************************"<<endl;
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n ; ++i){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for(int i=0; i<n ; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
    int x,y;
    cin >> x >> y;
    int *ptr = lower_bound(arr, arr+n,  x );
    int *pt = upper_bound(arr, arr+n, y);
    if(ptr == arr+n){
        cout<< "Lowerbound Not Found Error"<< endl;
    }
    if(pt == arr+n ){
        cout << "Upperbound Not Found Error"<< endl;
    }
    cout <<"Lowerbound: "<< (*ptr) << endl;
    cout <<"Upperbound: "<<  (*pt) << endl;


cout<< "************************  For Vectors ***************************"<< endl;
    int k;
    cin >> k;
    vector<int> v(k);
    for(int i=0; i<k; ++i){
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for(auto & pr : v){
        cout << pr << " ";
    }
    cout<< endl;
    int l,m;
    cin >> l >> m;
    vector<int> :: iterator it;
    it = lower_bound(v.begin(), v.end(), l);
    auto itr = upper_bound(v.begin(), v.end(), m);
    if(it == v.end()){
        cout<< "Lowerbound Not Found Error " << endl;
    }
    if(itr == v.end()){
        cout<< "Upperbound Not Found Error"<< endl;
    }
    cout << "Lowerbound: "<< (*it) << endl;
    cout << "Upperbound: "<< (*itr) << endl;

cout<<"************************************** For Sets & Maps ****************************************"<< endl;

    int z;
    cin >> z;
    set<int> st;
    for(int i=0; i<z; ++i){
        int x;
        cin >> x;
        st.insert(x);
    }

    // Instead of doing these 👇because instead of O(log(n)) it will be of O(n)
    int g;
    cin >> g;
    // auto it = lower_bound(st.begin(), st.end(), g);

    // Do these :-
    auto it = st.lower_bound(g);
    cout<<(*it)<<endl;



    return 0;
}