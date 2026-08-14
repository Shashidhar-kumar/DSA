class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<pair<int,int>>vec;
        for(int i=0;i<arr.size();i++){
            vec.push_back({arr[i],abs(arr[i]-x)});
        }
        vector<int>ans;
        sort(vec.begin(),vec.end(),[](const auto&a, const auto&b){
            if (a.second == b.second){
                return a.first < b.first;
            }
            return a.second<b.second;
        });
       for(int i=0;i<k;i++){
        ans.push_back(vec[i].first);
       }
       sort(ans.begin(),ans.end());
        return ans;
    }
};