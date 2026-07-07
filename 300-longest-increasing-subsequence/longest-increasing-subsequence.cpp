class Solution {
public:
int LIS(vector<int>&nums,int index,int prevIndex,vector<vector<int>>&dp){
    if(index==nums.size()) return 0;
    if(dp[index][prevIndex+1]!=-1) return dp[index][prevIndex+1];
    int take=0;
    if(prevIndex==-1 || nums[index]>nums[prevIndex]){
        take=1+LIS(nums,index+1,index,dp);
    }
    int nottake=LIS(nums,index+1,prevIndex,dp);
    return dp[index][prevIndex+1]=max(take,nottake);

}
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        int lis=LIS(nums,0,-1,dp);
        return lis;
    }
};