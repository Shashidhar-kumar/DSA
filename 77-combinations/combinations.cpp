class Solution {
public:
void combination(vector<int>&nums,vector<vector<int>>&ans,vector<int>&vec,int k,int index){
    if(vec.size()==k){
        ans.push_back(vec);
        return;
    }
    if(index==nums.size()) return;
    vec.push_back(nums[index]);
    combination(nums,ans,vec,k,index+1);
    vec.pop_back();
    combination(nums,ans,vec,k,index+1);
}
    vector<vector<int>> combine(int n, int k) {
        vector<int>nums;
        for(int i=1;i<=n;i++){
            nums.push_back(i);
        }
        vector<vector<int>>ans;
        vector<int>vec;
        combination(nums,ans,vec,k,0);
        return ans;
    }
};