class Solution {
public:
    bool containsCycle(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>visited(m,vector<int>(n,0));
        queue<pair<pair<int,int>, pair<int,int>>> q;
        int delrow[4]={0,-1,0,1};
        int delcol[4]={-1,0,1,0};
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(visited[i][j]) continue;
                q.push({{i,j},{-1,-1}});
                visited[i][j]=1;
                while(!q.empty()){
                    int row=q.front().first.first;
                    int col=q.front().first.second;
                    int prow=q.front().second.first;
                    int pcol=q.front().second.second;
                    q.pop();
                    for(int k=0;k<4;k++){
                        int nrow=delrow[k]+row;
                        int ncol=delcol[k]+col;
                        if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && grid[nrow][ncol]==grid[row][col]){
                            if(visited[nrow][ncol]==0){
                            visited[nrow][ncol]=1;
                            q.push({{nrow,ncol},{row,col}});
                        }
                        else if(nrow!=prow || ncol!=pcol) return true;
                    }
                    }
                }
            }
        }
        return false;
    }
};