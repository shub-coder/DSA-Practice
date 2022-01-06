#include <bits/stdc++.h>

using namespace std;
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int x, y;
        int *res = new int[2];
        map<int, int>mp;
        for(int i=0; i<n; i++)
        {
            mp[arr[i]]++;
        }
        for(auto i: mp)
        {
            if(i.second>1)
            {
                x = i.first;
                break;
            }
        }
        for(int i=1; i<=n; i++)
        {
            if(mp.find(i)==mp.end()) { y = i; break; }
        }
        res[0]=x;
        res[1]=y;
        
        return res;
        
    }
};
