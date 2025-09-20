#include <iostream>
using namespace std;
void BubbleSort(int Arr[],int num){
	for(int i = 0; i<num; i++){
		for(int j = i+1; j<num; j++){
			if(Arr[i]>Arr[j]){
//				int temp = Arr[i];
//				Arr[i] = Arr[j];
//				Arr[j] = temp;
                swap(Arr[i],Arr[j]);
			}
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
	BubbleSort(newArr,num);
	for(int i = 0; i<num; i++){
		cout<<newArr[i]<<",";
	}
}
