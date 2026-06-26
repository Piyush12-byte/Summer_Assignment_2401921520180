class Solution {
private:
   bool isMirror(TreeNode*p,TreeNode*q){
      
      if(p==NULL&&q==NULL) return true;

      if(p==NULL||q==NULL) return false;

      if(p->val!=q->val) return false;

      bool left=isMirror(p->left,q->right);
      bool right=isMirror(p->right,q->left);

      return left&&right;

   }    
public:
    bool isSymmetric(TreeNode* root) {
     return isMirror(root->left,root->right);
    }
};
