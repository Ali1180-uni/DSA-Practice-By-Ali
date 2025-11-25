#include<iostream>
#include<vector>
using namespace std;
// Method To Convert Segments
int minNumberOperations(vector<int>& target) {
	int n = target.size();
	int initial[n];
	int count = 0;
	for(int i = 0; i<n; i++) {
		initial[i] = 0;
	}
	while (1) {
		for(int i = 0; i<n; i++) {
			if(initial[i] != target[i]) {
				if(initial[i] != target[i]) {
					initial[i]++;
				} else if(initial[i] == target[i]) {
					break;
				}
			}
		}
		for (int i = 0; i < n; i++) {
			cout<<initial[i];
		}
		cout<<endl;
		bool check = true;
		for(int i = 0; i<n; i++) {
			if(initial[i]!=target[i]) {
				check = false;
				break;
			}
		}
		if(check == true) {
			count++;
			break;
		} else {
			count++;
		}
	}
	return count;
}
int main() {
	vector<int> arr1 = {1,2,3,2,1};
	vector<int> arr2 = {3,1,5,4,2};
	vector<int> arr3 = {3,1,1,2};
	cout<<minNumberOperations(arr3);
}

// Correct Method
//int count = target[0];
//for(int i = 1; i < target.size(); i++) {
//	if(target[i] > target[i-1]) {
//		count += target[i] - target[i-1];
//	}
//}
//return count;