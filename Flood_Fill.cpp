class Solution {
public:
    void dfs(int sr, int sc , int newColor , vector<vector<int>>&image,int initial_col){

    int n=image.size();
    int m=image[0].size();
    
    if(sr<0 || sc<0) return;
    if(sr>=n || sc>=m) return ;
    if(image[sr][sc]!=initial_col) return;
    
    
    image[sr][sc]=newColor;
        
    dfs(sr+1,sc,newColor,image,initial_col);
    dfs(sr-1,sc,newColor,image,initial_col);
    dfs(sr,sc+1,newColor,image,initial_col);
    dfs(sr,sc-1,newColor,image,initial_col);

}

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    { if(image[sr][sc]!=newColor) 
            dfs(sr,sc,newColor,image,image[sr][sc]);
         return image;
    }
};
