class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        // Start from last digit
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;     // just add 1 and done
                return digits;
            }

            // If digit is 9 ? becomes 0, carry goes to next
            digits[i] = 0;
        }

        // If all digits were 9 (e.g. 9,9,9 ? 1,0,0,0)
        digits.insert(digits.begin(), 1);
        return digits;
    }
};