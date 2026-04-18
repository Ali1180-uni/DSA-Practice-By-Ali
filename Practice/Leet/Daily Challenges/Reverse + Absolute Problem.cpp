class Solution {
public:
    int mirrorDistance(int n) {
        int org = n;
        int rem, dig, rev = 0;
        if (n < 10) {
            return (n - n);
        } else if (n >= 10) {
            while (n != 0) {
                rem = n % 10;
                rev = rev * 10 + rem;
                n /= 10;
            }
        }
        return abs(org - rev);
    }
};