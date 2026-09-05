class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>prefMax(nums.size());
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
            prefMax[i]=maxi;
        }
        vector<int>SuffMin(nums.size());
        int mini=INT_MAX;
        for(int i=nums.size()-1;i>=0;i--){
            mini=min(mini,nums[i]);
            SuffMin[i]=mini;
        }
        vector<int>Instability(nums.size());
        for(int i=0;i<nums.size();i++){
            Instability[i]=prefMax[i]-SuffMin[i];
        }
        for(int i=0;i<nums.size();i++){
            if(Instability[i]<=k) return i;
        }
        return -1;

    }
};