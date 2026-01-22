class Solution {
public:
    void shiftLeft(vector<int>& nums, int minindx) {
        int n = nums.size();
        for (int i = minindx; i < n - 1; i++) {
            nums[i] = nums[i + 1];
        }
        nums.pop_back();
    }
    void MergeVector(vector<int>& nums) {
        int n = nums.size();
        int min = INT_MAX, minindx = -1;
        for (int i = 0; i < n - 1; i++) {
            int sum = nums[i] + nums[i + 1];
            if (sum < min) {
                min = sum;
                minindx = i;
            }
        }
        nums[minindx] = min;
        shiftLeft(nums, minindx+1);
    }
    bool is_sorted(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) return false;
        }
        return true;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int count = 0;
        while (!is_sorted(nums)) {
            MergeVector(nums);
            count++;
        }
        return count;
    }
};