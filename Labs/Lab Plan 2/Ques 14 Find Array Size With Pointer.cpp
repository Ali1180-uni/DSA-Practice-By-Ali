#include<iostream>
using namespace std;
int main(){
	char arr[] = "Ali Rehmani";
	char *ptr = arr;
	int size = 0;
	while(*ptr!='\0'){
		size++;
		ptr++;
	}
	cout<<"The Size is : "<<size<<endl; 
}