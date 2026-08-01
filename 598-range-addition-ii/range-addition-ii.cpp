class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int minRow=m;
        int mincol=n;
        for(auto &op:ops){
            minRow=min(minRow,op[0]);
            mincol=min(mincol,op[1]);
        }
        return minRow*mincol;
    }
};