class Solution {
public:
void combinations(vector<int>&candidates,int target,int index,vector<int>&vec,vector<vector<int>>&ans,int sum){
    if(sum==target){
        ans.push_back(vec);
        return;
    }
    if(index>=candidates.size()) return;
    if(sum+candidates[index]<=target){
        vec.push_back(candidates[index]);
        combinations(candidates,target,index,vec,ans,sum+candidates[index]);
        vec.pop_back();
    }
    combinations(candidates,target,index+1,vec,ans,sum);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>vec;
        combinations(candidates,target,0,vec,ans,0);
        return ans;
    }
};