
// Time Complexity: Exponential in nature, since we are trying out all ways. To be precise it goes as O(N! * N) nearly.
// Space Complexity: O(N^2)
class Solution {
public:
    bool isSafe(int row, int col , vector<string>&board, int n ){
        
        int dupCol = col;
        int dupRow = row;
        
        while(col >=0 && row >=0){
            if(board[row][col] == 'Q') return false;
            col--; row--;
        }
        
        col = dupCol;
        row = dupRow;        
        while(col >= 0){
            if(board[row][col] == 'Q') return false;
            col--;            
        }
        
        col = dupCol;
        row = dupRow;        
        while( row < n && col >= 0){
            if(board[row][col] == 'Q') return false;
            row++;
            col--;
        }
        return true;      
}
    void solve(int col , vector<string>&board, vector<vector<string>>&ans, int n){
        
        if(col == n){
            ans.push_back(board);
            return;
        }
        
        for(int Row = 0; Row < n; Row++){
            if(isSafe(Row, col, board, n)){
                board[Row][col] = 'Q';
                solve(col+1, board, ans, n);
                board[Row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        
        for(int i=0;i<n;i++){
            board[i] = s;
        }
        solve(0,board,ans,n);
        return ans;
        
    }
};




// Time Complexity: Exponential in nature since we are trying out all ways, to be precise it is O(N! * N).
Space Complexity: O(N)

void solveUsingHashing(int col, vector<string>&board, vector<vector<string>>&ans, int n,
                          vector<int>&leftRow, vector<int>&lowerDiagonal, vector<int>&upperDiagonal)
    {
        if(col == n){
            ans.push_back(board);
            return;
        }
        
        for(int row = 0; row<n;row++){
            if(leftRow[row] == 0 && lowerDiagonal[row+col] == 0 && upperDiagonal[n-1+col-row]==0)
            {
                // insert the queen 
                board[row][col] = 'Q';
                leftRow[row] = 1;
                lowerDiagonal[row+col] = 1;
                upperDiagonal[n-1+col-row]= 1;
                
                solveUsingHashing(col+1, board, ans, n, leftRow, lowerDiagonal, upperDiagonal);
                
                // remove the queen for next iteration
                board[row][col] = '.';
                leftRow[row] = 0 ;
                lowerDiagonal[row+col] = 0 ;
                upperDiagonal[n-1+col-row]= 0 ;
            }
        }
        
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        
        for(int i=0;i<n;i++){
            board[i] = s;
        }
        /*solve(0,board,ans,n);*/
        
        vector<int>leftRow(n,0), lowerDiagonal(2*n-1), upperDiagonal(2*n-1);
        
        solveUsingHashing(0, board, ans, n, leftRow, lowerDiagonal, upperDiagonal );
        return ans;
        
    }