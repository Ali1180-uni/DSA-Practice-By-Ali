#include<iostream>
using namespace std;
int RaiseToPow(int n,int p){
	if(p == 0){
		return 1;
	}else{
		return n*RaiseToPow(n,p-1);
	}
}
int main(){
	int num,pow;
	cout<<"Enter a Number"<<endl;
	cin>>num;
	cout<<"Enter a Power"<<endl;
	cin>>pow;
	cout<<"The Answer is "<<RaiseToPow(num,pow);
}