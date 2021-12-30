#include <bits/stdc++.h>

using namespace std;

int main(){
     set<int> st, ts;
    set<int>  :: iterator it;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    ts.insert(4);
    ts.insert(5);
    ts.insert(1);
    set_intersection(st.begin(),st.end(), ts.begin(), ts.end(), it);
    cout << (*it) << endl;
    return 0;
}
