class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        vector<int>runningsum;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            runningsum.push_back(sum);
        }
        return runningsum;
    }
};