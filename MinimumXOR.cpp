#include<bits/stdc++.h>
using namespace std;

int solve( vector<int> &nums,int k){
    int totalxor=0;
    for(auto num:nums){
        totalxor ^=num;

    }
    int diff=totalxor^k;
  return __builtin_popcount(diff);
}
int main()  {
    int k=0;
    vector<int> nums{2,0,2,0};
    cout<<solve(nums,k);
return 0;
}