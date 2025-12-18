#include <iostream>
using namespace std;
int getUpperLimit(){
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	while(num>1000){
		cout<<"Enter less than 1000"<<endl;
		cin>>num;
	}
	return num;
}
int sum(){
	int num = getUpperLimit();
	int sum = 0;
	for(int i=1;i<=num;i++){
		if(i%2==0){
			sum+=i;
		}
	}
	return sum;
}

int main() {
	int add = sum();
	cout<<"The Even sum is "<<add;
    return 0;
}

