#include<iostream>
#include<vector>
using namespace std;
int minNumberOperations(vector<int>& target) {
	int count = target[0];
	for(int i = 1; i < target.size(); i++) {
		if(target[i] > target[i-1]) {
			count += target[i] - target[i-1];
		}
	}
	return count;
}
int main() {
	vector<int> arr1 = {1,2,3,2,1};
	vector<int> arr2 = {3,1,5,4,2};
	vector<int> arr3 = {3,1,1,2};
	cout<<minNumberOperations(arr1);
}