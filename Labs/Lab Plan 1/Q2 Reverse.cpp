#include<iostream>
using namespace std;
int main(){
	int num1;
	cout<<"Enter Three Digits: "<<endl;
	cin>>num1;
	int rev = 0;
	while(num1!=0){
		int digit = num1%10;
		rev = (rev*10)+digit;
		num1 = num1/10;
	}
	cout<<rev;
}
