#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long>>ans;
  ans.push_back({1});
  if(n==1)return ans;
  ans.push_back({1, 1});
  for(int i = 3; i<=n; i++){
    auto v = ans.back();
    vector<long long>temp(i);
    temp[0] = v[0];
    temp[i-1] = v[v.size()-1];
    for(int j = 1;j<v.size(); j++){
      temp[j] = v[j]+v[j-1];
    }
    ans.push_back(temp);
  }
  return ans;
}

