class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        if(root==NULL) return{};

        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>ans;
        bool leftTOright=true;

        while(!q.empty()){
            int n=q.size();
            vector<int>temp(n);
          
          for(int i=0;i<n;i++){
            TreeNode*front=q.front();
            q.pop();

            int idx=leftTOright?i:n-i-1;
            temp[idx]=front->val;

            if(front->left){
                q.push(front->left);
            }

            if(front->right){
                q.push(front->right);
            }
          }
           ans.push_back(temp);
           leftTOright=!leftTOright;
        }
      return ans;  
    }
};
