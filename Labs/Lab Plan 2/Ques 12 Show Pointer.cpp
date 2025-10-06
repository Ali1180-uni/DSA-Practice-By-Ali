#include<iostream>
using namespace std;
void Show(const int *num1){
	cout<<"The Pointer Value is: "<<*num1;
}
int main(){
	int num1,num2;
	cout<<"Please Enter 1 Number: "<<endl;
	cin>>num1;
	
	const int *ptr1 = &num1;
	
	Show(ptr1);
}