class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        vector<vector<int>>visited(row,vector<int>(col,-1));
        int delrow[4]={0,-1,0,1};
        int delcol[4]={-1,0,1,0};
        int noofislands=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(visited[i][j]==-1 && grid[i][j]=='1'){
                    noofislands++;
                    queue<pair<int,int>>q;
                    q.push({i,j});
                    visited[i][j]=1;
                    while(!q.empty()){
                        int rows=q.front().first;
                        int cols=q.front().second;
                        q.pop();
                        for(int i=0;i<4;i++){
                            int nrow=delrow[i]+rows;
                            int ncol=delcol[i]+cols;
                            if(nrow>=0 && ncol>=0 && nrow<row && ncol<col && grid[nrow][ncol]=='1' && visited[nrow][ncol]==-1){
                                q.push({nrow,ncol});
                                visited[nrow][ncol]=1;
                            }
                        }
                    }
                }
            }
        }
        return noofislands;
    }
};