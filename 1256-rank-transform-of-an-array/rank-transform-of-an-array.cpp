class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>vec=arr;
        sort(vec.begin(),vec.end());
        unordered_map<int,int>rank;
        int r=1;
        for(int x: vec){
            if(rank.find(x)==rank.end()){
                rank[x]=r++;
            }
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=rank[arr[i]];
        }
        return arr;
    }
};