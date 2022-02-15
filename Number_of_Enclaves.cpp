class Solution {
public:
    void dfs(int x,int y,int r,int c, vector<vector<int>>& grid){
        if(x<0 || x>=r || y<0 || y>=c || grid[x][y]==-1 || grid[x][y]==0)
             return ;
        grid[x][y]=-1;
        dfs(x+1,y,r,c,grid);
        dfs(x-1,y,r,c,grid);
        dfs(x,y+1,r,c,grid);
        dfs(x,y-1,r,c,grid);
    }
    
    int total(vector<vector<int>>& grid){
        int r=grid.size();
        int c=grid[0].size();
        int tot=0;
        for(int x=0 ; x<r;x++){
             for(int y=0 ;y<c;y++){
                  if(grid[x][y]==1)
                       tot+=1;
             }
        }
        return tot;
    }
    
    int numEnclaves(vector<vector<int>>& grid) {
        
        int r=grid.size();
        int c=grid[0].size();
        set<pair<int,int>>v;
        for(int x=0 ; x<c ; x++){
            if(grid[0][x]==1) v.insert({0,x});
            if(grid[r-1][x]==1) v.insert({r-1,x});
        }
        
        for(int x=0 ; x<r ; x++){
            if(grid[x][0]==1) v.insert({x,0});
            if(grid[x][c-1]==1) v.insert({x,c-1});
        }
        
        for(auto it:v)
            dfs(it.first,it.second,r,c,grid);
        
        int a=total(grid);
        return a;
        
    }
};
