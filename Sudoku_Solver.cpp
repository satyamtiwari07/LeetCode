class Solution {
public:
    bool issafe(vector<vector<char>>& board,int r,int c,int num){
        //check for row
        for(int x=0;x<9;x++){
            if(board[r][x]==num+'0') return false;
        }
        
        //check for column
        for(int x=0;x<9;x++){
            if(board[x][c]==num+'0') return false;
        }
        
        //check for sub matrix
        int cr=(r/3)*3,cc=(c/3)*3;
        
        for(int x=cr ; x<cr+3 ; x++){
            for(int y=cc ; y<cc+3 ; y++){
                if(board[x][y]==num+'0') return false;
            }
        }
        
        return true;
        
    }
    
    bool solve(vector<vector<char>>& board){
        
        for(int c=0;c<9;c++){
            
            for(int r=0;r<9;r++){
                
                if(board[r][c]=='.'){
                    
                    for(int num=1;num<=9;num++){
                        
                        if(issafe(board,r,c,num)){
                            board[r][c]=num+'0';
                             if(solve(board)) return true;
                             else board[r][c]='.';
                        }
                        
                    }
                    // if 1-9 values cannot be placed simply return false 
                    return false; 
                }
            }
        }
        
        // if all values are filled return true means valid suduko
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
