class Solution {
public:`

    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return slove(n,dp);
    }
    int slove(int n,vector<int> &dp )
    {
   
   if(n==0) return 1;
   if(n<0)   return 0;
   if(dp[n]!=-1) return dp[n];

   return dp[n]=slove(n-1,dp)+slove(n-2,dp);
    }
};