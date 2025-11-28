#include<iostream>
using namespace std;
void RaiseToPow(int n,int p){	
	int ans = 1;
	for(int i = 1; i<=p; i++){
		ans*=n;
	}
	cout<<"The Answer is: "<<ans<<endl;
}
int main(){
	int num,pow;
	cout<<"Enter a Number"<<endl;
	cin>>num;
	cout<<"Enter a Power"<<endl;
	cin>>pow;
	RaiseToPow(num,pow);
}