class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        
        bool row=0,col=0;
        
        //first row check
        for(int x=0;x<r;x++){
            if(matrix[x][0]==0) row=1;
        }
        
        //first column check 
        for(int x=0;x<c;x++){
            if(matrix[0][x]==0) col=1;
        }
        
        
        //check from 1-row and 1st column
        
        for(int x=1;x<r;x++){
            for(int y=1;y<c;y++){
                if(matrix[x][y]==0){
                    matrix[0][y]=0;
                    matrix[x][0]=0;
                }
            }
        }
        
        //all rows are filled with zero
        for(int x=1;x<r;x++){
            if(matrix[x][0]==0){
                for(int y=0;y<c;y++){
                    matrix[x][y]=0;
                }
            }
        }
        
        //all column are filled with zero 
        for(int x=1;x<c;x++){
            if(matrix[0][x]==0){
                for(int y=0;y<r;y++){
                    matrix[y][x]=0;
                }
            }
        }
        
        if(row){
            for (int x=0; x<r; x++) {
                matrix[x][0] = 0;
        }
        }
        
        if(col){
            for(int y=0 ; y<c ; y++){
                matrix[0][y]=0;
            }
        }
        
        
    }
};
