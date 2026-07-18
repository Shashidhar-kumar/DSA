class Solution {
public:
static bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second > b.second;
}
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        vector<pair<int,int>>vec;
        for(auto it: map){
            vec.push_back({it.first,it.second});
        }
        sort(vec.begin(),vec.end(),cmp);
        vector<int>ans;
        int count=0;
        for(int i=0;i<vec.size();i++){
            if(count!=k){
              ans.push_back(vec[i].first);
            count++;
            } 
        }
        return ans;
    }
};