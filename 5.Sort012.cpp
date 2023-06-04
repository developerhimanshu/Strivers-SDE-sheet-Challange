#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int ones = 0, twos =0, zeros = 0;
   for(int i = 0; i<n; i++){
      if(arr[i]==1)ones++;
      else if(arr[i]==0)zeros++;
      else twos++;
   }
   int i = 0;
   while(zeros--){
      arr[i++]=0;
   }
   while(ones--){
      arr[i++]=1;
   }
   while(twos--){
      arr[i++]=2;
   }
}