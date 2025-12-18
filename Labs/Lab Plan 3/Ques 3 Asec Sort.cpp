#include<iostream>
using namespace std;
void AscenSort(int arr[]){
	for(int i = 0; i<10; i++){
		for(int j = i; j<10; j++){
			if(arr[j]<arr[i]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout<<"The Sorted Array is: "<<endl;
	for(int i = 0; i<10; i++){
		cout<<arr[i]<<"\t";
	}
}

int main(){
	int arr[10];
	for(int i = 0; i<10; i++){
		cout<<i+1<<" Element of Array: ";
		cin>>arr[i];
	}
	AscenSort(arr);
}
