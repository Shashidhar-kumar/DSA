class Solution {
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>>indegree(m,vector<int>(n,0));
        int delrow[4]={0,-1,0,1};
        int delcol[4]={-1,0,1,0};
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                for(int x=0;x<4;x++){
                    int nrow=delrow[x]+i;
                    int ncol=delcol[x]+j;
                    if(nrow>=0 && nrow<m && ncol<n && ncol>=0){
                        if(matrix[nrow][ncol]>matrix[i][j]){
                            indegree[nrow][ncol]++;
                        }
                    }
                }
            }
        }
            queue<pair<pair<int,int>, int>> q;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(indegree[i][j]==0){
                        q.push({{i,j},1});
                    }
                }
        }
        int maxlen=1;
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int len=q.front().second;
            maxlen=max(maxlen,len);
            q.pop();
            for(int i=0;i<4;i++){
                int nrow=delrow[i]+row;
                int ncol=delcol[i]+col;
                if(nrow>=0 && ncol>=0 && nrow<m && ncol<n){
                    if(matrix[nrow][ncol]>matrix[row][col]){
                        indegree[nrow][ncol]--;
                        if(indegree[nrow][ncol]==0){
                            q.push({{nrow,ncol},len+1});
                        }
                    }
                }
            }
        }
        return maxlen;
        
    }
};