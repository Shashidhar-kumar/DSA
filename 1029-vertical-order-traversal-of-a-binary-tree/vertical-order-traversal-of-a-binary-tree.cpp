/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        queue<pair<pair<int,int>, TreeNode*>> q;
        q.push({{0,0},root});
        map<int,vector<pair<int,int>>>mpp;
        while(!q.empty()){
           int row=q.front().first.first;
           int col=q.front().first.second;
           TreeNode* node=q.front().second;
           q.pop();
           mpp[col].push_back({row,node->val});
           if(node->left!=NULL){
            q.push({{row+1,col-1},node->left});
           }
           if(node->right!=NULL){
            q.push({{row+1,col+1},node->right});
           }
        }
        vector<vector<int>>ans;
        for(auto it:mpp){
            vector<pair<int,int>>temp=it.second;
            sort(temp.begin(),temp.end());
            vector<int>vec;
            for(auto p:temp){
                vec.push_back(p.second);
            }
            ans.push_back(vec);
        }
        return ans;
    }
};