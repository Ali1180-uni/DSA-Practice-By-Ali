#include<iostream>
using namespace std;
class Person{
	public:
		string name;
		int age;
		int CniC;
	Person(string n, int a, int c){
	    name = n;
		age = a;
		CniC = c;		
	}
	void Show(){
		cout<<"Name is : "<<name<<endl;
		cout<<"age is : "<<age<<endl;
		cout<<"CNIC is : "<<CniC<<endl;
	}
};
int main(){
	Person P1("Ali",12,33123);
	Person P2("Talha",11,33113);
	Person P3("Assam",10,33124);
	P1.Show();
	cout<<endl;
	P2.Show();
	cout<<endl;
	P3.Show();
}
