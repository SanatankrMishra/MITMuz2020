#include <bits/stdc++.h>

using namespace std;

bool should_i_swap(pair<int, int> &a, pair<int, int> &b)
{
    if (a.first != b.first)
    {
        if (a.first > b.first)
            return true;
        return false;
        // return a.first>b.first;
    }
    else
    {
        if (a.second < b.second)
            return true;
        return false;
        // return a.second < b.second;
    }
}

    int main()
    {
        int n;
        cin >> n;
        vector<pair<int, int>> vec(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> vec[i].first >> vec[i].second;
        }

        // for(int i=0; i<n ; i++){
        //     for(int j=i+1; j<n; j++){
        //         if(should_i_swap(vec[i],vec[j])){
        //             swap(vec[i],vec[j]);
        //         }
        //     }
        // }

        sort(vec.begin(), vec.end(), should_i_swap);

        for (auto it = vec.begin(); it != vec.end(); ++it)
        {
            cout << (*it).first << " " << (*it).second << endl;
        }

        return 0;
    }
