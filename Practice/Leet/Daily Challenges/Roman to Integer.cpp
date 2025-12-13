class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        int ans = 0;
        auto value = [&](char c) { // To Check all the values, we use this
            if (c == 'I')
                return 1;
            if (c == 'V')
                return 5;
            if (c == 'X')
                return 10;
            if (c == 'L')
                return 50;
            if (c == 'C')
                return 100;
            if (c == 'D')
                return 500;
            return 1000; // 'M'
        };
        for (int i = 0; i < n; i++) {
            int curr = value(s[i]);
            int next = (i + 1 < n ? value(s[i + 1]) : 0);
            if (curr < next) {
                ans -= curr;
            } else {
                ans += curr;
            }
        }
        return ans;
    }
};