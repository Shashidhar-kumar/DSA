class Solution {
public:
int unique(int row,int col,int orgrow,int orgcol,vector<vector<int>>&dp){
    if(row==orgrow-1 && col==orgcol-1) return 1;
    if(dp[row][col]!=-1) return dp[row][col];
    int right=0;
    int down=0;
    if(col+1<orgcol){
        right=unique(row,col+1,orgrow,orgcol,dp);
    }
    if(row+1<orgrow){
        down=unique(row+1,col,orgrow,orgcol,dp);
    }
    return dp[row][col]=right+down;
}
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int totalpaths=unique(0,0,m,n,dp);
        return totalpaths;
    }
};