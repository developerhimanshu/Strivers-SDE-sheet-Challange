#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	long ans = 1;
	long tempx = x;
	while(n>0){
		if(n%2!=0){
			ans = ((ans)%m*(tempx)%m)%m;
		}
		tempx = ((tempx)%m*(tempx)%m)%m;
		n = n>>1;
	}
	return (int)(ans%m);
}