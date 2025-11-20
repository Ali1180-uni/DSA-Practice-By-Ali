#include <iostream>
#include <vector>
using namespace std;

//int findMaxConsecutiveOnes(vector<int>& nums) {
//	int max = 0;
//	int n = nums.size();
//	for(int i = 0; i<n; i++) {
//		if(nums[i] == 0) {
//			int j = i+1;
//			int count = 0;
//			while(nums[j] != 0 && j<n) {
//				count++;
//				j++;
//			}
//			if(count>max) {
//				max = count;
//			}
//			i = j-1;
//		}
//	}
//	return max;
//}
int findMaxConsecutiveOnes(vector<int>& nums) {
	int max = 0;
	int count = 0;
	int n = nums.size();
	for(int i = 0; i<n; i++){
		if(nums[i] == 1){
			count++;
			if(count>max){
				max = count;
			}
		}else{
			count = 0;
		}
	}
	return max;
}
int main() {
	vector<int> arr = {0,1,1,1,0,1};
	cout<<findMaxConsecutiveOnes(arr);
}