class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root==NULL){
            return NULL;
        }

        if(root->val<p->val&&root->val<q->val){
            return lowestCommonAncestor(root->right,p,q);
        }

        if(root->val>p->val&&root->val>q->val){
            return lowestCommonAncestor(root->left,p,q);
        }
        // agar yha tak aagye ho iska matlab ek value left me ha ek right me bas return kardo root
        return root;
    }
};
