#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    unordered_map<int, int>st;
    for(int i = 0; i<n; i++){
        st[arr[i]] = 1;
    }
    int maxi = 1, curr = 1;
    for(auto ele:arr){
        int num = ele+1;
        while(st.count(num)>0){
            st[ele]+=st[num];
            curr=st[ele];
            maxi = max(maxi, curr);
            st.erase(num);
            num++;
        }
        curr =1;
    }
    return maxi;
}
