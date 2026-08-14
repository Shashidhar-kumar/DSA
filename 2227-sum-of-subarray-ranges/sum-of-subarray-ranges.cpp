class Solution {
public:

    long long subArrayRanges(vector<int>& nums) {
        long long ans=0;
        vector<int>vec;
        
            for (int i = 0; i < nums.size(); i++) {
                int minv=nums[i];
                int maxv=nums[i];
        for (int j = i; j < nums.size(); j++) {
            minv=min(minv,nums[j]);
            maxv=max(maxv,nums[j]);
            ans=ans+(maxv-minv);
        }
    }
    
        return ans;

    }
};