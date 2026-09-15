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
int toleaf(TreeNode* root,int curr){
    if(root==NULL) return 0;
    curr=curr*10+root->val;
    if(root->left==NULL && root->right==NULL){
        return curr;
    }
    int left=toleaf(root->left,curr);
    int right=toleaf(root->right,curr);
    return left+right;
}
    int sumNumbers(TreeNode* root) {
        int sumroot=toleaf(root,0);
        return sumroot;
    }
};