class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9][9]={0};
        int column[9][9]={0};
        int boxes[9][9]={0};
        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
                if(board[r][c]=='.') continue;
                int val=board[r][c]-'1';
                if(row[r][val]==1){
                    return false;
                }
                row[r][val]++;
                if(column[c][val]==1){
                    return false;
                }
                column[c][val]++;
                int boxidx= 3 *(r/3)+(c/3);
                if(boxes[boxidx][val]==1){
                    return false;
                }
                boxes[boxidx][val]++;
            }
            
        }
        return true;
    }
};