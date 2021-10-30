class Solution {
    private:
    int bfs(int x,int y,vector<vector<int>> &grid,int r,int c){
    
        int dx[]={0,-1,0,1,0};
        int count=0;
        queue<pair<int,int>>q;
        q.push({x,y});
        grid[x][y]=0;
        while(!q.empty()){
          pair<int ,int> p = q.front();
          count++;
          q.pop();
          for(int x=0;x<4;x++){
            int new_x=p.first+dx[x];
            int new_y=p.second+dx[x+1];
            if(new_x>=0 and new_y>=0 and new_x<r and new_y<c and grid[new_x][new_y]==1){
               grid[new_x][new_y]=0;
               q.push({new_x,new_y});
            } 
          }
        }

        return count;
}
            
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
       int r=grid.size(),c=grid[0].size();
       int count=INT_MIN;

       for(int x=0;x<r;x++){
         for(int y=0;y<c;y++){
           if( grid[x][y]==1){
              count=max(count,bfs(x,y,grid,r,c));
           }
         }
       }
       if(count==INT_MIN) return 0;
       return count;
    }
};
