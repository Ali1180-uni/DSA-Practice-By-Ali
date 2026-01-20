class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;

        for (int x : nums) {
            if ((x & 1) == 0) {
                ans.push_back(-1); // even → impossible
            } else {
                int t = 0;
                int temp = x;
                while (temp & 1) {
                    t++;
                    temp >>= 1;
                }
                int y = x - (1 << t) + (1 << (t - 1));
                ans.push_back(y);
            }
        }
        return ans;
    }
};

// Example

// Bitwise Array Problem – Summary & Explanation
// This document summarizes the logic, operators, and dry run explanation for solving the problem: Construct the Minimum Bitwise Array I.

// Problem Goal
// For each number x in the input array nums:
// - If x is even, return -1
// - If x is odd, find the smallest number y such that:
//   y OR (y + 1) = x

// Key Observations
// - Bitwise OR (|): if any bit is 1, result is 1
// - Even numbers end with binary 0 → impossible
// - Odd numbers end with binary 1 → possible
// - We must find the smallest y, not just any valid y

// Important Operators Explained
// &  (Bitwise AND): compares bits, used to check even/odd
// x & 1 → checks last bit

// << (Left Shift): multiplies by powers of 2
// 1 << k = 2^k

// >> (Right Shift): divides by 2, removes last bit
// Used to count trailing 1s

// Core Logic
// 1. Check if x is even using (x & 1)
// 2. If even → answer = -1
// 3. If odd:
//    - Count trailing 1s in binary representation of x
//    - Let t = number of trailing 1s
//    - Compute:
//      y = x - (1 << t) + (1 << (t - 1))

// Dry Run Example
// Input: [2, 3, 5, 7]

// x = 2 (10)
// Even → -1

// x = 3 (11)
// Trailing 1s = 2
// y = 3 - 4 + 2 = 1
// Check: 1 | 2 = 3

// x = 5 (101)
// Trailing 1s = 1
// y = 5 - 2 + 1 = 4
// Check: 4 | 5 = 5

// x = 7 (111)
// Trailing 1s = 3
// y = 7 - 8 + 4 = 3
// Check: 3 | 4 = 7

// Final Output
// [-1, 1, 4, 3]
