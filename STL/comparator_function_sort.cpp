#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>>  & comperator(vector<pair<int, int>> &vec)
{

        for (int i = 0; i < vec.size(); i++)
        {
            for (int j = i + 1; j < vec.size(); ++j)
            {
                if(vec[i].first> vec[j].first){
                    swap(vec[i].first, vec[j].first);
                }
                if(vec[i].second < vec[j].second){
                    swap(vec[i].second, vec[j].second);
                }
            }
        }
    return vec;
}

int main()
{
    int n;
    cin >> n;
    int x,y;
    vector<pair<int,int>> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> x >> y;

        v[i]={x,y};
    }
    // for (int j = 0; j < n; j++)
    // {
    //     for (int k = j + 1; k < n; ++k)
    //     {
    //         if (v[j] > v[k])
    //         {
    //             swap(v[j], v[k]);
    //         }
    //     }
    // 
        
    sort(v.begin(), v.end(), greater<pair<int,int>>());     // Here third argument is functional object or functors acting as comperator function.
    // comperator(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " "<< v[i].second << endl;
    }

    return 0;
}
