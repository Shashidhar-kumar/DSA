class Solution {
public:
int palindrome(string &s,int i,int j,vector<vector<int>>&dp){
    if(i>j) return 0;
    if(i==j) return 1;
    if(dp[i][j]!=-1) return dp[i][j];
    int match=0;
    if(s[i]==s[j]){
        match=2+palindrome(s,i+1,j-1,dp);
    }
    int take=palindrome(s,i+1,j,dp);
    int notake=palindrome(s,i,j-1,dp);
    return dp[i][j]=max(match,max(take,notake));
}
    int longestPalindromeSubseq(string s) {
        vector<vector<int>>dp(s.size(),vector<int>(s.size(),-1));
        int longest=palindrome(s,0,s.size()-1,dp);
        return longest;
    }
};