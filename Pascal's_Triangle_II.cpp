class Solution {
public:
    vector<int> getRow(int rowindex) {
        vector<int>ans(rowindex+1,1);
        if(rowindex==0 || rowindex==1) return ans;
        int dp[rowindex+1][rowindex+1];
        
        dp[0][0]=dp[1][0]=dp[1][1]=1;
        
        for(int r=2 ; r<=rowindex ; r++){
             for(int c=0 ; c<=r ; c++){
                  if(c==0 || r==c) dp[r][c]=1;
                  else
                       dp[r][c]=dp[r-1][c]+dp[r-1][c-1];
             }
        }
        
        for(int c=0 ; c<rowindex ; c++){
             ans[c]=dp[rowindex][c];
        }
        return ans;
    }
};
