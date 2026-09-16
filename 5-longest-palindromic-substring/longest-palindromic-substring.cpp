class Solution {
public:
bool check(string &s,int i,int j,vector<vector<int>>&dp){
    int x=i;
    int y=j;
    if(dp[i][j]!=-1) return dp[i][j];
    while(i<=j){
        if(s[i]!=s[j]) return dp[x][y]=false;
        i++;
        j--;
    }
    return dp[x][y]=true;
}
    string longestPalindrome(string s) {
        int n=s.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        string palindrome="";
        int maxLength=0;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(check(s,i,j,dp)){
                    if(j-i+1>maxLength){
                        maxLength=max(maxLength,j-i+1);
                        palindrome=s.substr(i,j-i+1);
                    }
                }
            }
        }
        return palindrome;
    }
};