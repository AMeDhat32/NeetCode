class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9][9]{},col[9][9]{},SubBoard[9][9][9]{};
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char x = board[i][j];
                if(x=='.')continue;
                int number  = x - '1';
                if(col[j][number]||row[i][number]||SubBoard[i/3 *3][j/3 *3][number])return 0;
                col[j][number]++;
                row[i][number]++;
                SubBoard[i/3 *3][j/3 *3][number]++;
            }
        }


        return 1;
    }
};