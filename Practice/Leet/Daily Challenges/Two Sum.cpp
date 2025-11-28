class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int n1, n2;
        bool done = false;
        vector<int> arr(2);
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    n1 = i;
                    n2 = j;
                    done = true;
                    break;
                }
            }
            if (done == true) {
                break;
            }
        }
        arr[0] = n1;
        arr[1] = n2;
        return arr;
    }
};