#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int n = arr.size();
    int xr = arr[0];
    unordered_map<int,int>mp;
    mp[xr]++;
    int cnt = 0;
    for(int i = 0; i<n; i++){
        xr=xr^arr[i];
        if(mp.count(xr^x)){
            cnt+=mp[xr^x];
        }
        mp[xr]++;
    }
    return cnt;
    
}