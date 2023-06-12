#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n = arr.size();
    vector<int>ans;
    unordered_map<int, int>mp;
    for(int i = 0; i<n; i++){
        mp[arr[i]]++;
    }
    for(auto x:mp){
        if(x.second>(n/3))ans.push_back(x.first);
    }
    return ans;

}