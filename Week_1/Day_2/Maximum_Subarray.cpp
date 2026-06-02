class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int maxi=nums[0];
        int i=0;
        int n=nums.size();
        int sum=0;

          while(i<n){
            
            sum+=nums[i];
            maxi=max(sum,maxi);
            if(sum<0) sum=0;
            i++;
        }
      return maxi;  
    }
};
