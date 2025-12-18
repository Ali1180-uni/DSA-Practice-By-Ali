#include<iostream>
using namespace std;
int main(){
	int radius;
	cout<<"Enter Radius: "<<endl;
	cin>>radius;
	int diameter = radius * 2;
	int circum = radius*2*3.14;
	int area = 3.14*(radius*radius);
	
	cout<<"Area: "<<area<<endl;
	cout<<"Circumference: "<<circum<<endl;
	cout<<"Diameter: "<<diameter<<endl;
}
