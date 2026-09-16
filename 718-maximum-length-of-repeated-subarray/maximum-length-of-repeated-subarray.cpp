class Solution {
public:
int subarray(vector<int>&nums1,vector<int>&nums2,int i,int j,vector<vector<int>>&dp){
    if(i==nums1.size() || j==nums2.size()) return 0;
    int take=0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(nums1[i]==nums2[j]){
        return dp[i][j]=1+subarray(nums1,nums2,i+1,j+1,dp);
    }
    return dp[i][j]=0;
}
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>dp(nums1.size(),vector<int>(nums2.size(),-1));
        int maxilength = 0;

        for(int i = 0; i < nums1.size(); i++) {
            for(int j = 0; j < nums2.size(); j++) {

                maxilength = max(maxilength,
                    subarray(nums1, nums2, i, j, dp));
            }
        }
        return maxilength;
    }
};