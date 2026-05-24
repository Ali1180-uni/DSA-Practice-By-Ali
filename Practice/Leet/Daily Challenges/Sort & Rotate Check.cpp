class Solution {
public:
    bool veri(vector<int>& nums) {
        bool checkin;
        int count = 0;
        vector<int> sorted_arr = nums;
        if (is_sorted(nums.begin(), nums.end())) {
            return true;
        } else {
            for (int i = 1; i < nums.size(); i++) {
                if (nums[i] < nums[i - 1]) {
                    count = i;
                    break;
                }
            }
            sort(sorted_arr.begin(), sorted_arr.end());
            for (int i = 0; i < nums.size(); i++) {
                if (sorted_arr[i] != nums[(i + count) % nums.size()]) {
                    return false;
                    break;
                }else{
                    checkin = true;
                }
            }
        }
        return checkin;
    }
    bool check(vector<int>& nums) {
        return veri(nums);
    }
};