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
        combinations(candidates,target,index+1,vec,ans,sum+candidates[index]);
        vec.pop_back();
    }
    int next=index+1;
    while(next<candidates.size() &&
          candidates[next]==candidates[index]){
        next++;
    }
    combinations(candidates,target,next,vec,ans,sum);
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>vec;
        vector<vector<int>>ans;
        combinations(candidates,target,0,vec,ans,0);
        vector<vector<int>>ans2(ans.begin(),ans.end());
        return ans2;
    }
};