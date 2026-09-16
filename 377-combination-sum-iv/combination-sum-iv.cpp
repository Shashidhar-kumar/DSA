class Solution {
public:
int combinations(vector<int>&nums,int target,int sum,vector<int>&dp){
    if(target==sum) return 1;
    if(sum>target) return 0;
    if(dp[sum]!=-1) return dp[sum];
    int count=0;
    for(int i=0;i<nums.size();i++){
        count=count+combinations(nums,target,sum+nums[i],dp);
    }
    return dp[sum]=count;
}
    int combinationSum4(vector<int>& nums, int target) {
        vector<int>dp(target+1,-1);
        int combination=combinations(nums,target,0,dp);
        return combination;
    }
};