#include<iostream>
#include<vector>
using namespace std;
int countValidSelections(vector<int>& nums) {
	int count = 0;
	for(int i = 0; i<nums.size(); i++) {
		if(nums[i] == 0) {
			for(int di = -1; di<=1; di+=2) {
				vector<int> temp(nums.size());
				for(int j = 0; j<nums.size(); j++) {
					temp[j] = nums[j];
				}
				int curr = i;
				int dir = di;
				while(curr >= 0 && curr < nums.size()) {
					if(temp[curr] == 0) {
						curr+=dir;
					} else {
						temp[curr] -= 1;
						dir = -dir;
						curr+=dir;
					}
				}
				int zero = 1;
				for(int k = 0; k<nums.size(); k++) {
					if(temp[k] != 0) {
						zero = 0;
						break;
					}
				}
				if(zero == 1) {
					count++;
				}
			}
		}
	}
	return count;
}
int main() {
	vector<int> arr = {1,0,2,0,3};
	vector<int> arr2 = {2,3,4,0,4,1,0};
	int num = countValidSelections(arr);
	cout<<num;
}