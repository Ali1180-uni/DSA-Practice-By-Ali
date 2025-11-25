#include<iostream>
#include<vector>
using namespace std;
int minOperations(vector<int>& nums) {
	int n = nums.size();
	int count = 0;
	for(int i = 1; i<=n; i++) {
		bool change = false;
		for(int j = 0; j<n; j++) {
			if(nums[j] == i) {
				nums[j] = 0;
				change = true;
			}
		}
		if(change == true) {
			count++;
		}
	}
	for(int k = 0; k<n; k++) {
		cout<<nums[k]<<" ";
	}
	return count;
}
int main() {
	vector<int> arr = {0,2};
	vector<int> arr1 = {3,1,2,1};
	vector<int> arr2 = {1,2,1,2,1,2};
	cout<<"The Min Operations are:"<<endl;
	cout<<minOperations(arr2);
}