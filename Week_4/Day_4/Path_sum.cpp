
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        if(root==NULL){
            return false;
        }

        if(root->left==NULL && root->right==NULL)
        {
            return root->val==targetSum;
        }

        int remaining=targetSum-root->val;
        bool left=hasPathSum(root->left,remaining);
        bool right=hasPathSum(root->right,remaining);

       return left||right;
    }
};
