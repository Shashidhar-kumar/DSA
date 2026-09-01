/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        queue<TreeNode* >q;
        q.push(root);
        string s="";
        while(!q.empty()){
            TreeNode* node=q.front();
            q.pop();
            if(node==NULL){
                s=s+"#,";
                continue;
            }        
            s=s+to_string(node->val)+',';
            q.push(node->left);
            q.push(node->right);

        }
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.empty()) return NULL;
        stringstream ss(data);
        string str;
        getline(ss,str,',');
        if(str == "#")
        return NULL;
        TreeNode* root=new TreeNode(stoi(str));
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* node=q.front();
            q.pop();
            if(!getline(ss, str, ','))
            break;


        if(str != "#") {
            TreeNode* leftnode = new TreeNode(stoi(str));
            node->left = leftnode;
            q.push(leftnode);
        }

        if(!getline(ss, str, ','))
            break;

        if(str != "#") {
            TreeNode* rightnode = new TreeNode(stoi(str));
            node->right = rightnode;
            q.push(rightnode);
        }
    }
    return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));