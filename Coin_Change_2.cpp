class Solution {
public:
    int f(int idx , int amount , vector<int>&coins , vector<vector<int>>&dp){
        
        //base case
        if(amount==0) return 1;
        
        if(idx==0){
            if(amount%coins[0]==0) return 1;
            
            return 0;
        }
        
        if(dp[idx][amount]!=-1) return dp[idx][amount];
        
        //not pick
        int not_pick= f(idx-1,amount,coins,dp);
        
        //pick
        int pick=0;
        if(amount>=coins[idx]){
            pick = f(idx,amount-coins[idx],coins,dp);
        }
            
        return dp[idx][amount]=pick+not_pick;
        
        
    }
    int change(int amount, vector<int>& coins) {
        
        vector<vector<int>>dp(coins.size()+1,vector<int>(amount+1,-1));
        
        return f(coins.size()-1,amount,coins,dp);
    }
};
