class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int totalXOR=0;
        int maxlen=0;
        for(int i=0;i<nums.size();i++){
            totalXOR=totalXOR^nums[i];
        }
        if(totalXOR!=0) return nums.size();
        if(totalXOR==0){
           for (int x = nums.size() - 1; x >= 0; x--) {
        if (nums[x] != 0) {
            return nums.size() - 1; // Removing any single non-zero element makes XOR non-zero
        }
    }
    }
        return 0;
    }
};