class Solution {
public:
    int dp[101][101];
    int allpaths(int m,int n)
    {
        if(m==1 || n==1) 
            return dp[m][n]=1;
        if(dp[m][n]!=0) return dp[m][n];
        return dp[m][n]=allpaths(m,n-1)+allpaths(m-1,n);
    }
    int uniquePaths(int m, int n) {
        int a=allpaths(m,n);
        return a;
    }
};
