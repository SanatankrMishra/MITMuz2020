#include <bits/stdc++.h>

using namespace std;

bool is_positive(int x){
    return x > 0;
}

int main(){

    // cout << [](int x){return x+2;}(2)<< endl;
    auto u = [](int x, int y){return x*y;};
    cout << u(2,3) << endl;

    vector<int> vec={2,3,5};
    cout << all_of(vec.begin(), vec.end(), [](int x){return x>0;});
    cout << all_of(vec.begin(), vec.end(), is_positive);
    cout << any_of(vec.begin(), vec.end(), [](int x){return x>0;});
    cout << none_of(vec.begin(), vec.end(),[](int x){return x>0;});

    return 0;
}
