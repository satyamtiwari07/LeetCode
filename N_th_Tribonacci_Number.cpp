class Solution {
public:
    int tribonacci(int n) {
        int dp[39]={0};
        dp[0]=0,dp[1]=dp[2]=1;
        if(n<3) return dp[n];
        else{
          for(int x=3;x<=n;x++){
              dp[x] = dp[x-1] + dp[x-2] + dp[x-3];
          } 
            
        return dp[n];
    }
    }
};
