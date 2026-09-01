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
int dfsbalanced(TreeNode* root){
    if(root==NULL) return 0;
    int left=dfsbalanced(root->left);
    int right=dfsbalanced(root->right);
    if(left==-1 || right==-1) return -1;
    if(abs(left-right)>1) return -1;
    return max(left,right)+1;
}
    bool isBalanced(TreeNode* root) {
        int dfs=dfsbalanced(root);
        if(dfs==-1) return false;
        return true;
    }
};