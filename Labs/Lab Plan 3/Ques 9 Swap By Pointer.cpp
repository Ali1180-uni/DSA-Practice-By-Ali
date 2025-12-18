#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	int *temp = new int();
	cout<<"Please Enter 2 Numbers: "<<endl;
	cout<<"Enter 1st:"<<endl;
	cin>>num1;
	cout<<"Enter 2nd:"<<endl;
	cin>>num2;
	
	int *ptr1 = &num1;
	int *ptr2 = &num2;
	
	cout<<"Your 2 Numbers are: "<<*ptr1<<"\t"<<*ptr2<<endl;
	
	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
	
	cout<<"After Swap 2 Numbers are: "<<*ptr1<<"\t"<<*ptr2<<endl;
	delete temp;
}