#include<iostream>
using namespace std;

string mergeAlternately(string word1, string word2) {
	int num1 = word1.length();
	int num2 = word2.length();
	string newstr;
	int i = 0, j = 0;

	while (i < num1 || j < num2) {
		if (i < num1) {
			newstr += word1[i];
			i++;
		}
		if (j < num2) {
			newstr += word2[j];
			j++;
		}
	}
	return newstr;
}

int main() {
	string one = "dajmknzgidixqgt";
	string two = "nahamebx";
	cout << mergeAlternately(one, two);
}
