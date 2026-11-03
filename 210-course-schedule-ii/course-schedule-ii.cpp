class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>Toposort;
        queue<int>q;
        vector<int>Indegree(numCourses,0);
        vector<int>adj[numCourses];
        for(auto it: prerequisites){
            int u=it[0];
            int v=it[1];
            adj[v].push_back(u);
        }
        for(int i=0;i<numCourses;i++){
            for(auto it:adj[i]){
                Indegree[it]++;
            }
        }
        for(int i=0;i<Indegree.size();i++){
            if(Indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int node=q.front();
             Toposort.push_back(node);
            q.pop();
            for(auto it:adj[node]){
                Indegree[it]--;
                if(Indegree[it]==0){
                    q.push(it);
                }
            }
        }
        if(Toposort.size()==numCourses){
            return Toposort;
        }else{
            return {};
        }
    }
};