class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int row=grid.size();
        int col=grid[0].size();
        vector<vector<int>>shifted(row,vector<int>(col));
        int total=row*col;
         k=k%total;
         while(k--){
            for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                    if(j!=col-1){
                    shifted[i][j+1]=grid[i][j];
                    }
                    else if( i!=row-1){
                    shifted[i+1][0]=grid[i][j];
                    }
                    else{
                    shifted[0][0]=grid[i][j];
                    }
                
            }
        }
        grid=shifted;
         }
        
        return grid;
    }
};