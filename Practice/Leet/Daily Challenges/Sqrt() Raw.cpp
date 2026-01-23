#include<iostream>
using namespace std;
double Sqrt(int n) {
	int i = 0;
	while((long long)i*i<=n){
		i++;
	}
	return i-1;
}
int main(){
	cout<<Sqrt(81);
}