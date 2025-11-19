#include<iostream>
#include<vector>
using namespace std;
int findFinalValue(vector<int>& nums, int original) {
	int n = nums.size();
	while (1) {
		bool check = true;
		for(int i = 0; i<n; i++) {
			if(nums[i] == original) {
				check = false;
				original*=2;
			}
		}
		if(check == true) {
			break;
		}
	}
	return original;
}
int main(){
	vector<int> vec = {5,3,6,1,12};
	int orignal = 3;
	cout<<findFinalValue(vec,orignal);
}