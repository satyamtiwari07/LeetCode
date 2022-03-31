class Solution {
public:
    
    bool issafe(int row,int col,vector<string>&board,int n){
        int r,c;
        
        //check for row
        for (c = 0; c < col; c++) if (board[row][c]=='Q') return false;
        
        // check for left upper diagonal
        for (r = row, c = col; r >= 0 && c >= 0; r--, c--) if (board[r][c]=='Q') return false;
        
        // check for right upper diagonal
        for ( r = row, c = col; c >= 0 && r < n; r++, c--) if (board[r][c]=='Q') return false; 
        
        return true;
    }
    
    void solve(int col,vector<string>&board,vector<vector<string>>&ans,int n){
        
        if(col==n) ans.push_back(board);
        
        for(int row=0;row<n;row++){
            if(issafe(row,col,board,n)){
                board[row][col]='Q';
                solve(col+1,board,ans,n);
                board[row][col]='.';
            }        
        }
    }
    
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        string str(n,'.');
        vector<string> board;
        
         for(int x=0;x<n;x++) board.push_back(str);
        
        solve(0,board,ans,n);
        return ans;
    }
};
