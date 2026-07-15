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
void rangesum(TreeNode* root,int low,int high,vector<int>&vec){
    if(root==NULL) return;
    rangesum(root->left,low,high,vec);
    vec.push_back(root->val);
    rangesum(root->right,low,high,vec); 
}
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int>vec;
        rangesum(root,low,high,vec);
        int ans=0;
        for(auto it: vec){
            if(low<=it && it<=high){
                ans=ans+it;
            }
        }
        return ans;
    }
};