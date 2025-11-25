#include<iostream>
#include<cstring>
using namespace std;
int binaryCheck(int n) {
	while(1) {
		string bin;
		int temp = n;
		while(temp > 0) {
			bin += to_string(temp%2);
			temp/=2;
		}
		bool check = true;
		for(int i = 0; i<bin.length(); i++) {
			if(bin[i] != '1') {
				check = false;
				break;
			}
		}
		if(check == true){
			break;
		}else{
			n++;
		}
	}
	return n;
}
int main() {
	int num = 5;
	cout<<binaryCheck(num);
}