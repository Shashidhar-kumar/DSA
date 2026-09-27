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
void Pathsum(TreeNode* root,int sum,int targetSum,vector<int>&vec,vector<vector<int>>&ans){
    if(root==NULL) return;
    vec.push_back(root->val);
    sum=sum+root->val;
    if(root->left==NULL && root->right==NULL && sum==targetSum){
        ans.push_back(vec);
    }
    Pathsum(root->left,sum,targetSum,vec,ans);
    Pathsum(root->right,sum,targetSum,vec,ans);
        vec.pop_back();
}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>vec;
        vector<vector<int>>ans;
        Pathsum(root,0,targetSum,vec,ans);
        return ans;
    }
};