#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	unordered_map<int, int>mp;
	for(int i = 0; i<n; i++){
		mp[arr[i]]++;
	}
	for(auto m:mp){
		if(m.second > n/2)return m.first;
	}
	return -1;
}