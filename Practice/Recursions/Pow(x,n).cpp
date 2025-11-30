class Solution {
public:
    double myPow(double x, int n) {
        long N = n;
        if (N < 0) {
            x = 1 / x;
            N *= (-1);
        }
        if (N == 0) {
            return 1;
        }
        return x * myPow(x, N - 1);
    }
};