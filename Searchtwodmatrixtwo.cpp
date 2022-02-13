class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int c=matrix[0].size();
      int r=matrix.size();

      int row=0,column=c-1;

      while(row>=0 && column>=0 && row<r &&  column<c){
            if(matrix[row][column] == target)  return true;

            else if(matrix[row][column] > target)
              column--;
            else if(matrix[row][column]<target)
              row++;
      }
      return false;
        }
};
