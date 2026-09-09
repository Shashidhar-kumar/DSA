class Solution {
public:
int unique(vector<vector<int>>&obstacleGrid,int row,int col,int m,int n,vector<vector<int>>&dp){
    if (obstacleGrid[row][col] == 1)
        return 0;
    if(row==m-1 && col==n-1) return 1;
    int right=0;
    int down=0;
    if(dp[row][col]!=-1) return dp[row][col];
    if(col+1<n && obstacleGrid[row][col+1]==0){
        right=unique(obstacleGrid,row,col+1,m,n,dp);
    }
    if(row+1<m && obstacleGrid[row+1][col]==0){
        down=unique(obstacleGrid,row+1,col,m,n,dp);
    }
    return dp[row][col]=right+down;
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int obstacle=unique(obstacleGrid,0,0,m,n,dp);
        return obstacle;
    }
};