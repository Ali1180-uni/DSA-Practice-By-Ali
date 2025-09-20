//Write a C++ program that dynamically creates a 2D array
//of integers based on user input for the number of rows and columns.

#include <iostream>
using namespace std;
int main(){
	int b[3][3];
	int *x = &b[0][0];
	for(int i = 0; i<3; i++){
		for(int j = 0 ;j<3 ;j++){
		    cout<<"Enter the number: \n";
		    cin>>*((x+i)+j);
		}
	}
	cout<<"Solution: "<<endl;;
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			cout<<*((x+i)+j)<<" ";		
		}
		cout<<endl;
	}
}

