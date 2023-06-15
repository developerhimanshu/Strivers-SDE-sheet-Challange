class Solution {
public:
    int mergeSort(vector<int>&arr,vector<int>&temp, int l, int h){
        int res = 0;
        if(l<h){
            int mid = (l+h)/2;
            res+= mergeSort(arr, temp, l, mid);
            res+= mergeSort(arr, temp, mid+1, h);
            res+= merge(arr, temp, l, mid, h);
        }
        return res;
    }
    int merge(vector<int>&arr,vector<int>&temp, int l, int m, int r){
        int pairs = 0;
        int k = l, p = l, q = m+1;
        while(p<=m&&q<=r){  
            if(arr[p]>2LL*arr[q]){
                pairs+=(m-p+1);
                q++;
            }
            else{
                p++;
            }
        }
         p = l;
        q = m + 1;
        while (p <= m && q <= r) {
            if (arr[p] <= arr[q]) {
                temp[k++] = arr[p++];
            } else {
                temp[k++] = arr[q++];
            }
        }
        
        while (p <= m) {
            temp[k++] = arr[p++];
        }
        while (q <= r) {
            temp[k++] = arr[q++];
        }
        
        for (int i = l; i <= r; i++) {
            arr[i] = temp[i];
        }
        return pairs;        
    }
    int reversePairs(vector<int>& nums) {
        vector<int>temp(nums.size());
        temp = nums;
        return mergeSort(nums, temp, 0, nums.size()-1);
    }
};