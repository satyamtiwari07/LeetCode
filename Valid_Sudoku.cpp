class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9][9]={0} ,col[9][9]={0} , three_x_three[9][9]={0};

        for(int r=0 ; r<=8 ; r++ ){
             for(int c=0 ; c<=8 ; c++){
                if(board[r][c]=='.') continue;

                int val=board[r][c]-'0'-1;
                int a = r/3*3+c/3; // for row and columns in 3*3 sub matrices
                if(row[r][val] || col[c][val] || three_x_three[a][val])
                     return false;

                row[r][val] = col[c][val] = three_x_three[a][val] = 1;
             }
        }

        return true;
    }
};
