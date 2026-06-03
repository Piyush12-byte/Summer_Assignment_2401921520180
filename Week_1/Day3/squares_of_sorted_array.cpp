class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       //using 2pointers

       int l=0;
       int n=nums.size();
       int r=n-1;
       vector<int>ans(n);
       int idx=n-1;

       while(l<=r){
          if(abs(nums[l])>abs(nums[r])){
             ans[idx]=nums[l]*nums[l];
             l++;
          }else{
             ans[idx]=nums[r]*nums[r];
             r--;
          }
          idx--;
       }
       return ans;
    }
};
