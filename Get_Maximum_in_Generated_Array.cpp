class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0 or n==1) return n;
        
        int dp[101]={0};
        dp[0]=0;
        dp[1]=1;
        int ans=1;
         
        for(int x=1;x<=(n-1)/2;x++){
            dp[2*x]=dp[x];
            dp[2*x+1]=dp[x]+dp[x+1];
            
            ans=max(ans,max(dp[2*x],dp[2*x+1]));
        }
        
        return ans;
            
    }
};
