#include<iostream>
using namespace std;
void swap(int num1,int num2){
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout<<"First number is: "<<num1<<" Second Number is: "<<num2<<endl;
}
int main(){
	int num1,num2;
	cout<<"Enter first number: "<<endl;
	cin>>num1;
	cout<<"Enter second number: "<<endl;
	cin>>num2;
	
	cout<<"First number is: "<<num1<<" Second Number is: "<<num2<<endl;
	cout<<"After Swap: "<<endl;
	swap(num1,num2);
}
