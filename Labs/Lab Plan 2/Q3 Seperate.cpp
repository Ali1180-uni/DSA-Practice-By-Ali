#include <iostream>
using namespace std;

int main() {
	int num,digit,sum = 0;
	cout<<"Enter the Digits : "<<endl;
	cin>>num;
	int rev = 0;
	int temp = num;
	while(temp>0){
		digit = temp%10;
		rev = rev * 10 + digit;
		temp = temp/10;
	}
	while(rev > 0){
		digit = rev%10;
		cout<<digit<<"  ";
		sum+=digit;
		rev/=10;
	}
	cout<<"\nThe Sum is :"<<sum<<endl;

    return 0;
}

