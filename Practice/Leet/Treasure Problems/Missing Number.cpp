#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> findErrorNums(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	int duplicate = 0, missing = 0;
	int n = nums.size();

	// Find duplicate
	for (int i = 1; i < n; i++) {
		if (nums[i] == nums[i - 1]) {
			duplicate = nums[i];
		}
	}

	// Find missing
	int expected = 1;
	for(int i = 0; i<n; i++) {
		if(nums[i] == expected) {
			expected++;
		}
		missing = expected;
	}

	return {duplicate, missing};
}
int main() {
	int n;
	cout << "Enter number of elements: ";
	cin >> n;

	vector<int> nums(n);

	cout << "Enter " << n << " numbers: ";
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}

	vector<int> result = findErrorNums(nums);

	cout << "Duplicate: " << result[0] << endl;
	cout << "Missing: " << result[1] << endl;
}