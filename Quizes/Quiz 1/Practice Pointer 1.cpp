#include<iostream>
using namespace std;
void inc(int *ptr){
	for(int i = 0; i<5; i++){
		*(ptr + i) += 5;
	}
}
int main(){
	int arr[5] = {1,2,3,4,5};
	int *ptr = arr;
	for(int i = 0; i<5; i++){
		cout<<*(ptr + i)<<" ";
	}
	inc(ptr);
	cout<<endl;
	for(int i = 0; i<5; i++){
		cout<<*(ptr + i)<<" ";
	}
}