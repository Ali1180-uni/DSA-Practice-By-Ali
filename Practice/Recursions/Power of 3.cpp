class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n == 0 || n == -1) {
            return false;
        }else if (n == 1 || n == 3) {
            return true;
        }else if(n % 3 != 0){
            return false;
        }
        return isPowerOfThree(n/3);
    }
};

thats the code which pass 21040 cases