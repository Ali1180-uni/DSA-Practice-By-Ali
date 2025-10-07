#include<iostream>
using namespace std;
void reverse(char *ptr){
	int count = 0;
	while(*ptr!='\0'){
		count++;
		ptr++;
	}
	cout<<"Reversed Array: ";
	for(int i = count; i>0; i--){
		cout<<*(ptr-i);
	}
}
int main(){
	char s[] = "Ali Rehmani";
	char *ptr = s;
	reverse(ptr);
	return 0;
}