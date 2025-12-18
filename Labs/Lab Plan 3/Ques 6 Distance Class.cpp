#include<iostream>
using namespace std;
class Distance{
	public:
		int feet;
		float inches;
		void set(int f, float i){
			feet = f;
			inches = i;
		}
		void Display(){
			cout<<"The Feets are: "<<feet<<endl;
			cout<<"The Inches are: "<<inches<<endl;
		}
		Distance add(Distance data){
			Distance result;
			result.feet = feet + data.feet;
			result.inches = inches + data.inches;
			return result;
		}	
};
int main(){
	Distance d1,d2,result;
	d1.set(12.2,34);
	d2.set(9.9,12);
	cout<<"Data of First Distance Class"<<endl;
	d1.Display();
	cout<<"Data of Second Distance Class"<<endl;
	d2.Display();
	cout<<"Total Distance of First class"<<endl;
	result = d1.add(d1);
	result.Display();
	cout<<"Total Distance of Second class"<<endl;
	result = d2.add(d2);
	result.Display();
}