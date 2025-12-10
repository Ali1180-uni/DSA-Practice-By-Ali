class Solution {
public:
    int countPermutations(vector<int>& complexity) {
        int n = complexity.size();
        const int MOD = 1000000007;
        for(int i = 1; i<n; i++){
            if(complexity[i]<=complexity[0]){
                return 0;
            }
        }

       long long result = 1;
        for (int i = 1; i <= n - 1; i++) {
            result = (result * i) % MOD;
        }

        return result;
    }
};

// Just find the permuntation arrangments of n numbers which are (n-1)!
// it becomes too big number thats why we take long long and % with MOD