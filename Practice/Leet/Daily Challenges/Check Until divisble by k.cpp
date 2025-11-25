class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int count = 1;
        int n = 1 % k;
        if (k % 2 == 0 || k % 5 == 0) {
            return -1;
        } else {
            while (n != 0) {
                n = (n * 10 + 1) % k;
                count++;
                if (count > k) {
                    return -1;
                }
            }
            return count;
        }
    }
};