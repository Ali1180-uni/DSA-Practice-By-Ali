#include<iostream>
#include<vector>
using namespace std;
int minimumOperations(vector<int>& nums) {
        bool check = true;
        int count = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] % 3 != 0) {
                check = false;
                count++;
            }
        }
        if (check == true) {
            return 0;
        } else {
            return count;
        }
}
int main() {
    cout << "Enter number of elements in the array:" << endl;
    int size;
    cin >> size;
    vector<int> nums(size);
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }
    int result = minimumOperations(nums);
    cout << "Minimum operations to make all elements divisible by 3: " << result << endl;
}