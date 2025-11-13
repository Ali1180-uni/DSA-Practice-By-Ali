#include<iostream>
using namespace std;
int maxOperations(string s) {
	int n = s.length();
	int count = 0;
	bool check = true;
	while(check) {
		check = false;
		for(int i = 0; i+1<n; i++) {
			if(s[i] == '1' && s[i+1] == '0') {
				int j = i+1;
				while(j+1 < n && s[j+1] == '0') {
					j++;
				}
				s[i] = '0';
				s[j] = '1';
				check = true;
				count++;
				break;
			}
		}
	}
	for(int i =0; i<n; i++) {
		cout<<s[i]<<" ";
	}
	return count;
}
int main() {
	string binary = "1001101";
	int count = maxOperations(binary);
	cout<<"\nTotal Max opertaions are: "<<count<<endl;
}