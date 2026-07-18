class Solution {
public:
    int findGCD(vector<int>& nums) {
         int maxi=INT_MIN;
         int mini=INT_MAX;
         for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
         }
         for(int j=0;j<nums.size();j++){
            mini=min(mini,nums[j]);
         }
         return gcd(maxi,mini);
    }
};