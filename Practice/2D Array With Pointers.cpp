#include<iostream>
using namespace std;
int main(){
	int arr[3][4];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Please input data: ";
			cin>>*(*(arr + i) + j);
			cout<<endl;
		}
	}
	cout<<"Result is :"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<*(*(arr + i) + j)<<" ";
		}
		cout<<endl;
	}
}