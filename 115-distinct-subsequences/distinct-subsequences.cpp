class Solution {
public:
int distinctsub(string &s,string &t,int i,int j,vector<vector<int>>&dp){
    if(j<0) return 1;
    if(i<0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s[i]==t[j]){
        return dp[i][j]=distinctsub(s,t,i-1,j-1,dp)+distinctsub(s,t,i-1,j,dp);
    }
    else{
        return dp[i][j]=distinctsub(s,t,i-1,j,dp);
    }
}
    int numDistinct(string s, string t) {
        int i=s.size()-1;
        int j=t.size()-1;
        vector<vector<int>>dp(s.size(),vector<int>(t.size(),-1));
        int count=distinctsub(s,t,i,j,dp);
        return count;
    }
};