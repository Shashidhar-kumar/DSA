class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int row=nums.size();
        int col=nums[0].size();
        for(int i=0;i<row;i++){
            sort(nums[i].begin(),nums[i].end());
        }
        int score=0;
        for(int j=col-1;j>=0;j--){
            int maxi=0;
            for(int i=0;i<row;i++){
                maxi=max(maxi,nums[i][j]);
            }
            score=score+maxi;
        }
        return score;
    }
};