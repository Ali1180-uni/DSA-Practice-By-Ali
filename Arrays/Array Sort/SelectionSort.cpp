#include <iostream>
using namespace std;
void SelectionSort(int Arr[],int num){
	for(int i = 0; i<num; i++){
		int minIndex = i;
		for(int j = i+1; j<num; j++){
			if(Arr[j]<Arr[minIndex]){
				minIndex = j;
			}
		}
		if(minIndex!=i){
			swap(Arr[i],Arr[minIndex]);
		}
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
    SelectionSort(newArr,num);
	for(int i = 0; i<num; i++){
		cout<<newArr[i]<<",";
	}
}
