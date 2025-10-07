#include<iostream>
using namespace std;
void Area(int rad){
	cout<<"This is the Area of Square: "<<rad*rad<<endl;
}
void Area(int rad,double PI){
	cout<<"This is the Area of Circle: "<<PI*rad*rad<<endl;
}
void Area(double length,double width){
	cout<<"This is the Area of Rectange: "<<length*width<<endl;
}
int main(){
	Area(12);
	Area(12,3.14);
	Area(12.2,13.4);	
}