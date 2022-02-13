class Solution {
public:
    
    bool check(int x,int y,int r,int c,vector<vector<char>>& board){
        if(x>=0 and x<r and y>=0 and y<c and board[x][y]=='O') return true;
        return false;
    }
    
    void transform(vector<vector<char>>& board){
        int r=board.size();
        int c=board[0].size();
        
        for(int x=0;x<r;x++){
             for(int y=0;y<c;y++){
                  if(board[x][y]=='O') 
                        board[x][y]='X';
                  else if(board[x][y]=='Y')
                       board[x][y]='O';
             }
        }
    }
    
    void dfs(int x,int y,int r,int c,vector<vector<char>>& board)
    {
        board[x][y]='Y';
        
        if(check(x+1,y,r,c,board))
            dfs(x+1,y,r,c,board);
        
        if(check(x-1,y,r,c,board))
            dfs(x-1,y,r,c,board);
        
        if(check(x,y+1,r,c,board))
            dfs(x,y+1,r,c,board);
        
        if(check(x,y-1,r,c,board))
            dfs(x,y-1,r,c,board);
             
    }
    
    void solve(vector<vector<char>>& board) {
        int r=board.size();
        int c=board[0].size();
        set<pair<int,int>>points;
        
        for(int x=0 ; x<r ; x++){
          for(int y=0 ; y<c ; y++){
            if(x==0 and board[x][y]=='O') 
                points.insert({x,y});
            if(x==r-1 and board[x][y]=='O')
                points.insert({x,y});
            if(y==0 and board[x][y]=='O')
                points.insert({x,y});
            if(y==c-1 and board[x][y]=='O')
                points.insert({x,y});
            }
        }
        
        for(auto it: points) 
            dfs(it.first,it.second,r,c,board);
        transform(board);
    }
};
