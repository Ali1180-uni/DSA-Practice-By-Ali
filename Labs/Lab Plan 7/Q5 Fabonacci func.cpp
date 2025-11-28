#include<iostream>
using namespace std;
void fabonacci(int n) {
	int first = 0;
	int second = 1;
	int next = 0;
	for(int i = 0; i < n; i++){
		if(first == 0 && second == 1 && next == 0){
			cout<<"0, 1, ";
			next++;
		}else{
			next = first + second;
			cout<<next<<", ";
			first = second;
			second = next;
		}
	}
}
int main() {
	int num;
	cout<<"Enter a Number for Fabonacci"<<endl;
	cin>>num;
	fabonacci(num);
}