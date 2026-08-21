/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(node==NULL) return NULL;
        queue<Node*>q;
        q.push(node);
        unordered_map<Node*,Node*>mpp;
        mpp[node]=new Node(node->val);
        while(!q.empty()){
            Node* deepnode=q.front();
            q.pop();
            for(auto neigbors: deepnode->neighbors){
                if(mpp.find(neigbors)==mpp.end()){
                    mpp[neigbors]=new Node(neigbors->val);
                    q.push(neigbors);
                }
                mpp[deepnode]->neighbors.push_back(mpp[neigbors]);
            }
        }
        return mpp[node];
    }
};