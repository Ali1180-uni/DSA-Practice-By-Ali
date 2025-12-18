#include<iostream>
using namespace std;
int Sum(int *num1,int *num2){
	return *num1 + *num2;
}
int main(){
	int num1,num2;
	cout<<"Please Enter 2 Numbers: "<<endl;
	cout<<"Enter 1st:"<<endl;
	cin>>num1;
	cout<<"Enter 2nd:"<<endl;
	cin>>num2;
	
	int *ptr1 = &num1;
	int *ptr2 = &num2;
	
	int sum = Sum(ptr1,ptr2);
	cout<<"The Sum is: "<<sum<<endl;
}