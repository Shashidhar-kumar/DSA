class Solution {
public:
bool find(int row,int col,string word,int index,int m,int n,vector<vector<char>>&board){
    if(index==word.size()) return true;
    if(row<0 || col<0 || row>=m || col>=n || board[row][col]=='$') return false;
    if(board[row][col]!=word[index]) return false;

    char temp=board[row][col];
    board[row][col]='$';

        bool top = find(row-1, col, word, index+1, m, n, board);
        bool right = find(row, col+1, word, index+1, m, n, board);
        bool down = find(row+1, col, word, index+1, m, n, board);
        bool left = find(row, col-1, word, index+1, m, n, board);
    board[row][col]=temp;
    return top||right||down||left;
}
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0] && find(i,j,word,0,m,n,board)){
                   return true;
                }
            }
        }
        return false;
    }
};