class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>arr;
        vector<int>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int start=nums[0];
        int end=nums[n-1];
        for(int i=start;i<=end;i++){
            arr.push_back(i);
        }
        int i=0;
        int j=0;
        vector<int>vec;
        for(int i=0;i<nums.size();i++){
            vec.push_back(nums[i]);
        }
        for(int i=0;i<arr.size();i++){
            vec.push_back(arr[i]);
        }
        vector<int>hashmap(end+1,0);
        for(int i=0;i<vec.size();i++){
            hashmap[vec[i]]++;
        }
        for(int i=0;i<hashmap.size();i++){
            if(hashmap[i]==1){
                ans.push_back(i);
            }
        }
        return ans;
    }
};