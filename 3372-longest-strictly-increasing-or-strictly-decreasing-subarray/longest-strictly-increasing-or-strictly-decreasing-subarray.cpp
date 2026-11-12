class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        vector<vector<int>>arr;
        for(int i=0;i<nums.size();i++){
            vector<int>vec;
            for(int j=i;j<nums.size();j++){
                vec.push_back(nums[j]);
                arr.push_back(vec);
            }
        }
        int maxi=INT_MIN;
        for(auto it: arr){
        bool inc=true;
        bool dec=true;
        for(int i=0;i<it.size()-1;i++){
            if(it[i]>=it[i+1]){
                inc=false;
            }
            if(it[i]<=it[i+1]){
                dec=false;
            }
        }
        if(inc || dec){
            maxi=max(maxi,(int)it.size());
        }
    }
    return maxi;
}
};