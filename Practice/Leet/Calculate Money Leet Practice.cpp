#include<iostream>
using namespace std;
int main() {
	int sum = 0;
	int count = 0;
	int i = 1;
	int week = 7;
	int n = 4;
	while(count != n) {
		for(int j = i; j<=week; j++) {
			sum+=j;
			count++;
			if(count == n){
				break;
			}
		}
		i++;
		week++;
	}
	cout<<sum;
}