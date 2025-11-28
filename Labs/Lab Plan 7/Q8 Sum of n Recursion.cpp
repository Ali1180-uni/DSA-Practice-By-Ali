#include<iostream>
using namespace std;
int sum(int n){
	if(n == 0){
		return 0;
	}else{
		return n+sum(n-1);
	}
}
int main(){
	int num;
	cout<<"Enter a Number for Sum"<<endl;
	cin>>num;
	cout<<"Sum of "<<num<<" numbers is "<<sum(num);
}