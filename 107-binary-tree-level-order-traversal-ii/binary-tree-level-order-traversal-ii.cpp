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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode* >q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>level;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                level.push_back(node->val);
                q.pop();
                if(node->left!=NULL){
                    q.push(node->left);
                }
                if(node->right!=NULL) q.push(node->right);
            }
            ans.push_back(level);
        }
        vector<vector<int>>vec;
       
        for(int j=ans.size()-1;j>=0;j--){
            vector<int>ans2;
            for(int i=0;i<ans[j].size();i++){
                ans2.push_back(ans[j][i]);
            }
            vec.push_back(ans2);
        }
        return vec;
    }
};