#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    unordered_set<int>st;
    int i = 0, j = 0;
    int ans = 0;
    while(j<input.length()){
        if(!st.count(input[j])){
            st.insert(input[j]);
            j++;
            ans = max(ans, (j-i));
        }
        else{
            while(st.count(input[j])!=0){
                st.erase(input[i++]);
            }
        }
    }
    return ans;
}