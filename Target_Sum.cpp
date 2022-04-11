class Solution {
public:
    int count(int idx, int target,vector<int>&nums,vector<vector<int>>&dp){
        
        //base case;
        if(idx==0){
            if(target==0 && nums[0]==0) return 2 ;
            if(target==0 || nums[0]==target) return 1;
            else return 0;
        }
        
        if(dp[idx][target]!=-1) return dp[idx][target];
        
        int nottake=count(idx-1,target,nums,dp);
        
        int take=0;
        
        if(target>=nums[idx])
            take=count(idx-1,target-nums[idx],nums,dp);
        
        return dp[idx][target]=take+nottake;
        
        
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        for(auto it:nums) sum+=it;
        
        int k=(sum-target)/2;
        if(sum<abs(target) or (sum-target)%2!=0) return 0;
        vector<vector<int>>dp(nums.size(),vector<int>(k+1,-1));
        return count(nums.size()-1,k,nums,dp);
    }
};
