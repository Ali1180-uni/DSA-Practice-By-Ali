#include<iostream>
using namespace std;
int main(){
	int count = 0;
	string sen;
	cout<<"Enter Sentence: ";
	getline(cin,sen);
	for(int i = 0 ; sen[i]!='\0' ; i++ ){
		count+=1;
	}
	for(int i = count; i>=0 ; i--){
		cout<<sen[i];
	}
}
