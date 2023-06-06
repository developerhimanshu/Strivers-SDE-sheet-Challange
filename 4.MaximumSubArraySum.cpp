#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long maxSum = INT_MIN;
    long long currSum = 0;
    for(int i = 0; i<n; i++){
        currSum += arr[i];
        if(maxSum < currSum){
            maxSum = currSum;
        }
        if(currSum<0)currSum = 0;
    }
    return maxSum<0?0:maxSum;
}