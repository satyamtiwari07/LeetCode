class Solution {
public:
    void dfs(int x,int y,int r,int c,vector<vector<int>>&grid,vector<vector<bool>>&vis){
        if(x<0 || y<0 || x>=r or y>=c or grid[x][y]==1 or grid[x][y]==-1 || vis[x][y]) return ;
        
        grid[x][y]=-1;
        vis[x][y]=1;
        dfs(x+1,y,r,c,grid,vis);
        dfs(x-1,y,r,c,grid,vis);
        dfs(x,y+1,r,c,grid,vis);
        dfs(x,y-1,r,c,grid,vis);
    }
    
    int closedIsland(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        vector<vector<bool>>vis(row,vector<bool>(col,false));
        set<pair<int,int>>boundary;
        
        for(int x=0;x<row;x++){
             if(grid[x][0]==0) boundary.insert({x,0});
             if(grid[x][col-1]==0) boundary.insert({x,col-1});
        }
        
        for(int x=0;x<col;x++){
             if(grid[0][x]==0) boundary.insert({0,x});
             if(grid[row-1][x]==0) boundary.insert({row-1,x});
        }
        
       for(auto it:boundary)
            dfs(it.first,it.second,row,col,grid,vis);
        
       set<pair<int,int>>rem;
       int count=0;
       
        for(int x=0;x<row;x++){
           for(int y=0;y<col;y++){
                if(grid[x][y]==0) rem.insert({x,y});
            }
        }
        
        for(auto it:rem){
             if(!vis[it.first][it.second]){ 
                 dfs(it.first,it.second,row,col,grid,vis);
                 count++;
             }
        }
        
        return count;
    }
};
