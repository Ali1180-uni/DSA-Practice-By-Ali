#include<iostream>
using namespace std;
int evenCount(int arr[], int size){
	int count = 0;
	for(int i = 0; i<size; i++){
		if(arr[i] % 2 == 0){
			count++;
		}
	}
	return count;
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
	int count = evenCount(arr,size);
	cout<<"Total Even Numbers in this Array are: "<<count<<endl;
}