#include<iostream>
#include<vector>
using namespace std;
vector<int> getSneakyNumbers(vector<int>& nums) {
	vector<int> temp;
	int n = nums.size();
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (nums[i] == nums[j]) {
				temp.push_back(nums[i]); // use push_back for vectors bcz initially size is zero
				break;
			}
		}
	}
	return temp;
}

int main() {
	vector<int> arr1 = {0,1,1,0};
	vector<int> arr2 = {0,3,2,1,3,2};
	vector<int> arr3 = {7,1,5,4,3,4,6,0,9,5,8,2};
	vector<int> arr4 = getSneakyNumbers(arr3);
	for(int i = 0; i < arr4.size(); i++) {
		cout<<arr4[i]<<" ";
	}
}