class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int, unordered_set<int>> adj;
        for(int i=0;i<logs.size();i++){
            int users=logs[i][0];
            int minutes=logs[i][1];
            adj[users].insert(minutes);
        }
        vector<int>vec(k+1,0);
        for(auto it:adj){
            int activeminutes=it.second.size();
            vec[activeminutes]++;
        }
        vec.erase(vec.begin());
        return vec;
    }
};