class Solution {
public:
int solve(vector<int>&nums,int target,int index,int sum,vector<vector<int>>&dp,int Totalsum){
    if((sum==target) && index==nums.size()){
        return 1;
    }
    else if(sum!=target && index==nums.size()) return 0;
    if(dp[index][Totalsum+sum]!=-1) return dp[index][Totalsum+sum];
    

    int takepos=solve(nums,target,index+1,sum+nums[index],dp,Totalsum);
    int takeneg=solve(nums,target,index+1,sum-nums[index],dp,Totalsum);
    return dp[index][Totalsum+sum]=takepos+takeneg;
    
}
    int findTargetSumWays(vector<int>& nums, int target) {
        
        int sum=0;
        int n=nums.size();
        int Totalsum=0;
        for(int i=0;i<n;i++){
            Totalsum=Totalsum+nums[i];
        }
        if(target>Totalsum || target<-Totalsum) return 0;
        vector<vector<int>>dp(n,vector<int>(2* Totalsum+1,-1));
        int express=solve(nums,target,0,sum,dp,Totalsum);

        return express;
    }
};