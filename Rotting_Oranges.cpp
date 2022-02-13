class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int t=0;
  queue<pair<int,int>>q;
  int r=grid.size();
  int c=grid[0].size();
  int empty=0,rottens=0;
  
  for(int x=0 ; x<r ; x++){
     for(int y=0 ; y<c ; y++){
         if(grid[x][y]==2){
            rottens++;
            q.push({x,y});
        }
         else if(grid[x][y]==0)
            empty++;
     }
  }
  
  if(empty==r*c)
    return 0;
 
 while(!q.empty())
 { 
   t++;
  int len=q.size();
  for(int x=0;x<len;x++){

      int a=q.front().first;
      int b=q.front().second;
      q.pop();
      int dir[5]={-1,0,1,0,-1};
      
      for(int x=0;x<4;x++)
      {
        int nx=a+dir[x];
        int ny=b+dir[x+1];
        if(nx<0 || ny<0 || nx>=r || ny>=c || grid[nx][ny]==0 || grid[nx][ny]==2)
            continue;
        else{

            rottens++;
            grid[nx][ny]=2;
            q.push({nx,ny});
        }
      }
  }

}

if(empty+rottens < r*c)
    return -1;
return t-1;
        
    }
};
