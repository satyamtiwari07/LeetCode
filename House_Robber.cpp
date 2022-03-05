class Solution {
public:
    int f(int n, vector<int>&dp , vector<int>&arr){
        if(n==0) return arr[0];
        if(n<0)  return 0;
        if(dp[n]!=-1) return dp[n];
        int steel=arr[n] + f(n-2,dp,arr);
        int not_steel = f(n-1,dp,arr);
        
        return dp[n]=max(steel , not_steel);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        int n=nums.size();
        return f(n-1,dp,nums);
    }
};
