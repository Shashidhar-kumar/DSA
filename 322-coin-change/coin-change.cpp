class Solution {
public:
int coin(vector<int>&coins,int target,int index,vector<vector<int>>&dp){
    if(target==0) return 0;
    
    if(index<0){
        return 1e9;
    }
    if(dp[index][target]!=-1) return dp[index][target];
    int take=1e9;
    if(coins[index]<=target){
        take=1+coin(coins,target-coins[index],index,dp);
    }
    int nottake=coin(coins,target,index-1,dp);
    return dp[index][target]=min(take,nottake);
}
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        int mini=coin(coins,amount,n-1,dp);
        if(mini>=1e9) return -1;
        return mini;
    }
};