class Solution {
public:
int coinchange(int amount,vector<int>&coins,int index,vector<vector<int>>&dp){
    if(amount==0) return 1;
    if(index==coins.size()) return 0;
    if(dp[index][amount]!=-1) return dp[index][amount];
    int take=0;
    if(coins[index]<=amount){
        take=coinchange(amount-coins[index],coins,index,dp);
    }
    int nottake=coinchange(amount,coins,index+1,dp);
    return dp[index][amount]=take+nottake;
}
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        int coin=coinchange(amount,coins,0,dp);
        return coin;
    }
};