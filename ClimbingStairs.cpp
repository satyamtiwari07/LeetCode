class Solution {
public:
    int climbStairs(int n) {
        int dp[46];
        dp[1]=1;
        dp[2]=2;
        for(int x=3;x<=45;x++){ 
           dp[x]=dp[x-1]+dp[x-2];
        }
        return dp[n];
    }
};
