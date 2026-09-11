class Solution {
public:
int minipathsum(vector<vector<int>>&matrix,int n,int row,int col,vector<vector<int>>&dp){
    if(row==n-1) return matrix[row][col];
    if(dp[row][col]!=1e9) return dp[row][col];
    int down=INT_MAX;
    int left=INT_MAX;
    int right=INT_MAX;
    if(col-1>=0){
        left=matrix[row][col]+minipathsum(matrix,n,row+1,col-1,dp);
    }
    if(col+1<n){
        right=matrix[row][col]+minipathsum(matrix,n,row+1,col+1,dp);
    }
    down=matrix[row][col]+minipathsum(matrix,n,row+1,col,dp);
    return dp[row][col]=min(left,min(right,down));
}
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int minFalling=INT_MAX;
         vector<vector<int>>dp(n,vector<int>(n,1e9));
        for(int col=0;col<n;col++){
            minFalling=min(minFalling,minipathsum(matrix,n,0,col,dp));
        }
        return minFalling;
    }
};