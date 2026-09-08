class Solution {
public:
int Robbery(vector<int>&nums,vector<int>&dp,int index,int start){
    if(index<start) return 0;
    if(index==start) return nums[index];
    if(dp[index]!=-1) return dp[index];
    int take=nums[index]+Robbery(nums,dp,index-2,start);
    int nottake=Robbery(nums,dp,index-1,start);
    return dp[index]=max(take,nottake);
}
    int rob(vector<int>& nums) {
        int maxi=0;
        if(nums.size()==1) return nums[0];
        vector<int>dp1(nums.size(),-1);
        int ans1=Robbery(nums,dp1,nums.size()-1,1);
        vector<int>dp2(nums.size(),-1);
        int ans2=Robbery(nums,dp2,nums.size()-2,0);
        return max(ans1,ans2);
    }
};