#include <iostream>
using namespace std;
int uptfunc(int arr[], int size){
	for(int i = 0; i < size; i++){
		arr[i] = arr[i]*arr[i];
	}
	for(int i = 0; i < size; i++){
		cout<<arr[i] << ",";
	}
}
int main(){
	int size = 6;
	int newArr[size] = {1,2,3,5,3,2};
	uptfunc(newArr,size);
	return 0;
}

