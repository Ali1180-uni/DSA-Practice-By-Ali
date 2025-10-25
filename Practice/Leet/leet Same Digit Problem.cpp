#include<iostream>
using namespace std;
bool hasSameDigits(string s) {
	while (s.length() > 2) {
		string next;
		for (int i = 0; i < s.length() - 1; i++) {
			next += to_string(((s[i] - '0') + (s[i + 1] - '0')) % 10);
		}
		s = next;
	}
	return s[0] == s[1];
}
int main() {
	string g = "139";
	string g1 = "323";
	cout<<"length is "<<hasSameDigits(g);
}