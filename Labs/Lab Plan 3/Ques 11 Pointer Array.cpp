#include<iostream>
using namespace std;
int main(){
	string arr[3];
	string *ptr = arr;
	for(int i = 0; i<3 ; i++){
		cout<<"Please Enter the name of Student"<<endl;
		cin>>*(ptr + i);
	}
	for(int i = 0; i<3 ; i++){
		cout<<*(ptr + i)<<"\t";
	}
}