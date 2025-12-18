#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter Array Size\n";
	cin>>num;
	int newArr[num];
	for(int i = 0; i<num; i++){
		cout<<"Enter the Number: \n";
		cin>>newArr[i];
	}
	cout<<"Enter the number you want to Search\n";
	int Key;
	cin>>Key;
	int index = -1;
	int count = 0;
//	for(int i = 0; i<num; i++){
//		if(Key == newArr[i]){
//			index = i;
//			break;
//		}
//	}
//	for(int i = 0; i<num; i++){
//		if(Key == newArr[i]){
//			index = i;
//		}
//	}
	for(int i = 0; i<num; i++){
		if(Key == newArr[i]){
			index = i;
			count++;
		}
	}
	if(index == -1){
		cout<<"Your Number is not in Array";
	}else{
		cout<<"Your Number is on Last index "<<index<<" Total "<<count<<" Times";
	}
//	for(int i = 0; i<num; i++){
//		cout<<newArr[i]<<",";
//	}
}
