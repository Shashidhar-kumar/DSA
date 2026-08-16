class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>vec=matrix;
        int n=matrix.size();
        for(int i=0;i<vec.size();i++){
            for(int j=0;j<vec.size();j++){
                matrix[i][j]=vec[(n-1)-j][i];
            }
        }
        
    }
};