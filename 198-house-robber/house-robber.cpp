class Solution {
public:
int Robbery(vector<int>&nums,vector<int>&dp,int index){
    if(index==0) return nums[index];
    if(index<0) return 0;
    if(dp[index]!=-1) return dp[index];
    int take=nums[index]+Robbery(nums,dp,index-2);
    int nottake=Robbery(nums,dp,index-1);
    return dp[index]=max(take,nottake);
}
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        int ans=Robbery(nums,dp,nums.size()-1);
        return ans;
    }
};