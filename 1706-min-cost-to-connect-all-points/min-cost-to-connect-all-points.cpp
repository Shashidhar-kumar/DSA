class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int V=points.size();
        vector<int>visited(V,0);
        vector<pair<int,int>>adjList[V];
        for(int i = 0; i < V; i++) {
            for(int j = i + 1; j < V; j++) {

            int x1 = points[i][0];
        int y1 = points[i][1];

        int x2 = points[j][0];
        int y2 = points[j][1];

        int distance = abs(x1-x2) + abs(y1-y2);

        adjList[i].push_back({j, distance});
        adjList[j].push_back({i, distance});
    }
}
        int sum=0;
        priority_queue<pair<int,int>,
                   vector<pair<int,int>>,
                   greater<pair<int,int>>> pq;

    pq.push({0, 0});

    while(!pq.empty()) {
        int wt = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if(visited[node]) continue;

        sum = sum + wt;
        visited[node] = 1;

        for(auto it : adjList[node]) {
            int edgewt = it.second;
            int adjNode = it.first;

            if(!visited[adjNode]) {
                pq.push({edgewt, adjNode});
            }
        }
    }

    return sum;

    }
};