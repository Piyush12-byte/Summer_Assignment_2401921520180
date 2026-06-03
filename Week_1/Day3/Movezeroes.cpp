class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int j=0;j<nums.size();j++){
          // jaise hi nonzero mille swap kardo and accordingly i ko increment karo
            if(nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
            }
        }
        
    }
};
