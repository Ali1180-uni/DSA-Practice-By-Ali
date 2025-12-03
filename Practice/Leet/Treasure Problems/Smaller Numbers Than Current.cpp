#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
	int n = nums.size();
	vector<int> arr(n);
	for(int i = 0; i<n; i++) {
		int count = 0;
		for(int j = 0; j<n; j++) {
			if(nums[i]>nums[j]) {
				count++;
			}
		}
		arr[i] = count;
	}
	return arr;
}
int main() {
	int n;
	cout << "Enter number of elements: ";
	cin >> n;
	vector<int> nums(n);
	cout<<endl;
	cout << "Enter " << n << " numbers: ";
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	vector<int> result = smallerNumbersThanCurrent(nums);
	cout<<"\nResult is: "<<endl;
	for (int i = 0; i < n; i++) {
		cout<<result[i];
	}
}