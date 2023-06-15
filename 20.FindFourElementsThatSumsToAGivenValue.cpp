#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    unordered_map<long long, pair<int, int>>mp;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            mp[arr[i]+arr[j]] = {i, j};
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(mp.find(target-(arr[i]+arr[j]))!=mp.end()){
                auto p = mp[target-(arr[i]+arr[j])];
                auto x = p.first;
                auto y = p.second;
                if(x!=i && y!=j)return "Yes";
            }
        }
    }
    return "No";
}
