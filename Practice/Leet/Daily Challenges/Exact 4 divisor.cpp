class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int size = nums.size();
        vector<int> sums;
        int total = 0;
        for (int i = 0; i < size; i++) {
            int count = 0;
            int sum = 0;
            for (int j = 1; j * j <= nums[i]; j++) {
                if (nums[i] % j == 0) {
                    count++;  // Count the small divisor
                    sum += j; // Add the small divisor

                    // Check if the partner is different (avoid perfect squares)
                    if (j != nums[i] / j) {
                        count++;            // Count the large divisor
                        sum += nums[i] / j; // Add the large divisor
                    }
                }
            }
            if (count == 4) {
                sums.push_back(sum);
            }
        }
        for (int i = 0; i < sums.size(); i++) {
            total += sums[i];
        }
        return total;
    }
};