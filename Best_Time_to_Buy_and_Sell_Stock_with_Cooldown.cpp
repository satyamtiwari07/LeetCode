class Solution {
public:
    int f(int idx , int buy , vector<int>&prices,vector<vector<int>>&dp){
        
        //base case
        if(idx>=prices.size()) return 0;
        
        if(dp[idx][buy]!=-1) return dp[idx][buy];
       
      //buy
        if(buy){
            return dp[idx][buy]=max(-prices[idx]+f(idx+1,0,prices,dp) , 0+f(idx+1,1,prices,dp) );
        }
       
      //sell
            return dp[idx][buy]=max(prices[idx]+f(idx+2,1,prices,dp) , 0+f(idx+1,0,prices,dp) );
    }
    int maxProfit(vector<int>& prices) {
        // dp[prize.size()][2];  dp of index and buy either 0 and 1
        vector<vector<int>>dp(prices.size(),vector<int>(2,-1));
        return f(0,1,prices,dp);
    }
};
