#include<iostream>
using namespace std;
void factorial(int n){
	int fact = 1;
	if(n == 0 || n == 1){
		cout<<"Factorial is 1"<<endl;
		return;
	}else{
		for(int i = n; i>=1; i--){
			fact *= i;
		}
	}
	cout<<"Factoraial of "<<n<<" is "<<fact<<endl;
}
int main(){
	int num;
	cout<<"Enter a Number for Factorial"<<endl;
	cin>>num;
	factorial(num);
}