#include <iostream>
using namespace std;
int main(){
	int *x = new int[9];
	for(int i = 0; i<9; i++){
		cout<<"Enter the number: \n";
		cin>>*(x+i);
	}
	cout<<"Solution: ";
	for(int i = 0; i<9; i++){
		cout<<*(x+i)<<" ";
	}
	delete [] x;
}
