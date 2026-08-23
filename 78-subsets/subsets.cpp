class Solution {
public:
void subset(vector<int>&ans,vector<vector<int>>&vec,vector<int>&nums,int index){
    if(index==nums.size()){
        vec.push_back(ans);
        return;
    }
    ans.push_back(nums[index]);
    subset(ans,vec,nums,index+1);
    ans.pop_back();
    subset(ans,vec,nums,index+1);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>>vec;
        subset(ans,vec,nums,0);
        return vec;
    }
};