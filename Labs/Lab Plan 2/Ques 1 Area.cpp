#include<iostream>
using namespace std;
char getChoice(string shape){
	if(shape == "square" || shape == "Square"){
		return 's';
	}else if(shape == "rectangle" || shape == "Rectangle"){
		return 'r';
	}else if(shape == "circle" || shape == "Circle"){
		return 'c';
	}
}
double calcArea(){
	cout<<"Please Enter the name of Shape"<<endl;
	cout<<"eg: Square, Rectangle & Circle"<<endl;
	string name;
	getline(cin,name);
	int rad;
	char useShape = getChoice(name);
	if(name != "rectangle" && name != "Rectangle"){
		cout<<"Please Enter the Radius: ";
		cin>>rad;
	}
	if(useShape == 's'){
		return rad*rad;
	}else if(useShape == 'c'){
		return 3.14*rad*rad;
	}else if(useShape == 'r'){
		int length,width;
		cout<<"Enter Length: ";
		cin>>length;
		cout<<"Enter Width: ";
		cin>>width;
		return length*width;
	}
}
int main(){
	int Area = calcArea();
	cout<<"Area is: "<<Area;
}