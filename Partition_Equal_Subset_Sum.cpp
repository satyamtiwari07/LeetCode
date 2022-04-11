class Solution {
public:
    bool f(int idx , vector<int>& nums, int target,vector<vector<int>>&dp){
        // cout<<idx <<' ' << target<<endl;
        if(target==0) return true;
        
        if(idx==0 ) return  nums[0]==target;
        
       if(dp[idx][target]!=-1) return dp[idx][target];
        
        bool nottake=f(idx-1,nums,target,dp);
        
        bool take=false;
        
        if(nums[idx]<=target)
            take=f(idx-1,nums,target-nums[idx],dp);
        
        return dp[idx][target] = nottake or take; 
    }
    bool canPartition(vector<int>& nums) {
        
        
        int sum=0;
        for(auto it:nums) sum+=it;
        
       
        if(sum&1) return false;
        
        sum=sum/2;
        vector<vector<int>>dp(nums.size(),vector<int>(sum+1,-1));
        
        //base case
        for(int target=0 ; target<=sum ; target++){
            if(target==nums[0]) 
                dp[0][target]=1;
            else
                dp[0][target]=0;
                
        }
        
        //bottom-up
        for(int idx=1;idx<nums.size();idx++){
            
            for(int target=0 ; target<=sum; target++){
                
                bool nottake=dp[idx-1][target];
        
                bool take=false;

                if(nums[idx]<=target)
                    take=dp[idx-1][target-nums[idx]];
                
                dp[idx][target] = nottake or take;
            }
        }
        
        //return statement
        return dp[nums.size()-1][sum];
    }
};
