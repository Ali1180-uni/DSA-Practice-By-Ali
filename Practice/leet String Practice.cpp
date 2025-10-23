#include<iostream>
using namespace std;
int length(string s) {
	int count = 0;
	for (int i = s.length() - 1; i >= 0; i--) {
		if (s[i] != 32) {
			while (i>=0 && s[i] != 32) {
				count++;
				i--;
			}
			break;
		}
	}
	return count;
}
int main() {
	string s = "Ali is Ali";
	string g = "hi li  ";
	cout<<"length is "<<length(g);
}