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
    int countSubstrings(string s) {
        int count=0;
        int n=s.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(check(s,i,j,dp)){
                    count++;
                }
            }
        }
        return count;
    }
};