#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    sort(intervals.begin(), intervals.end());
    if(intervals.size()==1)return intervals;
    vector<vector<int>>ans;
    ans.push_back(intervals[0]);
    int i = 0, j = 1;
    while(j<intervals.size()){
        if(intervals[j][0]<=ans.back()[1]){
            int temp = ans.back()[0];
            int t2 = ans.back()[1];
            if(intervals[j][1]>t2){
                ans.pop_back();
                ans.push_back({temp, intervals[j][1]});
            }
            
            j++;
        }
        else{
            ans.push_back(intervals[j]);
            i++;j++;
        }
    }
    return ans;
}