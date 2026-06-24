class Solution {
    bool is_valid(TreeNode*root,long long mini,long long maxi){

        if(root==NULL) return true;

        if(root->val>=mini&&root->val<=maxi){
            bool left=is_valid(root->left,mini,root->val);
            bool right=is_valid(root->right,root->val,maxi);
            return left&&right;
        }
        else{
            return false;
        }
    }
public:
    bool isValidBST(TreeNode* root) {
        // range pta ho ki kis subtree me kha se kha tak values allowed so we can check
        return is_valid(root,LLONG_MIN,LLONG_MAX);
    }
};
