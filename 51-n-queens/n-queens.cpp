class Solution {
public:
vector<string> chess_board;
    vector<vector<string>>answer;
    bool isSafe(int row, int col, int n){
        int i,j;
        for(i=0; i<col; i++)
            if(chess_board[row][i] == 'Q')
                return false;
        for(i=row, j=col; i>=0 && j>=0; i--,j--)
            if(chess_board[i][j]=='Q')
                return false;
        for(i=row, j=col; j>=0 && i<n; i++, j--)
            if(chess_board[i][j]=='Q')
                return false;
        return true;
    }
    void solve_n_queen(int col, int n){
        if(col==n){
            answer.push_back(chess_board);
            return;
        }
        for(int i=0;i<n;i++){
            if(isSafe(i,col,n)){
                chess_board[i][col]='Q';
                solve_n_queen(col+1,n);
                chess_board[i][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        chess_board.resize(n);
        for(int i=0; i<n; i++)
        {
            chess_board[i]=string(n,'.');
        }
        solve_n_queen(0,n);
        return answer;
    }

    
};