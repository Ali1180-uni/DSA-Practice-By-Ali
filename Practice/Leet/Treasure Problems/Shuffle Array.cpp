//#include<iostream>
//#include<vector>
//using namespace std;
//vector<int> shuffle(vector<int>& nums, int n) {
//	int size = (n*2)-1;
//	vector<int> arr;
//	int i,j = 0;
//	while(j<size){
//		arr[j] = nums[i];
//		i = i+n;
//		j++;
//		arr[j] = nums[i];
//		i = j;
//	}
//	return arr;
//}
//int main(){
//	vector<int> arr = {1,3,4,6,7,8};
//	int n = arr.size();
//	shuffle(arr,n);
//	for(int i = 0; i < n; i++){
//		cout<<arr[i]<<" ";
//	}
//}

#include <iostream>
#include <vector>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> result(2 * n);
    int j = 0;
    for (int i = 0; i < n; i++) {
        result[j++] = nums[i];     // x
        result[j++] = nums[i + n]; // y
    }
    return result;
}

int main() {
    vector<int> arr = {1, 3, 4, 6, 7, 8}; 
    int n = arr.size() / 2;
    
    vector<int> ans = shuffle(arr, n);
    
    for (int x : ans) {
        cout << x << " ";
    }
}
