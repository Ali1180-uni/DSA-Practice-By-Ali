#include<iostream>
using namespace std;

int countOperations(int num1, int num2) {
	int count = 0;
	while (1) {
		if(num1 == 0 || num2 == 0) {
			break;
		} else if (num1 < num2) {
			num2 = num2 - num1;
			count++;
		} else if (num1 >= num2) {
			num1 = num1 - num2;
			count++;
		}
	}
	return count;
}

int main() {
	int num1 = 10;
	int num2 = 10;
	cout<<countOperations(num1,num2);
}