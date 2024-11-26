#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int>nums(n+2,0);
  for(int i=1;i<=n;i++)cin>>nums[i];
  vector<pair<int,int>>left,right;
  for(int i=1;i<=n;i++){
    if(nums[i]>nums[i-1])left.push_back({i,nums[i]-nums[i-1]});
    if(nums[i]>nums[i+1])right.push_back({i,nums[i]-nums[i+1]});
  }
  int res = 0;
  for(auto x:left)res+=x.second;
  cout<<res<<endl;
  int idx1=0,idx2=0;
  while(1){
    if(!left[idx1].second)idx1++;
    if(!right[idx2].second)idx2++;
    if(idx1==left.size()||idx2==right.size())break;
    cout<<left[idx1].first<<" "<<right[idx2].first<<endl;
    left[idx1].second--;
    right[idx2].second--;
  }
}
