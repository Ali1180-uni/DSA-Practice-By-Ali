#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int count = 0;
	int countSpace = 0;
	string sen;
	cout<<"Enter Sentence: ";
	getline(cin,sen);
	for(int i = 0 ; sen[i]!='\0' ; i++ ){
		count+=1;
	}
	for(int i = 0; i<=count ; i++){
		if(sen[i] == ' '){
			countSpace += 1;
		}
	}
	cout<<"The Total Space are: "<<countSpace<<endl;
}
