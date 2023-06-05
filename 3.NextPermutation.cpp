#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &p, int n)
{
   int bp = -1;
    for(int i = n-2; i>=0;i--){
        if(p[i]<p[i+1]){
            bp = i;
            break;
        }
    }
    if(bp == -1){
        reverse(p.begin(), p.end());
        return p;
    }
    // int miniGreaterEle=INT_MAX, ind;
    for(int i = n-1; i>bp; i--){
        if(p[i]>p[bp]){
            swap(p[i], p[bp]);
            break;
        }
    }
    reverse(p.begin()+bp+1, p.end());
   return p;

}