#include <iostream>
using namespace std;
void InsertionSort(int Arr[],int num){
	for(int i = 1; i<num; i++){
		int temp = Arr[i];
		int j;
//		while(j>=0 && Arr[j] > temp){
//			Arr[j+1] = Arr[j];
//			j--;
//		}
//		Arr[j+1] = temp;
		for(j = i-1; j>=0; j--){
			if(Arr[j] > temp){
				Arr[j+1] = Arr[j];
			}
		}
		Arr[j+1] = temp;
		
	}
}
int main(){
	int num;
	cout<<"Enter Array Size\n";
	cin>>num;
	int newArr[num];
	for(int i = 0; i<num; i++){
		cout<<"Enter the Number: \n";
		cin>>newArr[i];
	}
	InsertionSort(newArr,num);
	for(int i = 0; i<num; i++){
		cout<<newArr[i]<<",";
	}
}
