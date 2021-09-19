class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int col=matrix[0].size();
       int row=matrix.size();

       int r=0;
       while(r>=0 && r<row){
           if(target > matrix[r][col-1]){
               r++;
               continue;
           }

           int lo=0,hi=col-1;
           while(hi-lo>1){

              int mid=(lo+hi)/2;
              if(matrix[r][mid]==target){
                  return true;
              }
              else if(matrix[r][mid]>target){
                  hi=mid-1;
              }
              else 
                lo=mid+1;
           }
           if(matrix[r][hi]==target) return true;
           if(matrix[r][lo]==target) return true;

           break;
       }
         return false; 
    }
};
