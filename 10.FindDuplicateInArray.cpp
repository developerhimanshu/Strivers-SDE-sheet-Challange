#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	unordered_set<int>st;
	for(auto x:arr){
		if(st.find(x)!=st.end())return x;
		st.insert(x);
	}
	return -1;
}
