class Solution {
    void solve(TreeNode*root){

        if(root==NULL) return;

        swap(root->left,root->right);
        
        solve(root->left);
        solve(root->right);
    }    
public:
    TreeNode* invertTree(TreeNode* root) {
        solve(root);
        return root;
    }
};
