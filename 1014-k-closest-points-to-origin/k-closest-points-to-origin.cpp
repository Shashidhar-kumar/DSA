class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int, vector<int>>>vec;
        for(auto it:points){
            int x1=it[0];
            int x2=it[1];
            int ans=x1*x1+x2*x2;
            vec.push_back({ans,it});
        }
        sort(vec.begin(),vec.end());
        vector<vector<int>>ans;
        int i=1;
        for(int i=0;i<k;i++){
            ans.push_back(vec[i].second);
        }
        return ans;
    }
};