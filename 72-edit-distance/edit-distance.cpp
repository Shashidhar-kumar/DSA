class Solution {
public:
int editDistance(string word1,string word2,int i,int j,vector<vector<int>>&dp){
     if(i==word1.size()) return word2.size()-j;
     if(j==word2.size()) return word1.size()-i;
     if(dp[i][j]!=-1) return dp[i][j];
     if(word1[i]==word2[j]){
        return dp[i][j]=editDistance(word1,word2,i+1,j+1,dp);
     }
    
        int replace=1+editDistance(word1,word2,i+1,j+1,dp);
        int deleteel=1+editDistance(word1,word2,i+1,j,dp);
        int insert=1+editDistance(word1,word2,i,j+1,dp);
    return dp[i][j]=min(replace,min(deleteel,insert));
    
    
}
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        int edit=editDistance(word1,word2,0,0,dp);
        return edit;
    }
};