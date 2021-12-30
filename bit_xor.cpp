#include <bits/stdc++.h>

using namespace std;

// x^x == 0
// x^0 == x


/* Given array a of n integers. All integers are present in event count except one. Find that one integer which has odd count in O(N)
complexity and O(1) space
    N < 10^5
    a[i] < 10^5


 */

int main(){

    int n;
    cin >> n;
    int x;
    int ans;
    for(int i=0; i<=n; ++i){
        cin>>x;
        ans ^=x;
    }
    cout<<ans<<endl;


    return 0;
}
