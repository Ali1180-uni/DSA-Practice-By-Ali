#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	cout<<"Enter the number Which Table you want: ";
	cin>>num1;
	cout<<"Enter the number until you want the table: ";
	cin>>num2;
	
	for(int i = 1;i<=num2;i++){
		cout<<num1<<" x "<<i<<" = "<<num1*i<<endl;
	}
}
