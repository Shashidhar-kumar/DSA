class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        
        unordered_map<int,int>mpp;
        int l=0;
        int maxlen=0;
        for(int r=0;r<nums.size();r++){
            mpp[nums[r]]++;
            while(mpp[nums[r]]>k){
                mpp[nums[l]]--;
                l++;
            }
            maxlen=max(maxlen,r-l+1);
        }
        
        return maxlen;

    }
};