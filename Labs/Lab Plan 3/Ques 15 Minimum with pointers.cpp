#include<iostream>
using namespace std;
void Min(int arr[], int size){
	int max = INT_MAX;
	int *ptr = &max;
	for(int i = 0; i<size; i++){
		if(arr[i] < *ptr){
			*ptr = arr[i];
		}
	}
	cout<<"The Minimum is : "<<*ptr<<endl;
}
int main(){
	int size;
	cout<<"Please enter the size: "<<endl;
	cin>>size;
	int arr[size];
	for(int i = 0; i < size; i++){
		cout<<"Enter the item"<<endl;
		cin>>arr[i];
	}
	Min(arr,size);
}