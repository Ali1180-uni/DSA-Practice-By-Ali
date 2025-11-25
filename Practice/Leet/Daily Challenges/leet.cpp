#include<iostream>
using namespace std;
int ret(int nums[], int val) {
	int count = 0;
	int size = sizeof(nums)/sizeof(int);
	cout<<"s : "<<size<<endl;
	for(int i = 0; i<size; i++) {
		if(nums[i] != val) {
			count++;
		}
	}
	int arr[count];
	for(int i = 0; i<= size; i++) {
		if(nums[i] != val) {
			arr[i] = nums[i];
		}
	}
	return count;
}
int main() {
	int arr[] = {8,3,1,3,5,7,9};
	int nums = ret(arr,3);
	cout<<nums;
}
