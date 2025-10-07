#include<iostream>
using namespace std;
int main(){
	int rows = 3;
	int cols = 3;
	int *arr = new int[rows * cols];
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			cout<<"Enter Value: "<<endl;
			cin>>*(arr + i*cols +j);
		}
	}
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			cout<<*(arr + i*cols +j)<<"\t";
		}
		cout<<endl;
	}
	delete arr;
}