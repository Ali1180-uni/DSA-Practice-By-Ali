#include<iostream>
#include<vector>
using namespace std;
vector<int> getConcatenation(vector<int>& nums) {
	int n = nums.size();
	int m = n+n;
	vector<int> arr(m);
	int count = 0;
	for(int i = 0; i<2; i++) {
		for(int j = 0; j<n; j++) {
			arr[count] = nums[j];
			count++;
		}
	}
	return arr;
}
int main() {
	vector<int> arr = {1,2,4};
	vector<int> arr1 = getConcatenation(arr);
	for(int i = 0; i<arr1.size(); i++) {
		cout<<arr[i]<<" ";
	}
}