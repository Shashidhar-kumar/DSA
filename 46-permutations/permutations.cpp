class Solution {
public:
void permutations(vector<vector<int>>&vec,int index,vector<int>&nums){
    if(index==nums.size()){
        vec.push_back(nums);
        return;
    }
    for(int i=index;i<nums.size();i++){
        swap(nums[index],nums[i]);
        permutations(vec,index+1,nums);
        swap(nums[index],nums[i]);
    }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>vec;
        permutations(vec,0,nums);
        return vec;
    }
};