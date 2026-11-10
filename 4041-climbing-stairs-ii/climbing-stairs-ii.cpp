class Solution {
public:
int cost(vector<int>& costs, int index, int n,vector<int>&dp) {
    if (index == n) return 0;
    if(dp[index]!=-1) return dp[index];
    int first = INT_MAX;
    int second = INT_MAX;
    int third = INT_MAX;
    if (index+1<=n) {
        first = costs[index] + 1 + cost(costs, index + 1, n,dp);
    }
    if (index+2<=n) {
        second = costs[index + 1] + 4 + cost(costs, index + 2, n,dp);
    }
    if (index + 3 <= n) {
        third = costs[index + 2] + 9 + cost(costs, index + 3, n,dp);
    }
    return dp[index]=min(first, min(second, third));
}
    int climbStairs(int n, vector<int>& costs) {
        vector<int>dp(costs.size(),-1);
        int mini=cost(costs,0,n,dp);
        return mini;
    }
};