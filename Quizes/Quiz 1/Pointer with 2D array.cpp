#include<iostream>
using namespace std;
void inc(const int (*p)[3]){
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			cout<<*(*(p+i)+j)<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int arr[3][3];
	int (*p)[3] = arr;
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			cout<<"Enter the Value"<<endl;
			cin>>*(*(p+i)+j);
		}
	}
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			cout<<*(*(p+i)+j)<<" ";
		}
		cout<<endl;
	}
	cout<<"\n------------------------------"<<endl;
	inc(p);
}