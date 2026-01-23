#include<iostream>
#include<unordered_set>
using namespace std;
bool isHappy(int n){
	unordered_set<int> nums;
	while(n!=1){
		if(nums.count(n)){
			return false;
		}
		nums.insert(n);
		int sum = 0;
		while(n>0){
			int digit = n%10;
			sum += digit*digit;
			n/=10;
		}
		n = sum;
	}
	return true;
}
int main(){
	cout<<isHappy(1);
}