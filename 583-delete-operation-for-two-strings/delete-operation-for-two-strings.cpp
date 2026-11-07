class Solution {
public:
int Distance(int i,int j,string word1,string word2,vector<vector<int>>&dp){
    if(i==word1.size()) return word2.size()-j;
    if(j==word2.size()) return word1.size()-i;
    int equal=INT_MAX;
    int forward=INT_MAX;
    int backward=INT_MAX;
    if(dp[i][j]!=-1) return dp[i][j];
    if(word1[i]==word2[j]){
        equal=Distance(i+1,j+1,word1,word2,dp);
    }
    if(word1[i]!=word2[j]){
        forward=1+Distance(i+1,j,word1,word2,dp);
        backward=1+Distance(i,j+1,word1,word2,dp);
    }
    return dp[i][j]=min(equal,min(forward,backward));
}
    int minDistance(string word1, string word2) {
        vector<vector<int>>dp(word1.size()+1,vector<int>(word2.size()+1,-1));
        int mini=Distance(0,0,word1,word2,dp);
        return mini;
    }
};