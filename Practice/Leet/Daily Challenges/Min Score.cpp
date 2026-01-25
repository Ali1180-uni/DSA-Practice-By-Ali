// Using Sliding Window Algo To handle the Sub Arrays Function Like minimum Maximum or their Sums Also

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        int min = INT_MAX;
        if (k == 1) {
            return 0;
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i <= n - k; i++) {
            int num = nums[i + (k - 1)] - nums[i];
            if (num < min) {
                min = num;
            }
        }
        return min;
    }
};