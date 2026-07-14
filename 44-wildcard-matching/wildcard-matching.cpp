class Solution {
public:
bool wildcard(string &s,string &p,int i,int j,vector<vector<int>>&dp){

    if(i==s.size() && j==p.size()) return true;
    if(j==p.size()){
        return false;
    }
    
    if(i==s.size()){
        for(int x=j;x<p.size();x++){
            if(p[x]!='*') return false;
        }
        return true;
    }
    if(dp[i][j]!=-1) return dp[i][j];
    if(p[j]!='*'&& p[j]!='?'){
        if(s[i]!=p[j]) return false;
    }
    
    if(p[j]==s[i] || p[j]=='?'){

        return dp[i][j]=wildcard(s,p,i+1,j+1,dp);
    }
    bool take=false;
    if(p[j]=='*'){
        take=wildcard(s,p,i+1,j,dp);
        bool nottake=wildcard(s,p,i,j+1,dp);
        return dp[i][j]=take|| nottake;
    }
    return dp[i][j]=false;
    
}
    bool isMatch(string s, string p) {
        int n=s.size();
        int m=p.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        int cardmatch=wildcard(s,p,0,0,dp);
        return cardmatch;
    }
};