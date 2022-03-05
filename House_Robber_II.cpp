class Solution {
public:
    int f1(int n,vector<int> & dp , vector<int> & arr,int s){
         // if(n==1 ) return arr[n];
         if(n<s) return 0;
         if(dp[n]!=-1) return dp[n];
        int pick = arr[n]+f1(n-2,dp,arr,s);
        int not_pick = 0+f1(n-1,dp,arr,s);
        
        return dp[n]=max(pick,not_pick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        
        if(n==1) return nums[0];
        vector<int>dp1(n,-1);
        int a= f1(n-1,dp1,nums,1);
        
        vector<int>dp2(n,-1);
        int b=f1(n-2,dp2,nums,0);
        return max(a,b);
    }
};
