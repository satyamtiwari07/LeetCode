class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row1=mat.size();
        int col1=mat[0].size();
       
        if(row1*col1!=r*c)return mat;    
        
        vector<vector<int>> ans(r,vector<int>(c,0));
        int co=0,ro=0;
        for(int row=0 ; row<r; row++){
           for(int col=0; col<c ; col++){
              if(co==col1-1){
                 ans[row][col]=mat[ro][co];
                    ro++;
                    co=0;
              }
              else{
                  ans[row][col]=mat[ro][co++];
              }
         }    
      } 
      return ans;
    }
};
