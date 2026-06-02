class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int n = nums.size();
        long long sum = 0;

        // First window
        for(int i = 0; i < k; i++) {
            sum += nums[i];
        }

        long long maxi = sum;

        // Slide the window
        for(int i = k; i < n; i++) {
            sum += nums[i] - nums[i - k];
            maxi = max(maxi, sum);
        }

        return (double)maxi / k;
    }
};
