class Solution {
public:
    int f(int i,int j,int r,int c,vector<vector<int>>& matrix,vector<vector<int>>&dp){
        
        if(j<0 || j>=c) return 1e8;
        //row base case;
        if(i==r-1) return matrix[i][j];
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        int d =matrix[i][j]+f(i+1,j,r,c,matrix,dp);
        int ld =matrix[i][j]+f(i+1,j-1,r,c,matrix,dp);
        int rd =matrix[i][j]+f(i+1,j+1,r,c,matrix,dp);
        
        return dp[i][j]=min(d,min(ld,rd));
        
    }
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        
        vector<vector<int>>dp(r,vector<int>(c,-1));
        
        int ans=INT_MAX;
        for(int x=0;x<c;x++){
            ans=min(ans,f(0,x,r,c,matrix,dp));
        }
        
        return ans;
    }
};
