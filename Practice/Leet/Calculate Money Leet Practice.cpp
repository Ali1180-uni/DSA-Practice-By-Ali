#include<iostream>
using namespace std;
int checkBalance(int n) {
	int sum = 0;
	int count = 0;
	int i = 1;
	int week = 7;
	while(count != n) {
		for(int j = i; j<=week; j++) {
			sum+=j;
			count++;
			if(count == n) {
				break;
			}
		}
		i++;
		week++;
	}
	return sum;
}
int main() {
	cout<<"Enter Days for Collection"<<endl;
	int num;
	cin>>num;
	int Balance = checkBalance(num);
	cout<<"The Total Collection is: "<<Balance<<"$";
}