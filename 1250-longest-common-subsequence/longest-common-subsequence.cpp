class Solution {
public:
int LCS(string &text1,string &text2,int i,int j,vector<vector<int>>&dp){
    if(i==text1.size() || j==text2.size()){
        return 0;
    }
    if(dp[i][j]!=-1) return dp[i][j];
    if(text1[i]==text2[j]){
        return dp[i][j]=1+LCS(text1,text2,i+1,j+1,dp);
    }
    int skip1=LCS(text1,text2,i+1,j,dp);
    int skip2=LCS(text1,text2,i,j+1,dp);
    return dp[i][j]=max(skip1,skip2);
}
    int longestCommonSubsequence(string text1, string text2) {
        int n1=text1.size();
        int n2=text2.size();
        vector<vector<int>>dp(n1,vector<int>(n2,-1));
        int lcs=LCS(text1,text2,0,0,dp);
        return lcs;

    }
};