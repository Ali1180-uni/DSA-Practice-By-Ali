#include<iostream>
using namespace std;
int sum(int n){
	int sum = 0;
	for(int i = 1; i<=n; i++){
		sum+=i;
	}
	return sum;
}
int main(){
	int num;
	cout<<"Enter a Number for Factorial"<<endl;
	cin>>num;
	cout<<"Sum of "<<num<<" is "<<sum(num);
}