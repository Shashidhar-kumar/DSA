class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int>vec(1001,0);
        for(auto trip: trips){
            int passenger=trip[0];
            int from=trip[1];
            int to=trip[2];
            vec[from]=vec[from]+passenger;
            vec[to]=vec[to]-passenger;
            for(int i=0;capacity>=0 && i<1001;i++){
                capacity=capacity-vec[i];
            }
        }
        return capacity>=0;
    }
};