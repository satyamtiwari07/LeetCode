class Solution {
public:
    //top down approach 
    int f(int i,int j,int r ,vector<vector<int>>& triangle,vector<vector<int>>&dp){
        
        if(i==r-1) return triangle[i][j];
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        int down=triangle[i][j] + f(i+1,j,r,triangle,dp);
        int digonal=triangle[i][j] +f(i+1,j+1,r,triangle,dp);
        
        return dp[i][j]=min(down,digonal);
        
    }
    
    
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        
        //tabulation
        //base case
        for(int j=0;j<n;j++) dp[n-1][j]=triangle[n-1][j];
        
        
        for(int i=n-2 ; i>=0 ; i--){
            
            for(int j=i; j>=0;j--){
                
                int down=triangle[i][j] + dp[i+1][j];
                int digonal=triangle[i][j] +dp[i+1][j+1];
        
                dp[i][j]=min(down,digonal);
            }
        }
        return dp[0][0];
        
        
        
        // return f(0,0,n,triangle,dp);
    }
};
