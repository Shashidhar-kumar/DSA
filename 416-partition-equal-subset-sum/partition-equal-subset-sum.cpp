class Solution {
public:
bool partition(vector<int>&nums,int target,int index,vector<vector<int>>&dp){
    if(target==0) return true;
    if(index==nums.size()) return false;
    if(dp[index][target]!=-1) return dp[index][target];
    bool notake=partition(nums,target,index+1,dp);
    bool take=false;
    if(nums[index]<=target){
        take=partition(nums,target-nums[index],index+1,dp);
    }
    return dp[index][target]=take||notake;
}
    bool canPartition(vector<int>& nums) {
        int totalsum=0;
        for(int i=0;i<nums.size();i++){
            totalsum=totalsum+nums[i];
        }
        if(totalsum%2!=0) return false;
        int s1=totalsum/2;
        int s2=totalsum/2;
        vector<vector<int>>dp(nums.size(),vector<int>(s1+1,-1));
        bool can=partition(nums,s1,0,dp);
        return can;
    }
};