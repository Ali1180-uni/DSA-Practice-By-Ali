#include<iostream>
using namespace std;
//void bubbleSort(int *ptr,int size){
//	for(int i = 0; i<size; i++){
//		for(int j = i; j<size; j++){
//			if(*(ptr + j) < *(ptr + (j+1))){
//				int temp = *(ptr + i);
//				*(ptr + i) = *(ptr + j);
//				*(ptr + j) = temp;
//			}
//		}
//	}
//}
//void selectionSort(int *ptr,int size){
//	for(int i = 0; i<size; i++){
//		int minIndex = i;
//		for(int j = i+1; j<size; j++){
//			if(*(ptr + j) > *(ptr + minIndex)){
//				minIndex = j;
//			}
//		}
//		if(minIndex != i){
//			int temp = *(ptr + i);
//			*(ptr + i) = *(ptr + minIndex);
//			*(ptr + minIndex) = temp;
//		}
//	}
//}
void insertionSort(int *ptr, int size){
	for(int i = 1; i<size; i++){
		int temp = *(ptr + i);
		int j;
		for(j = i-1; j>=0 && *(ptr + j) > temp; j--){
			*(ptr + (j+1)) = *(ptr + j);
		}
		*(ptr + (j+1)) = temp;
//		int j = i-1;
//		while(j>=0 && temp < *(ptr + j)){
//			*(ptr + (j+1)) = *(ptr + j);
//			j--;
//		}
//		*(ptr + (j+1)) = temp;
	}
}
int main(){
	int arr[] = {5,6,4,3,9,1};
	int size = sizeof(arr)/sizeof(int);
	int *ptr = arr;
	cout<<"UnSorted Array: "<<endl;
	for(int i = 0; i<size; i++){
		cout<<*(ptr + i)<<"\t";
	}
//	bubbleSort(ptr,size);
//    selectionSort(ptr,size);
    insertionSort(ptr,size);
	cout<<endl;
	cout<<"Sorted Array: "<<endl;
	for(int i = 0; i<size; i++){
		cout<<*(ptr + i)<<"\t";
	}
}