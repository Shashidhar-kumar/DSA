class Solution {
public:
int numsbst(int n,vector<int>&dp){
    if(n==0 || n==1) return 1;
    if(dp[n]!=0) return dp[n];
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans+numsbst(i,dp)*numsbst(n-1-i,dp);
    }
    return dp[n]=ans;
}
    int numTrees(int n) {
        vector<int>dp(n+1,0);
        int unique=numsbst(n,dp);
        return unique;
    }
};