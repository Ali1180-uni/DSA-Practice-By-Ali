#include<iostream>
using namespace std;
int main(){
	int num1,fac = 1;
	cout<<"Enter number: "<<endl;
	cin>>num1;
	for(int i = 1; i <= num1; i++){
		fac*=i;
	}
	cout<<"Factorial: "<<fac;
}
