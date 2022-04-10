class Solution {
public:
    //memoization method
    int f(vector<vector<int>>& grid , int r ,int curr_col , int c,vector<vector<int>>&dp){
        
        if(r==0) return grid[r][curr_col];
        
        if(dp[r][curr_col]!=-1) return dp[r][curr_col];
        int ans=INT_MAX;
        
        //for each column
        for(int x=0;x<c;x++){
            if(x==curr_col) continue;
            ans=min(ans,f(grid,r-1,x,c,dp));
            
        }
        
        return dp[r][curr_col]=ans+grid[r][curr_col];
        
    }
    
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int ans=INT_MAX;
        vector<vector<int>>dp(n,vector<int>(n,-1));
        
        
        //tabulation method
        for(int x=0;x<n;x++)
            dp[0][x]=grid[0][x];
    
        
        for(int r=1 ; r<n ; r++){
            
            for(int c=0 ; c<n ; c++){
                 int m=INT_MAX;
               for(int x=0; x<n ; x++){
                   
                     if(x==c) continue;
                     m=min(m,dp[r-1][x]);
                   
               }
        
               dp[r][c]=m+grid[r][c];
            }
        }
                
        //for each column
        for(int x=0;x<n;x++){
            ans=min(ans,dp[n-1][x]);
        }
        return ans;
        

        
    }
};
