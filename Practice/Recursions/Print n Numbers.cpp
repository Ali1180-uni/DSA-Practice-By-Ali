#include<iostream>
using namespace std;
void func(int n){
	if(n == 0){
		return;
	}
	cout<<"4 "<<n<<endl;
	func(n-1);
	cout<<"1 "<<n<<endl;	
}
int main(){
	func(3);
}