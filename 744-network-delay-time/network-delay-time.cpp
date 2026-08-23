class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0,k});
        vector<int>distance(n+1,INT_MAX);
        distance[k]=0;
        vector<pair<int,int>>adjList[n+1];
        for(auto it:times){
            int u=it[0];
            int v=it[1];
            int wt=it[2];
            adjList[u].push_back({v,wt});
        }

        while(!pq.empty()){
            int node=pq.top().second;
            int dist=pq.top().first;
            pq.pop();
            for(auto it:adjList[node]){
                int neig=it.first;
                int wt=it.second;
                if(dist+wt<distance[neig]){
                    distance[neig]=wt+dist;
                    pq.push({distance[neig],neig});
                }
            }
        }
        int maxi=INT_MIN;
        for(int i=1;i<distance.size();i++){
            if(distance[i]==INT_MAX) return -1;
            maxi=max(maxi,distance[i]);
        }  
        return maxi;
    }
};