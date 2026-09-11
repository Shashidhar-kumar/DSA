class Solution {
public:
void subsets(vector<int>&nums,vector<int>&vec,set<vector<int>>&ans,int index){
    if(index==nums.size()){
        ans.insert(vec);
        return;
    }
    vec.push_back(nums[index]);
    subsets(nums,vec,ans,index+1);
    vec.pop_back();
    
    subsets(nums,vec,ans,index+1);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>vec;
        set<vector<int>>ans;
        subsets(nums,vec,ans,0);
        vector<vector<int>>result(ans.begin(),ans.end());
        return result;
    }
};